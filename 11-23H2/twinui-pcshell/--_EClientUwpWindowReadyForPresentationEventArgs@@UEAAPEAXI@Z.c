/*
 * XREFs of ??_EClientUwpWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z @ 0x180046220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ClientUwpWindowReadyForPresentationEventArgs *__fastcall ClientUwpWindowReadyForPresentationEventArgs::`vector deleting destructor'(
        ClientUwpWindowReadyForPresentationEventArgs *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 7);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
