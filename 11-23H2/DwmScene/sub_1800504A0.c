/*
 * XREFs of sub_1800504A0 @ 0x1800504A0
 * Callers:
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 */

bool __fastcall sub_1800504A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rbp
  __int64 v5; // rcx
  bool v6; // bl
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]

  v2 = (_QWORD *)(a1 + 18592);
  sub_18001CAA0((__int64 *)(a1 + 18592), (__int64)v8, a2);
  v4 = v9;
  v6 = 0;
  if ( sub_18001CB40(v5, v9, a2) )
    v6 = v4 != *v2;
  sub_180011B24((__int64)a2);
  return v6;
}
