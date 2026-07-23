/*
 * XREFs of sub_140528650 @ 0x140528650
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051ABD8 @ 0x14051ABD8 (sub_14051ABD8.c)
 *     sub_140529408 @ 0x140529408 (sub_140529408.c)
 */

__int64 __fastcall sub_140528650(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // r8
  ULONG_PTR v6; // r10
  ULONG_PTR v7; // r11

  if ( *(_DWORD *)(a1 + 8) )
    return 3221225711LL;
  if ( !(unsigned __int8)sub_140529408(a3) )
    return 3221225713LL;
  if ( (v6 & 0xFFF) != 0 )
    return 3221225714LL;
  return sub_14051ABD8(
           v7,
           a2,
           (int)v5 + 8 * (*(_DWORD *)(v5 + 44) >> 12) + 48,
           (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12,
           v6);
}
