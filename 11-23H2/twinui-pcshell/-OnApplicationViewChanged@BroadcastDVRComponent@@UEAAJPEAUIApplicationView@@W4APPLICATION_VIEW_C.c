/*
 * XREFs of ?OnApplicationViewChanged@BroadcastDVRComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18014C530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059CE4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BroadcastDVRComponent::OnApplicationViewChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        unsigned int a3)
{
  bool v6; // bl
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  int v13; // r14d
  HWND ForegroundWindow; // rsi
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-38h] BYREF
  HWND v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64); // [rsp+48h] [rbp-28h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v24; // [rsp+A0h] [rbp+30h] BYREF

  v6 = 0;
  if ( !*(_BYTE *)(a1 + 304) )
    return 0LL;
  if ( a3 )
    goto LABEL_37;
  v18 = 0LL;
  v24 = 0;
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v16 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), int *))(*a2)[27])(a2, &v24);
  if ( v24
    && IsWindowVisible(ForegroundWindow)
    && (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v17, (__int64)&v16) >= 0
    && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &v18) >= 0 )
  {
    v6 = ForegroundWindow == v18;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
  if ( !v6 )
  {
LABEL_37:
    if ( a3 > 9 )
      return 0LL;
    v7 = 644;
    if ( !_bittest(&v7, a3) )
      return 0LL;
  }
  v8 = a1 - 128;
  if ( a1 != 128 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 128);
  v19 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v20 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v21 = a3;
  v9 = a1 - 128;
  v22 = a1 - 128;
  if ( a1 != 128 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 128);
  v10 = *(_DWORD *)(a1 + 112);
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v12 + 2) = 0LL;
    if ( v12 + 4 != (_DWORD *)&v20 )
    {
      *((_QWORD *)v12 + 2) = a2;
      v20 = 0LL;
    }
    v12[6] = a3;
    *((_QWORD *)v12 + 4) = 0LL;
    if ( v12 + 8 != (_DWORD *)&v22 )
    {
      *((_QWORD *)v12 + 4) = v8;
      v9 = 0LL;
      v22 = 0LL;
    }
    *(_QWORD *)v12 = off_1807BAE10;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = SHTaskPoolQueueTask(3LL, 2LL, v10);
  if ( v12 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v9 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5E,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v13;
}
