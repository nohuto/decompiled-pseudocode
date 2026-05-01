/*
 * XREFs of memcpy_s_0 @ 0x180286188
 * Callers:
 *     ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x1802EC166 (-s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPE.c)
 *     ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x180740880 (-GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z.c)
 *     ?GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z @ 0x180740900 (-GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z.c)
 *     ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x180740980 (-GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z.c)
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x18074B3DC (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1801C73EA (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !Destination )
    goto LABEL_2;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  else
  {
    memset_0(Destination, 0, DestinationSize);
    if ( !Source )
    {
LABEL_2:
      v7 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
      v8 = 22;
LABEL_3:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
    if ( DestinationSize < SourceSize )
    {
      v7 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
      v8 = 34;
      goto LABEL_3;
    }
    return 22;
  }
}
