/*
 * XREFs of sub_1405974D0 @ 0x1405974D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14045BF06 @ 0x14045BF06 (sub_14045BF06.c)
 */

__int64 __fastcall sub_1405974D0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v6 = sub_140317A10(a3);
  v7 = *a2;
  v11 = v6;
  if ( (v7 & 2) != 0 )
    v8 = (v6 & 0x20) == 0;
  else
    v8 = (v7 & 1) == 0;
  if ( v8 )
  {
    v9 = sub_140317A10((unsigned __int64)&v11);
    sub_14045BF06(v3, a3, 48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  return 0LL;
}
