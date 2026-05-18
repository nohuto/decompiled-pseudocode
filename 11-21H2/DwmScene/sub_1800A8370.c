/*
 * XREFs of sub_1800A8370 @ 0x1800A8370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18001FEAC @ 0x18001FEAC (sub_18001FEAC.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800A8370(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  __int64 *v9; // rax
  __int128 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rsi
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v18[2]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v20; // [rsp+48h] [rbp-59h]
  _BYTE v21[16]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v22[3]; // [rsp+60h] [rbp-41h] BYREF
  char *v23[3]; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-11h]
  char *v25[3]; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v26; // [rsp+B0h] [rbp+Fh]

  v9 = sub_18001DCD4((__int64 *)v23, a1 + 3, byte_180137358);
  sub_18001FEAC((__int64)v25, (__int64)v9, a5);
  if ( v24 >= 0x10 )
    sub_180010884(v23[0], v24 + 1);
  sub_180063BE4((__int64)a1, (__int64)v18, a2);
  sub_180028460(*a2);
  sub_1800B4528(v21, v18, v25);
  v10 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v19);
  sub_180031DF4(v22, v10, (__int64)v25);
  v11 = v20;
  if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD *))(*a1 + 192LL))(a1, a2, a3);
  v12 = a1[2];
  if ( !v12 )
LABEL_17:
    sub_1800120F4();
  v13 = *(_DWORD *)(v12 + 8);
  do
  {
    if ( !v13 )
      goto LABEL_17;
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
  }
  while ( v14 != v13 );
  sub_180018704((__int64)v23);
  v15 = a1[14];
  for ( i = a1[13]; i != v15; i += 48LL )
    sub_180052D40(*a4, v18, 0LL, (__int64 *)v23);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1);
  sub_180010910((__int64)v23);
  sub_180032F84(v22);
  sub_1800B4684(v21);
  result = sub_180010910((__int64)v18);
  if ( v26 >= 0x10 )
    return sub_180010884(v25[0], v26 + 1);
  return result;
}
