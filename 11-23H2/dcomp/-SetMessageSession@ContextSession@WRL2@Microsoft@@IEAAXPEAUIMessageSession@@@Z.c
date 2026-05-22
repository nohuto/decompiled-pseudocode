/*
 * XREFs of ?SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z @ 0x18001D700
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 * Callees:
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z @ 0x18001D81C (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::SetMessageSession(
        Microsoft::WRL2::ContextSession *this,
        struct IMessageSession *a2)
{
  int v3; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IMessageSession>::operator=((char *)this + 120, a2);
  Microsoft::WRL2::ContextSession::EnsureMessageExtensions(this);
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 16) + 80LL))(
         *((_QWORD *)this + 16),
         (char *)this + 104);
  if ( v3 < 0 || !*((_DWORD *)this + 26) )
    Microsoft::WRL2::FailFast::ForHR(v3, retaddr);
}
