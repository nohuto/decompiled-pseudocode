/*
 * XREFs of sub_1405FDEC0 @ 0x1405FDEC0
 * Callers:
 *     sub_1409644D8 @ 0x1409644D8 (sub_1409644D8.c)
 * Callees:
 *     sub_140A821E0 @ 0x140A821E0 (sub_140A821E0.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89E7C @ 0x140A89E7C (sub_140A89E7C.c)
 */

__int64 __fastcall sub_1405FDEC0(__int64 a1)
{
  sub_140A89D58();
  LODWORD(a1) = sub_140A821E0(a1);
  sub_140A89E7C();
  return (unsigned int)a1;
}
