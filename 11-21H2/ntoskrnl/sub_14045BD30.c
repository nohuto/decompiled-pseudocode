/*
 * XREFs of sub_14045BD30 @ 0x14045BD30
 * Callers:
 *     sub_140596EA0 @ 0x140596EA0 (sub_140596EA0.c)
 * Callees:
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14045BBD4 @ 0x14045BBD4 (sub_14045BBD4.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 */

__int64 __fastcall sub_14045BD30(__int64 a1)
{
  __int64 i; // rbx
  _DWORD *v3; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; sub_14045BBD4(a1, *(_DWORD **)(i + 248)) )
  {
    sub_14032F1B0(*(_QWORD *)(i + 56));
    v3 = *(_DWORD **)(i + 248);
    if ( !v3 || !*v3 || !(unsigned int)sub_14045BCA2(a1, v3) )
      break;
  }
  return 0LL;
}
