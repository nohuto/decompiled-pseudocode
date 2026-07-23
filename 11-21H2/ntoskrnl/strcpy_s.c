/*
 * XREFs of strcpy_s @ 0x1403E71A0
 * Callers:
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     sub_140837688 @ 0x140837688 (sub_140837688.c)
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 *     sub_140AAA44C @ 0x140AAA44C (sub_140AAA44C.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v5 = a1 - Src;
      while ( 1 )
      {
        v6 = *Src;
        Src[v5] = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInBytes )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *a1 = 0;
      _misaligned_access();
      return v4;
    }
  }
  else
  {
    _misaligned_access();
    return 22;
  }
}
