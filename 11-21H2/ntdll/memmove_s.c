/*
 * XREFs of memmove_s @ 0x18009F020
 * Callers:
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x180129080 (_StartPathWithLongPathPrefixIfNeeded.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
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
