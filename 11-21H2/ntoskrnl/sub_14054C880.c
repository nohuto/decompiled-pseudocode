/*
 * XREFs of sub_14054C880 @ 0x14054C880
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall sub_14054C880(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  char v4; // di
  ULONG ActiveProcessorCount; // eax
  char *i; // rcx

  v1 = 0;
  if ( byte_140D05016 )
    return a1;
  v3 = a1 >> 6;
  v4 = a1 & 0x3F;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0LL;
  for ( i = byte_140D0CBD0; *i != (_BYTE)v3 || i[1] != v4; i += 2 )
  {
    if ( ++v1 >= ActiveProcessorCount )
      return 0LL;
  }
  return v1;
}
