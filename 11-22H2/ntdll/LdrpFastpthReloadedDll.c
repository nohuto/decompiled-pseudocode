/*
 * XREFs of LdrpFastpthReloadedDll @ 0x180029B58
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x180029C10 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A550 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x18002A5C8 (LdrpBuildForwarderLink.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D65C (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DBBA4 (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(PUNICODE_STRING a1, __int16 a2, __int64 a3, char **a4)
{
  int LoadedDllByName; // ebx
  _UNICODE_STRING *v7; // rax
  char *v8; // rax
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v13) = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a1;
    a1 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByName;
    v7 = 0LL;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(v7, a1, (__int64)&v13);
  if ( LoadedDllByName >= 0 )
  {
    v8 = *a4;
    if ( *((_DWORD *)*a4 + 67) == 9 )
    {
      LoadedDllByName = -1073740608;
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, (_DWORD)v8, 0, -1073740608, 2);
    }
    else
    {
      LoadedDllByName = -1073741275;
      if ( (_DWORD)v13 == 9 )
      {
        LoadedDllByName = LdrpIncrementModuleLoadCount(v8);
        if ( LoadedDllByName >= 0 )
        {
          LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
          if ( LoadedDllByName >= 0 )
            return (unsigned int)LoadedDllByName;
          if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
          {
            v10 = 1;
          }
          else
          {
            v10 = 0;
            LdrpDrainWorkQueue(0LL);
          }
          LdrpDecrementModuleLoadCountEx(*a4, 0LL);
          if ( !v10 )
            LdrpDropLastInProgressCount(v12, v11);
        }
      }
    }
    LdrpDereferenceModule(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)LoadedDllByName;
}
