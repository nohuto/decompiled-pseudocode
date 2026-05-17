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

__int64 __fastcall LdrpFastpthReloadedDll(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // r14
  int v6; // ebp
  unsigned __int16 *v7; // rsi
  int LoadedDllByNameLockHeld; // ebx
  int v9; // ebx
  unsigned __int16 *i; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v17; // rcx
  char v18; // si
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0;
  v4 = (__int64 *)a4;
  v5 = a3;
  v6 = a2;
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
    a4 = *v7 >> 1;
    for ( i = (unsigned __int16 *)*((_QWORD *)v7 + 1); (_DWORD)a4; v9 = (unsigned __int16)a3 + 65599 * v9 )
    {
      a3 = *i;
      a4 = (unsigned int)(a4 - 1);
      ++i;
      if ( (unsigned int)a3 >= 0x61 )
      {
        if ( (unsigned int)a3 > 0x7A )
        {
          if ( qword_1801776F8 && (unsigned __int16)a3 >= 0xC0u )
          {
            a2 = a3 & 0xF;
            LOWORD(a3) = *(_WORD *)(qword_1801776F8
                                  + 2LL
                                  * ((unsigned int)a2
                                   + *(unsigned __int16 *)(qword_1801776F8
                                                         + 2LL
                                                         * (((unsigned __int8)a3 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801776F8
                                                                                              + 2 * (a3 >> 8))))))
                       + a3;
          }
        }
        else
        {
          LOWORD(a3) = a3 - 32;
        }
      }
    }
    if ( !v9 )
LABEL_28:
      v9 = 0x80000000;
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((_DWORD)v7, 0, v6, (_DWORD)v4, v9);
    if ( LoadedDllByNameLockHeld >= 0 )
      v20 = *(_DWORD *)(*(_QWORD *)(*v4 + 152) + 56LL);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v17 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v17 & 0x20) != 0 )
      {
        LOBYTE(v13) = LoadedDllByNameLockHeld < 0 ? 3 : 0;
        LdrpLogEtwEvent(5280, 0, 0, v13, (__int64)v7, 0LL);
      }
    }
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByNameLockHeld;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByName(0, (_DWORD)a1, a2, a4, (__int64)&v20);
  }
  if ( LoadedDllByNameLockHeld >= 0 )
  {
    v15 = *v4;
    if ( *(_DWORD *)(*v4 + 268) == 9 )
    {
      LoadedDllByNameLockHeld = -1073740608;
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v15, 0, -1073740608, 2);
    }
    else
    {
      LoadedDllByNameLockHeld = -1073741275;
      if ( v20 == 9 )
      {
        LoadedDllByNameLockHeld = LdrpIncrementModuleLoadCount(v15);
        if ( LoadedDllByNameLockHeld >= 0 )
        {
          LoadedDllByNameLockHeld = LdrpBuildForwarderLink(v5, *v4);
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
          LdrpDecrementModuleLoadCountEx(*v4, 0LL);
          if ( !v18 )
            LdrpDropLastInProgressCount();
        }
      }
    }
    LdrpDereferenceModule(*v4, v11, v12, v13);
    *v4 = 0LL;
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
