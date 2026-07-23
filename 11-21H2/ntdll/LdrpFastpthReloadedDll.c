/*
 * XREFs of LdrpFastpthReloadedDll @ 0x18003F710
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpBuildForwarderLink @ 0x18003FB90 (LdrpBuildForwarderLink.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180052674 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(unsigned __int16 *a1, unsigned int a2, __int64 a3, char **a4)
{
  unsigned __int16 *v7; // rsi
  int LoadedDllByNameLockHeld; // ebx
  int v9; // ebx
  int v10; // r9d
  unsigned __int16 *i; // r10
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  char *v14; // rax
  int v16; // r9d
  char *v17; // rcx
  char v18; // si
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0;
  v7 = a1;
  LoadedDllByNameLockHeld = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    if ( !a1 )
    {
      LdrpGetBaseNameFromFullName(0LL, v19);
      v7 = (unsigned __int16 *)v19;
    }
    v9 = 0;
    if ( !v7 )
      goto LABEL_28;
    v10 = *v7 >> 1;
    for ( i = (unsigned __int16 *)*((_QWORD *)v7 + 1); v10; v9 = (unsigned __int16)v12 + 65599 * v9 )
    {
      v12 = *i;
      --v10;
      ++i;
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( qword_1801776F8 && (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *(_WORD *)(qword_1801776F8
                                   + 2
                                   * ((v12 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801776F8
                                                          + 2LL
                                                          * (((unsigned __int8)v12 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801776F8
                                                                                               + 2 * (v12 >> 8))))))
                        + v12;
        }
        else
        {
          LOWORD(v12) = v12 - 32;
        }
      }
    }
    if ( !v9 )
LABEL_28:
      v9 = 0x80000000;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v7, 0LL, a2, a4, v9);
    if ( LoadedDllByNameLockHeld >= 0 )
      v20 = *(_DWORD *)(*((_QWORD *)*a4 + 19) + 56LL);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v17 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v17 & 0x20) != 0 )
      {
        LOBYTE(v16) = LoadedDllByNameLockHeld < 0 ? 3 : 0;
        LdrpLogEtwEvent(5280, 0, 0, v16, (__int64)v7, 0LL);
      }
    }
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByNameLockHeld;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByName(0, (_DWORD)a1, a2, (_DWORD)a4, (__int64)&v20);
  }
  if ( LoadedDllByNameLockHeld >= 0 )
  {
    v14 = *a4;
    if ( *((_DWORD *)*a4 + 67) == 9 )
    {
      LoadedDllByNameLockHeld = -1073740608;
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, (_DWORD)v14, 0, -1073740608, 2);
    }
    else
    {
      LoadedDllByNameLockHeld = -1073741275;
      if ( v20 == 9 )
      {
        LoadedDllByNameLockHeld = LdrpIncrementModuleLoadCount(v14);
        if ( LoadedDllByNameLockHeld >= 0 )
        {
          LoadedDllByNameLockHeld = LdrpBuildForwarderLink(a3, *a4);
          if ( LoadedDllByNameLockHeld >= 0 )
            return (unsigned int)LoadedDllByNameLockHeld;
          if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
          {
            v18 = 1;
          }
          else
          {
            v18 = 0;
            LdrpDrainWorkQueue(0LL);
          }
          LdrpDecrementModuleLoadCountEx(*a4, 0LL);
          if ( !v18 )
            LdrpDropLastInProgressCount();
        }
      }
    }
    LdrpDereferenceModule(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
