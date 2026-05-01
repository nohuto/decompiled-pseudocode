/*
 * XREFs of ??_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z @ 0x1802DFF02
 * Callers:
 *     ?_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z @ 0x1802E0020 (-_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z.c)
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x18055E0D8 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CWindowIconLoader::SendMessageCallbackInfo *__fastcall CWindowIconLoader::SendMessageCallbackInfo::`scalar deleting destructor'(
        CWindowIconLoader::SendMessageCallbackInfo *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
  operator delete(this);
  return this;
}
