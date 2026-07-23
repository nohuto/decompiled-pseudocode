/*
 * XREFs of sub_14097FF40 @ 0x14097FF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025EC08 @ 0x14025EC08 (sub_14025EC08.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406EC158 @ 0x1406EC158 (sub_1406EC158.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 */

LONG_PTR __fastcall sub_14097FF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  _OWORD v10[3]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  memset(v8, 0, sizeof(v8));
  sub_14030D5C0(v4, 0LL, (__int64)v10, a4);
  LODWORD(v8[0]) = 1;
  sub_1406EC338((PEPROCESS)v4, 3, (__int64)v8);
  _InterlockedExchange((volatile __int32 *)(v4 + 2272), 1000);
  sub_14025EC08(*(_QWORD *)(a1 + 8), 1);
  _InterlockedExchange((volatile __int32 *)(v4 + 2272), 0);
  LODWORD(v9) = -1;
  sub_1406EC338((PEPROCESS)v4, 1, (__int64)v8);
  sub_1402D0930((__int64)v10, 0LL);
  v6 = sub_14032A72C(v4);
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_1406EC158(v6, a1);
  return ObfDereferenceObjectWithTag((PVOID)v4, 0x73576D4Du);
}
