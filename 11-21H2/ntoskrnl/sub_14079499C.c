/*
 * XREFs of sub_14079499C @ 0x14079499C
 * Callers:
 *     sub_14075B638 @ 0x14075B638 (sub_14075B638.c)
 *     sub_14075B8A0 @ 0x14075B8A0 (sub_14075B8A0.c)
 *     sub_14078EE18 @ 0x14078EE18 (sub_14078EE18.c)
 *     sub_14078F124 @ 0x14078F124 (sub_14078F124.c)
 *     sub_140791640 @ 0x140791640 (sub_140791640.c)
 *     sub_140791910 @ 0x140791910 (sub_140791910.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_1407941A4 @ 0x1407941A4 (sub_1407941A4.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140842AF4 @ 0x140842AF4 (sub_140842AF4.c)
 *     sub_140842BCC @ 0x140842BCC (sub_140842BCC.c)
 *     sub_140842C30 @ 0x140842C30 (sub_140842C30.c)
 *     sub_140843624 @ 0x140843624 (sub_140843624.c)
 *     sub_140A1311C @ 0x140A1311C (sub_140A1311C.c)
 *     sub_140A13228 @ 0x140A13228 (sub_140A13228.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 */

__int64 __fastcall sub_14079499C(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)sub_140797F3C(a1, a2, &v3, 2LL) )
    return v3;
  sub_1406E0C3C(1LL, (__int64)"SdbGetTagFromTagID");
  return 0LL;
}
