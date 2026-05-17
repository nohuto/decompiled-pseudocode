/*
 * XREFs of _StartPathWithLongPathPrefixIfNeeded @ 0x180129080
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x180128E24 (_BuildCumulativeOverlayFilePath.c)
 *     _BuildStandardOverlayFilePath @ 0x180128F68 (_BuildStandardOverlayFilePath.c)
 * Callees:
 *     memcpy_s @ 0x18009EF80 (memcpy_s.c)
 *     memmove_s @ 0x18009F020 (memmove_s.c)
 */

__int64 __fastcall StartPathWithLongPathPrefixIfNeeded(rsize_t SourceSize, rsize_t DestinationSize, char *Destination)
{
  unsigned int v4; // edi

  if ( (unsigned int)DestinationSize > 0x208
    && ((v4 = DestinationSize,
         memmove_s(Destination + 8, (unsigned int)DestinationSize - 8LL, Destination, (unsigned int)SourceSize))
     || memcpy_s(Destination, v4, L"\\\\?\\", 8uLL)) )
  {
    return 3221225701LL;
  }
  else
  {
    return 0LL;
  }
}
