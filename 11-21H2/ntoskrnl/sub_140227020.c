/*
 * XREFs of sub_140227020 @ 0x140227020
 * Callers:
 *     sub_140226EE0 @ 0x140226EE0 (sub_140226EE0.c)
 *     sub_1403C48E0 @ 0x1403C48E0 (sub_1403C48E0.c)
 *     sub_14045BDA0 @ 0x14045BDA0 (sub_14045BDA0.c)
 *     sub_140596EA0 @ 0x140596EA0 (sub_140596EA0.c)
 * Callees:
 *     sub_140228C50 @ 0x140228C50 (sub_140228C50.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 */

__int64 __fastcall sub_140227020(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v8; // r8

  if ( !a4 && ((*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)sub_140228C50(a1)) )
    return 0LL;
  if ( !_bittest64((const signed __int64 *)(a3 + 40), 0x28u) )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 > 0 )
    {
      if ( (unsigned int)sub_1403336E0(a1, a2, v8 | 0x8000000000000000uLL) )
        *a5 = sub_140317A10(a2);
    }
  }
  return 1LL;
}
