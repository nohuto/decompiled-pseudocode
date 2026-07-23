/*
 * XREFs of sub_1406F2278 @ 0x1406F2278
 * Callers:
 *     sub_1406DCC74 @ 0x1406DCC74 (sub_1406DCC74.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_140293268 @ 0x140293268 (sub_140293268.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall sub_1406F2278(
        USHORT *a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        int a9)
{
  USHORT v9; // cx
  int v12; // [rsp+50h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-30h] BYREF

  v9 = *a1;
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
  v12 = (unsigned __int16)sub_140293268((__int64)&Affinity, a8, 0LL, 0);
  return PsCreateSystemThreadEx(a9, 0x1FFFFF, 0LL, a4, 0LL, a6, a7, (__int128 *)&Affinity, &v12);
}
