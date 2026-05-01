/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA?A_PXZ @ 0x18054BDBC
 * Callers:
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DCC0 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?start@?$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180550F8C (-start@-$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::start_and_watch_errors<tip::tip_test<_tip_AppThumbnailTest>>(
        struct wil::details::IFailureCallback *a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  volatile signed __int32 *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  tip::tip_test<_tip_AppThumbnailTest>::start(&v6, &v7);
  v2 = v6;
  v3 = (_QWORD)v6 == 0LL;
  *(_QWORD *)a1 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    !v3);
  v4 = (volatile signed __int32 *)*((_QWORD *)&v6 + 1);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)*((_QWORD *)&v6 + 1);
    v2 = v6;
  }
  *((_QWORD *)a1 + 6) = v2;
  *((_QWORD *)a1 + 7) = v4;
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return a1;
}
