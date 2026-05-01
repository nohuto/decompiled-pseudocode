/*
 * XREFs of memcpy_s_0 @ 0x18004C5EC
 * Callers:
 *     ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x180047260 (-GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z.c)
 *     ?GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z @ 0x1800472E0 (-GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z.c)
 *     ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x180047360 (-GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  return memcpy_s(Destination, DestinationSize, Source, SourceSize);
}
