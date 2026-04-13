/*
 * XREFs of ??$wait_for_completion@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@V?$ComPtr@UITargetedContentContainer@TargetedContent@Services@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITargetedContentContainer@TargetedContent@Services@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800C686C
 * Callers:
 *     ??$call_and_wait_for_completion@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@4@$$ZAEAPEAU5@@wil@@YA?A_PPEAUITargetedContentContainerStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@4@@ZAEAPEAU5@@Z @ 0x1800C6440 (--$call_and_wait_for_completion@UITargetedContentContainerStatics@TargetedContent@Services@Windo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@PEAPEAUITargetedContentContainer@TargetedContent@Services@3@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@PEAPEAUITargetedContentContainer@TargetedContent@Services@4@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006D81C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedCon_ea_18006D81C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::wait_for_completion<Windows::Services::TargetedContent::TargetedContentContainer *,Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::ITargetedContentContainer>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *,Windows::Services::TargetedContent::ITargetedContentContainer * *>(
         a2,
         (__int64)a1,
         a3);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v6);
  return a1;
}
