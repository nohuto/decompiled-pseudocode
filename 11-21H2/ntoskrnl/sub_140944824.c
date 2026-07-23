/*
 * XREFs of sub_140944824 @ 0x140944824
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     sub_140950C38 @ 0x140950C38 (sub_140950C38.c)
 */

__int64 __fastcall sub_140944824(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( !a2 )
    a2 = *((_QWORD *)qword_140C46278 + 4);
  if ( !*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) )
    return 3221225712LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( v4 )
    return sub_140950C38(a1, a2, a3, a2, 6, v4 + 40);
  else
    return 3221225713LL;
}
