/*
 * XREFs of memcpy_s @ 0x180016BE0
 * Callers:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180010F5C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180011074 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180011138 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180016954 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180016A8C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180016AF4 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18009A7C8 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18009A83C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18009BE24 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18009E350 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009E3E8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18005D266 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_7;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_7:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v9 = 22;
LABEL_9:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v9 = 34;
    goto LABEL_9;
  }
  return 22;
}
