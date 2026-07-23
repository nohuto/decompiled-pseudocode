/*
 * XREFs of sub_14045BF60 @ 0x14045BF60
 * Callers:
 *     sub_14045BDA0 @ 0x14045BDA0 (sub_14045BDA0.c)
 * Callees:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_14045BBD4 @ 0x14045BBD4 (sub_14045BBD4.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 */

__int64 __fastcall sub_14045BF60(__int64 a1)
{
  __int64 i; // rbx
  _DWORD *v3; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; sub_14045BBD4(a1, *(_DWORD **)(i + 208)) )
  {
    if ( *(_DWORD *)(i + 36) )
      sub_1402C1D70(*(_QWORD *)(a1 + 24), i + 24, 0);
    v3 = *(_DWORD **)(i + 208);
    if ( !v3 || !*v3 || !(unsigned int)sub_14045BCA2(a1, v3) )
      break;
  }
  return 0LL;
}
