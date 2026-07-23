/*
 * XREFs of sub_14099F030 @ 0x14099F030
 * Callers:
 *     sub_14099F1CC @ 0x14099F1CC (sub_14099F1CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

__int64 __fastcall sub_14099F030(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 >= 0xC )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C1CB30);
    v3 = 0;
    byte_140C1CB28 = *(_BYTE *)(a2 + 8) != 0;
    sub_1402935D0((ULONG_PTR)&qword_140C1CB30);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
