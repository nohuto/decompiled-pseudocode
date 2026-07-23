/*
 * XREFs of EtwpDisableTraceProviders @ 0x18005E51C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x18005F714 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x18005EBB4 (EtwpGetNextRegistration.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  __int64 v2; // rcx
  _BYTE *v3; // rdi
  unsigned int v4; // ecx
  _BYTE *v5; // rax
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // si
  __int64 v9; // rax
  __int128 v10; // xmm0
  _DWORD v11[10]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v12; // [rsp+48h] [rbp-60h]
  int v13; // [rsp+68h] [rbp-40h]
  __int16 v14; // [rsp+6Eh] [rbp-3Ah]
  int v15; // [rsp+90h] [rbp-18h]

  memset_thunk_772440563353939046(v11, 0, 0x78uLL);
  v11[6] = -1;
  v13 = 0;
  v15 = 0;
  v2 = 0LL;
  v11[0] = 3;
  v11[1] = 120;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v2);
    v7 = result;
    if ( !result )
      return result;
    v3 = (_BYTE *)(result + 142);
    v4 = 0;
    v5 = (_BYTE *)(result + 142);
    while ( !*(v5 - 2) || *v5 != (_BYTE)a1 )
    {
      ++v4;
      v5 += 24;
      if ( v4 >= 4 )
        goto LABEL_5;
    }
    if ( v7 + 24 * (v4 + 5LL) )
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
      if ( v7 + 24 * (v9 + 5) )
      {
        v10 = *(_OWORD *)(v7 + 32);
        v13 = 0;
        v12 = v10;
        v14 = a1 | 0x8000;
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
    v2 = v7;
  }
}
