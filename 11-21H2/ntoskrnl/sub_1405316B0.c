/*
 * XREFs of sub_1405316B0 @ 0x1405316B0
 * Callers:
 *     sub_140532460 @ 0x140532460 (sub_140532460.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140532A28 @ 0x140532A28 (sub_140532A28.c)
 */

__int64 __fastcall sub_1405316B0(__int64 a1, unsigned __int16 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)a2;
  v6 = *a2 | ((*(_QWORD *)a2 & 0xFFFF0000LL | 0x700000000000LL) << 16);
  v4 = v3 & 0x1FF00000000LL;
  v7 = v4;
  if ( a3 < 0 )
    v7 = v4 & 0xFFFF0FFFFFFFFFFFuLL | 0x100000000000LL;
  return sub_140532A28(a1, &v6, 0LL);
}
