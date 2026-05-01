/*
 * XREFs of ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x1801B64A0
 * Callers:
 *     ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F94A0 (-SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::RecoverPriorities(ShellPositionerManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int i; // esi
  __int64 v8; // rdx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  struct IApplicationView *v14; // [rsp+70h] [rbp+40h] BYREF

  v13 = 0LL;
  v2 = *((_QWORD *)this + 20);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v4 = v3(v2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 1319LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 1322LL;
    goto LABEL_8;
  }
  for ( i = 0; i < v12; ++i )
  {
    v14 = 0LL;
    v9 = v13;
    v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v13 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
    if ( v10(v9, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v14) >= 0 )
      ShellPositionerManager::GetPositionerPriorityForView(
        this,
        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v14,
        0LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  }
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return v5;
}
