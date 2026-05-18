/*
 * XREFs of sub_180012728 @ 0x180012728
 * Callers:
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_18003B0A8 @ 0x18003B0A8 (sub_18003B0A8.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18003D8E8 @ 0x18003D8E8 (sub_18003D8E8.c)
 *     sub_18003D938 @ 0x18003D938 (sub_18003D938.c)
 * Callees:
 *     sub_180012548 @ 0x180012548 (sub_180012548.c)
 */

unsigned __int64 sub_180012728()
{
  unsigned __int64 result; // rax
  __int64 v1; // r8
  unsigned __int64 v2; // rdx

  result = sub_180012548((__int64)&unk_1801D2B60);
  *(_QWORD *)(v1 + 208) = result;
  v2 = *(_QWORD *)(v1 + 216);
  if ( result >= v2 )
    v2 = result;
  *(_QWORD *)(v1 + 216) = v2;
  return result;
}
