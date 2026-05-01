/*
 * XREFs of ?Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18051A760
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z @ 0x18011B280 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x18051A63C (-InitView@WindowArrangementView@@AEAAJXZ.c)
 */

__int64 __fastcall WindowArrangementView::Initialize(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int inited; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 64), a2);
  Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)(a1 + 88), a3);
  Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)(a1 + 96), (__int64 *)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 264) = a4;
  *(_DWORD *)(a1 + 268) = a5;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, 1LL);
  v10 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = v9;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 184LL))(v10, *(_QWORD *)(a1 + 64)) )
    ++*(_DWORD *)(a1 + 128);
  inited = WindowArrangementView::InitView((WindowArrangementView *)(a1 - 24));
  v12 = inited;
  if ( inited < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)inited);
  return v12;
}
