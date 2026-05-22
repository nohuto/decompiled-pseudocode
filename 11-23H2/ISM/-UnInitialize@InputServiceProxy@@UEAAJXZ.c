/*
 * XREFs of ?UnInitialize@InputServiceProxy@@UEAAJXZ @ 0x180174E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18011794C (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

__int64 __fastcall InputServiceProxy::UnInitialize(InputServiceProxy *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  void *v3; // rcx

  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 4);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 5);
  if ( v2 )
    MessageProxyReconnectAdapter::Dispose(v2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  return 0LL;
}
