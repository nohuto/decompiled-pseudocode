/*
 * XREFs of sub_14075B988 @ 0x14075B988
 * Callers:
 *     sub_14075B638 @ 0x14075B638 (sub_14075B638.c)
 *     sub_14075B8A0 @ 0x14075B8A0 (sub_14075B8A0.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140842AA4 @ 0x140842AA4 (sub_140842AA4.c)
 *     sub_140842C30 @ 0x140842C30 (sub_140842C30.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 *     sub_140A13228 @ 0x140A13228 (sub_140A13228.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140793480 @ 0x140793480 (sub_140793480.c)
 */

__int64 __fastcall sub_14075B988(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + sub_140793480();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetMappedData");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    sub_1406E0C3C(1LL, (__int64)"SdbpGetMappedTagData");
  return v4;
}
