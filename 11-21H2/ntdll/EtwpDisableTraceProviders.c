/*
 * XREFs of EtwpDisableTraceProviders @ 0x180090A24
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1800909A0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwpGetNextRegistration @ 0x180007898 (EtwpGetNextRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  _RTL_SRWLOCK *v2; // rcx
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  _BYTE *v5; // rax
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // si
  __int64 v9; // rax
  __int128 v10; // xmm0
  _QWORD v11[15]; // [rsp+20h] [rbp-88h] BYREF

  memset(v11, 0, sizeof(v11));
  LODWORD(v11[3]) = -1;
  LODWORD(v11[9]) = 0;
  LODWORD(v11[14]) = 0;
  v2 = 0LL;
  v11[0] = 0x7800000003LL;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v2);
    v7 = result;
    if ( !result )
      return result;
    v3 = (_BYTE *)(result + 150);
    v4 = 0LL;
    v5 = (_BYTE *)(result + 150);
    while ( !*(v5 - 2) || *v5 != (_BYTE)a1 )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 24;
      if ( (unsigned int)v4 >= 4 )
        goto LABEL_5;
    }
    if ( v7 + 8 * (v4 + 2 * (v4 + 8)) )
    {
      v8 = 0;
      if ( *(_DWORD *)(v7 + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v7 + 64));
        v8 = 1;
        *(_DWORD *)(v7 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      }
      v9 = 0LL;
      while ( !*(v3 - 2) || *v3 != (_BYTE)a1 )
      {
        v9 = (unsigned int)(v9 + 1);
        v3 += 24;
        if ( (unsigned int)v9 >= 4 )
          goto LABEL_17;
      }
      if ( v7 + 8 * (3 * v9 + 16) )
      {
        v10 = *(_OWORD *)(v7 + 32);
        LODWORD(v11[9]) = 0;
        *(_OWORD *)&v11[5] = v10;
        HIWORD(v11[9]) = a1 | 0x8000;
        EtwpUpdateEnableInfoAndCallback(v7, (__int64)v11);
      }
LABEL_17:
      if ( v8 )
      {
        *(_DWORD *)(v7 + 80) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v7 + 64));
      }
    }
LABEL_5:
    v2 = (_RTL_SRWLOCK *)v7;
  }
}
