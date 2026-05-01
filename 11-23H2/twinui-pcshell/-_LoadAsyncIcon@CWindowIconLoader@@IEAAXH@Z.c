/*
 * XREFs of ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x18055E0D8
 * Callers:
 *     ?_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z @ 0x1802DFF2E (-_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z.c)
 *     ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x18055DE1C (-RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApp.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z @ 0x1802DFF02 (--_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z.c)
 */

void __fastcall CWindowIconLoader::_LoadAsyncIcon(CWindowIconLoader *this, int a2)
{
  __int64 v2; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rbx

  v2 = a2;
  v4 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
    *((_DWORD *)v5 + 2) = v2;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, void (__fastcall *)(HWND, __int64, CWindowIconLoader **, HICON), __int64 *))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 2),
            127LL,
            v2,
            0LL,
            CWindowIconLoader::_SendMessageCallback,
            v5) )
      CWindowIconLoader::SendMessageCallbackInfo::`scalar deleting destructor'((CWindowIconLoader::SendMessageCallbackInfo *)v5);
  }
}
