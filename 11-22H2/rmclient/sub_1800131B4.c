/*
 * XREFs of sub_1800131B4 @ 0x1800131B4
 * Callers:
 *     RmDisconnectProcessManager @ 0x18001C400 (RmDisconnectProcessManager.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 *     sub_1800165E0 @ 0x1800165E0 (sub_1800165E0.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_1800131B4(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 i; // rax
  int v5; // eax
  int v6; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp-39h] BYREF
  char v11[4]; // [rsp+34h] [rbp-35h] BYREF
  int v12; // [rsp+38h] [rbp-31h] BYREF
  int v13; // [rsp+3Ch] [rbp-2Dh] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-19h] BYREF
  int *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  char *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  int *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]

  v1 = a1 + 16;
  RtlAcquireSRWLockExclusive(a1 + 16);
  v3 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 1) != 0 )
    __int2c();
  *(_QWORD *)(a1 + 40) = v3 | 1;
  RtlReleaseSRWLockExclusive(v1);
  sub_18001F1C4(a1 + 48);
  *(_DWORD *)(a1 + 96) |= 1u;
  *(_DWORD *)(a1 + 56) = 0;
  RtlReleaseSRWLockExclusive(a1 + 48);
  RtlWakeAddressAll(a1 + 96);
  if ( *(_QWORD *)(a1 + 72) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  for ( i = sub_180012AD0(a1); ; i = sub_1800165E0(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    RtlAcquireSRWLockShared(i + 64);
    if ( (*(_BYTE *)(v7 + 104) & 8) != 0 )
      __int2c();
    RtlReleaseSRWLockShared(v7 + 64);
    v14[1] = 0LL;
    v14[0] = 33554442LL;
    v5 = sub_180013F04(v7, 0LL, v14, v11);
    v6 = v5;
    if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
    {
      v24 = 0;
      v21 = 0;
      v18 = 0;
      v12 = v5;
      v10 = v11[0];
      v13 = *(_DWORD *)(v7 + 80);
      v22 = &v12;
      v19 = &v10;
      v16 = &v13;
      v23 = 4;
      v20 = 1;
      v17 = 4;
      sub_180001104((__int64)&dword_180032000, (unsigned __int8 *)dword_18002A62D, 0LL, 0LL, 5u, &v15);
    }
    if ( v6 < 0 )
      __int2c();
  }
  RtlAcquireSRWLockExclusive(v1);
  if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
    __int2c();
  while ( *(_QWORD *)(a1 + 40) >= 2uLL )
    RtlSleepConditionVariableSRW(a1 + 32, v1, 0LL, 0LL);
  result = RtlReleaseSRWLockExclusive(v1);
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
    return TpWaitForWork(v9, 0LL);
  return result;
}
