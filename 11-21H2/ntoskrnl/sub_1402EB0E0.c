/*
 * XREFs of sub_1402EB0E0 @ 0x1402EB0E0
 * Callers:
 *     sub_1402313B4 @ 0x1402313B4 (sub_1402313B4.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 * Callees:
 *     sub_1402EB110 @ 0x1402EB110 (sub_1402EB110.c)
 */

_BOOL8 __fastcall sub_1402EB0E0(_QWORD *a1)
{
  a1[1] = &qword_140C53340;
  *a1 = 0LL;
  return (unsigned int)sub_1402EB110() != 0;
}
