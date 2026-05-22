/*
 * XREFs of ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x1801CB704
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801CB800 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

ContextualProcessorInitialState *__fastcall ContextualProcessorInitialState::ContextualProcessorInitialState(
        ContextualProcessorInitialState *this,
        const struct ContextualProcessorInitialState *a2)
{
  __int64 *v3; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (__int64 *)((char *)this + 8);
  *v3 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v3);
  return this;
}
