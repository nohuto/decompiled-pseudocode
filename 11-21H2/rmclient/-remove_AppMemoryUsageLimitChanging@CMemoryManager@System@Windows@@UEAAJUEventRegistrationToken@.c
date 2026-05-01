/*
 * XREFs of ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001B420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::CMemoryManager::remove_AppMemoryUsageLimitChanging(
        Microsoft::WRL::Details::EventTargetArray *this,
        struct IUnknown *a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this,
           a2);
}
