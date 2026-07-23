/*
 * XREFs of sub_14059A6F4 @ 0x14059A6F4
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_14096BF70 @ 0x14096BF70 (sub_14096BF70.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14059A6F4(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
