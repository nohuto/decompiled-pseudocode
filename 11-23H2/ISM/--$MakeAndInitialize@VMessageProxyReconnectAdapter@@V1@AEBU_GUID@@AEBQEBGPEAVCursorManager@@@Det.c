/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x180174F50
 * Callers:
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180175354 (-Initialize@CursorManager@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180045820 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800459F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x180045DA8 (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,CursorManager *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 **a3,
        _QWORD *a4)
{
  void *v8; // rax
  int v9; // edi
  MessageProxyReconnectAdapter *v10; // rax
  struct IMessageProxyReconnectAdapterOwner *v11; // r9
  MessageProxyReconnectAdapter *v12; // rbx
  void *v14; // [rsp+20h] [rbp-18h] BYREF
  MessageProxyReconnectAdapter *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  v15 = (MessageProxyReconnectAdapter *)v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v14);
    return (unsigned int)v9;
  }
  v10 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter((MessageProxyReconnectAdapter *)v8);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach((__int64 *)&v15, (__int64)v10);
  v14 = 0LL;
  v11 = (struct IMessageProxyReconnectAdapterOwner *)((*a4 + 8LL) & -(__int64)(*a4 != 0LL));
  v12 = v15;
  v9 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v15, a2, *a3, v11);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    goto LABEL_5;
  }
  if ( v12 )
    (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
  *a1 = v12;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
