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
  unsigned __int64 v2; // rcx
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  _BYTE *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rbx
  char v11; // si
  __int64 v12; // rax
  __int128 v13; // xmm0
  _QWORD v14[15]; // [rsp+20h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  LODWORD(v14[3]) = -1;
  LODWORD(v14[9]) = 0;
  LODWORD(v14[14]) = 0;
  v2 = 0LL;
  v14[0] = 0x7800000003LL;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v2);
    v10 = result;
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
    if ( v10 + 8 * (v4 + 2 * (v4 + 8)) )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      {
        RtlAcquireSRWLockExclusive(v10 + 64, v7, v8, v9);
        v11 = 1;
        *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      }
      v12 = 0LL;
      while ( !*(v3 - 2) || *v3 != (_BYTE)a1 )
      {
        v12 = (unsigned int)(v12 + 1);
        v3 += 24;
        if ( (unsigned int)v12 >= 4 )
          goto LABEL_17;
      }
      if ( v10 + 8 * (3 * v12 + 16) )
      {
        v13 = *(_OWORD *)(v10 + 32);
        LODWORD(v14[9]) = 0;
        *(_OWORD *)&v14[5] = v13;
        HIWORD(v14[9]) = a1 | 0x8000;
        EtwpUpdateEnableInfoAndCallback(v10, (__int64)v14);
      }
LABEL_17:
      if ( v11 )
      {
        *(_DWORD *)(v10 + 80) = 0;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 64));
      }
    }
LABEL_5:
    v2 = v10;
  }
}
