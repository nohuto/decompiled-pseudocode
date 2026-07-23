/*
 * XREFs of sub_140287C30 @ 0x140287C30
 * Callers:
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_14027034C @ 0x14027034C (sub_14027034C.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1405C48A0 @ 0x1405C48A0 (sub_1405C48A0.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1409706E4 @ 0x1409706E4 (sub_1409706E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140287C30(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
