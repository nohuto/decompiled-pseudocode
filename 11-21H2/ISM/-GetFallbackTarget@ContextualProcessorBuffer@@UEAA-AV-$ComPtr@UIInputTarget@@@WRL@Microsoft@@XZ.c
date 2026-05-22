/*
 * XREFs of ?GetFallbackTarget@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x1801A3250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

__int64 *__fastcall ContextualProcessorBuffer::GetFallbackTarget(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 16LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a2);
  return a2;
}
