/*
 * XREFs of ?Start@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIComPoolTask@23@@Z @ 0x180117CD0
 * Callers:
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180117460 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@W.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18011A0F0 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPoolHandler::Start(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IComPoolTask *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx

  CurrentThreadId = GetCurrentThreadId();
  v4 = *((unsigned int *)this + 1);
  v5 = *(unsigned int *)this;
  *((_DWORD *)this + 2) = CurrentThreadId;
  return SHTaskPoolQueueTask(v5, v4, CurrentThreadId);
}
