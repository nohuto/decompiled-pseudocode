/*
 * XREFs of RtlComputeCrc32 @ 0x140369820
 * Callers:
 *     sub_14035F614 @ 0x14035F614 (sub_14035F614.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 *     sub_14064FBF4 @ 0x14064FBF4 (sub_14064FBF4.c)
 *     sub_14064FC7C @ 0x14064FC7C (sub_14064FC7C.c)
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_1407EDB78 @ 0x1407EDB78 (sub_1407EDB78.c)
 *     sub_140810990 @ 0x140810990 (sub_140810990.c)
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_140B0B5F8 @ 0x140B0B5F8 (sub_140B0B5F8.c)
 * Callees:
 *     <none>
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~PartialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = *(_BYTE *)Buffer;
      Buffer = (char *)Buffer + 1;
      v4 = (v4 >> 8) ^ *((_DWORD *)qword_140016880 + (unsigned __int8)(v6 ^ v4));
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
