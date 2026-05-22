/*
 * XREFs of ??_EHomeGestureReadyChangedEventArgs@@UEAAPEAXI@Z @ 0x180178240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180177C24 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClie.c)
 */

HomeGestureReadyChangedEventArgs *__fastcall HomeGestureReadyChangedEventArgs::`vector deleting destructor'(
        HomeGestureReadyChangedEventArgs *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
