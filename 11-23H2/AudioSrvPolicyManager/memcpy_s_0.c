/*
 * XREFs of memcpy_s_0 @ 0x180014B10
 * Callers:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800184AC (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180018520 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180019200 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18001A9F4 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180017592 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     memcpy_0 @ 0x18004768C (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  if ( !SourceSize )
    return 0;
  if ( !Destination )
  {
LABEL_3:
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
    return 22;
  }
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
    goto LABEL_3;
  if ( DestinationSize >= SourceSize )
    return 22;
  *(_DWORD *)_o__errno() = 34;
  invalid_parameter_noinfo();
  return 34;
}
