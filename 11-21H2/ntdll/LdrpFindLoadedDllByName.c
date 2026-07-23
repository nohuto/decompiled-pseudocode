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

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v8; // rbx
  int v9; // edi
  int v10; // r9d
  unsigned __int16 *i; // r10
  unsigned __int64 v12; // r8
  int LoadedDllByNameLockHeld; // edi
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // r9d
  char *v18; // rcx
  char *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-28h]
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a1;
  if ( !a1 )
  {
    LdrpGetBaseNameFromFullName(a2, v21);
    v8 = (unsigned __int16 *)v21;
  }
  v9 = 0;
  if ( !v8 )
    goto LABEL_25;
  v10 = *v8 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)v8 + 1); v10; v9 = (unsigned __int16)v12 + 65599 * v9 )
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
LABEL_25:
    v9 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v8, a2, a3, a4, v9);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( a2 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v16 = 2147353476LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v18 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v18 & 0x20) != 0 )
      {
        LOBYTE(v17) = -(LoadedDllByNameLockHeld >= 0);
        v20 = a2;
LABEL_40:
        LOBYTE(v17) = ~(_BYTE)v17 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v17, v20, 0LL);
      }
    }
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v19 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v19 & 0x20) != 0 )
      {
        LOBYTE(v17) = -(LoadedDllByNameLockHeld >= 0);
        v20 = (__int64)v8;
        goto LABEL_40;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
