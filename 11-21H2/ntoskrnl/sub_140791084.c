/*
 * XREFs of sub_140791084 @ 0x140791084
 * Callers:
 *     sub_14078F124 @ 0x14078F124 (sub_14078F124.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842BCC @ 0x140842BCC (sub_140842BCC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140793480 @ 0x140793480 (sub_140793480.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 */

__int64 __fastcall sub_140791084(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int v8; // ebx
  int v9; // eax

  v6 = a2;
  v8 = sub_14079422C(a1, a2);
  if ( v8 <= a4 )
  {
    v9 = sub_140793480(a1, v6);
    if ( (unsigned int)sub_140797F3C(a1, v6 + v9, a3, v8) )
      return 1LL;
  }
  sub_1406E0C3C(1LL, (__int64)"SdbpReadTagData");
  return 0LL;
}
