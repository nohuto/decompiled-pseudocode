/*
 * XREFs of sub_140B22134 @ 0x140B22134
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B22190 @ 0x140B22190 (sub_140B22190.c)
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B223B4 @ 0x140B223B4 (sub_140B223B4.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 */

__int64 sub_140B22134()
{
  int v0; // ebx
  _BYTE v2[72]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, 0x40uLL);
  v0 = sub_140B223B4(v2);
  if ( v0 >= 0 )
  {
    v0 = sub_140B225D8(v2);
    if ( v0 >= 0 )
      v0 = sub_140B22228(v2);
  }
  sub_140B22190(v2);
  return (unsigned int)v0;
}
