/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x18004609C
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180045DBC (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180046180 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180046350 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x180046708 (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],InputServiceProxy *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  MessageProxyReconnectAdapter *v8; // rax
  MessageProxyReconnectAdapter *v9; // rax
  struct IMessageProxyReconnectAdapterOwner *v10; // r9
  MessageProxyReconnectAdapter *v11; // rbx
  int v12; // edi
  MessageProxyReconnectAdapter *v14; // [rsp+20h] [rbp-18h] BYREF
  MessageProxyReconnectAdapter *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (MessageProxyReconnectAdapter *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  v15 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v14);
    return (unsigned int)v12;
  }
  v9 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v8);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach(&v15, v9);
  v14 = 0LL;
  v10 = (struct IMessageProxyReconnectAdapterOwner *)((*a4 + 8LL) & -(__int64)(*a4 != 0LL));
  v11 = v15;
  v12 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v15, a2, a3, v10);
  if ( v12 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    goto LABEL_8;
  }
  if ( v11 )
    (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v11 + 8LL))(v11);
  *a1 = v11;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
