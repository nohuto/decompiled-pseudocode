/*
 * XREFs of ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801F1CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801F13B8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F150C (-FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801F283C (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::OnDisconnected(HotKeyProcessor *this, struct IMessageProxy *a2)
{
  int RegisteredClient; // eax
  unsigned int v5; // ebx
  ULONG_PTR v6; // r8
  int v7; // eax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  struct HotkeyClientRegistration *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient((HotKeyProcessor *)((char *)this - 8), a2, &v10);
  v5 = RegisteredClient;
  if ( RegisteredClient < 0 )
  {
    if ( RegisteredClient == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v6 = 1003LL;
LABEL_9:
    FailFastWithHR(v5, retaddr, v6);
    goto LABEL_10;
  }
  v7 = HotKeyProcessor::RemoveClientRegistration((HotKeyProcessor *)((char *)this - 8), v10);
  v5 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v6 = 1004LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return v5;
}
