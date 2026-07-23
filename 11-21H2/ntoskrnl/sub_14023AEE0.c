/*
 * XREFs of sub_14023AEE0 @ 0x14023AEE0
 * Callers:
 *     sub_14023AC88 @ 0x14023AC88 (sub_14023AC88.c)
 * Callees:
 *     sub_14023AF30 @ 0x14023AF30 (sub_14023AF30.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 */

__int64 __fastcall sub_14023AEE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10

  if ( qword_140C4A848 )
  {
    LOBYTE(a3) = 1;
    sub_14023AF30(qword_140C4A848, a1, a3);
  }
  else
  {
    v3 = sub_1403BF3B8(a1, 1, 0, 1, 4);
    qword_140C4A848 = v3;
  }
  return v3;
}
