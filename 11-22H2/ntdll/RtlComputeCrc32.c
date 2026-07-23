/*
 * XREFs of RtlComputeCrc32 @ 0x180052BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 v4; // ecx
  char v5; // al

  v4 = ~PartialCrc;
  if ( Length )
  {
    *(_QWORD *)&Length = Length;
    do
    {
      v5 = *(_BYTE *)Buffer;
      Buffer = (char *)Buffer + 1;
      v4 = RtlCrc32Table[(unsigned __int8)(v5 ^ v4)] ^ (v4 >> 8);
      --*(_QWORD *)&Length;
    }
    while ( *(_QWORD *)&Length );
  }
  return ~v4;
}
