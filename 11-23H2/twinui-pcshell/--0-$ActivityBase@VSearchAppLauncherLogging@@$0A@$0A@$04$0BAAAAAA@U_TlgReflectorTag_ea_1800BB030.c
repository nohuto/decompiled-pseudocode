/*
 * XREFs of ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800BB030
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_____lambda_0190d4b48233ee3d7e5c167dfa5e03d8___ @ 0x1801E5838 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4_____lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E58A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___--CTaskW.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2_____lambda_224ca2662a1dba27bb7ec196acbc4aa2___ @ 0x1801E6080 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_224ca2662a1db.c)
 * Callees:
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800AFD8C (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  int v2; // eax
  char *v5; // rsi
  __int64 v6; // rax
  bool v7; // zf
  struct wil::details::IFailureCallback *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)a1 = &wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    v2 != 0);
  v5 = (char *)a1 + 56;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a1 + 56,
    a2 + 56);
  *((_QWORD *)a1 + 39) = *(_QWORD *)(a2 + 312);
  *(_QWORD *)(a2 + 312) = 0LL;
  v6 = *((_QWORD *)a1 + 39);
  if ( v6 )
    v5 = (char *)(v6 + 8);
  *((_QWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 5) = v5 + 40;
  v7 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  result = a1;
  *(_QWORD *)a1 = &wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  return result;
}
