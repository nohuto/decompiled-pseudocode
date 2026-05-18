/*
 * XREFs of sub_180069018 @ 0x180069018
 * Callers:
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 */

__int64 __fastcall sub_180069018(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (__int64 *)sub_18006958C(a1, v9, a3, a2);
  v6 = (unsigned int)sub_1800569D0(*v4, v5);
  sub_180010910((__int64)v9);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v7, v6) )
    LODWORD(v6) = -1;
  return (unsigned int)v6;
}
