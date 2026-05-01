/*
 * XREFs of ??$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindow@@@12@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D5DFC
 * Callers:
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x1800D5D3C (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180132CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make<CClassicWindow,HWND__ * &,IClassicWindow * &,IImmersiveMonitor * &,enum CLASSIC_WINDOW_STATE &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbp

  *a1 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    v11 = *a5;
    v12 = *a4;
    v13 = *a3;
    v14 = *a2;
    v9[3] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindow>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &CClassicWindow::`vftable';
    *((_QWORD *)v10 + 2) = v14;
    *((_QWORD *)v10 + 3) = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 8) = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v10[18] = v11;
    v10[19] = 0;
    *((_QWORD *)v10 + 10) = 0LL;
    v10[8] = 0;
    v10[9] = 0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(*a1);
    *a1 = v10;
  }
  return a1;
}
