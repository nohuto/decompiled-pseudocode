/*
 * XREFs of memmove_s @ 0x18009A1C0
 * Callers:
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x18012DC60 (_StartPathWithLongPathPrefixIfNeeded.c)
 * Callees:
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // ebx

  if ( !SourceSize )
    return 0;
  if ( Destination && Source )
  {
    if ( DestinationSize >= SourceSize )
    {
      memmove(Destination, Source, SourceSize);
      return 0;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  invalid_parameter();
  return v5;
}
