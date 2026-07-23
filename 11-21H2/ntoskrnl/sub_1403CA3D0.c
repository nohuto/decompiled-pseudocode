/*
 * XREFs of sub_1403CA3D0 @ 0x1403CA3D0
 * Callers:
 *     sub_1403C48E0 @ 0x1403C48E0 (sub_1403C48E0.c)
 * Callees:
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14045BBD4 @ 0x14045BBD4 (sub_14045BBD4.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 */

__int64 __fastcall sub_1403CA3D0(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; sub_14045BBD4(a1, *(_QWORD *)(i + 16), sub_140596DF0, i) )
  {
    v3 = *(_QWORD *)(i + 8);
    if ( v3 )
      sub_14032F1B0(v3);
    v4 = *(_DWORD **)(i + 16);
    if ( !v4 || !*v4 || !(unsigned int)sub_14045BCA2(a1, v4, *(_QWORD *)(i + 8) != 0LL) )
      break;
  }
  return 0LL;
}
