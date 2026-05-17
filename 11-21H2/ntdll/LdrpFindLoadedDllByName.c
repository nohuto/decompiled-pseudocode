/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180041240
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004DD44 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFindLoadedDllInternal @ 0x18004F834 (LdrpFindLoadedDllInternal.c)
 *     LdrGetDllHandleByName @ 0x18007ED20 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r14
  int v6; // ebp
  unsigned __int64 v7; // rsi
  unsigned __int16 *v8; // rbx
  int v9; // edi
  unsigned __int16 *i; // r10
  int LoadedDllByNameLockHeld; // edi
  __int64 v12; // rcx
  __int64 v14; // rcx
  int v15; // r9d
  char *v16; // rcx
  char *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-28h]
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( !a1 )
  {
    LdrpGetBaseNameFromFullName(a2, v19);
    v8 = (unsigned __int16 *)v19;
  }
  v9 = 0;
  if ( !v8 )
    goto LABEL_25;
  a4 = *v8 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)v8 + 1); (_DWORD)a4; v9 = (unsigned __int16)a3 + 65599 * v9 )
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
LABEL_25:
    v9 = 0x80000000;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((_DWORD)v8, v7, v6, v5, v9);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v7 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v16 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v16 & 0x20) != 0 )
      {
        LOBYTE(v15) = -(LoadedDllByNameLockHeld >= 0);
        v18 = v7;
LABEL_40:
        LOBYTE(v15) = ~(_BYTE)v15 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v15, v18, 0LL);
      }
    }
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v17 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v17 & 0x20) != 0 )
      {
        LOBYTE(v15) = -(LoadedDllByNameLockHeld >= 0);
        v18 = (__int64)v8;
        goto LABEL_40;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
