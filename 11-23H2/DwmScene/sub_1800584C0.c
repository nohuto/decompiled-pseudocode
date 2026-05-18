/*
 * XREFs of sub_1800584C0 @ 0x1800584C0
 * Callers:
 *     sub_1800570D8 @ 0x1800570D8 (sub_1800570D8.c)
 *     sub_1800616CC @ 0x1800616CC (sub_1800616CC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 */

__int64 __fastcall sub_1800584C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v4 = sub_180010B48(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
