/*
 * XREFs of sub_1407668C8 @ 0x1407668C8
 * Callers:
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 * Callees:
 *     sub_140767E88 @ 0x140767E88 (sub_140767E88.c)
 */

__int64 __fastcall sub_1407668C8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx

  if ( a2 )
    v2 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    v3 = *(_QWORD *)(v2 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
  return sub_140767E88(*a1, *(_QWORD *)(v3 + 32), 0LL);
}
