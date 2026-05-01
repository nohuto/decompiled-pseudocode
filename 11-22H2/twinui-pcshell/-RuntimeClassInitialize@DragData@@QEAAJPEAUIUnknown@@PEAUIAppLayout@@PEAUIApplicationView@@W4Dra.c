/*
 * XREFs of ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DBEEC
 * Callers:
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB0A4 (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z @ 0x1801078DC (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB920 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragData::RuntimeClassInitialize(__int64 a1, IUnknown *a2, __int64 a3, __int64 a4, char a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, _QWORD, GUID *, GUID *, __int64 *); // rdi
  int inited; // eax
  __int64 v14; // rdx
  void *ppvOut[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 16), (__int64)a2);
  Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)(a1 + 40), a3);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 48), a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a2,
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    v18 = 0LL;
    v11 = ppvOut[0];
    v12 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)ppvOut[0] + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    inited = v12(v11, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v18);
    v10 = inited;
    if ( inited >= 0 )
    {
      inited = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 72LL))(v18, a1 + 56);
      v10 = inited;
      if ( inited >= 0 )
      {
        *(_DWORD *)(a1 + 84) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 15, 100);
        *(_DWORD *)(a1 + 88) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 10, 100);
        *(_DWORD *)(a1 + 92) = MulDiv(*(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56), 33, 100);
        inited = DragData::InitDropTargets(a1, a5);
        v10 = inited;
        if ( inited >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          goto LABEL_11;
        }
        v14 = 103LL;
      }
      else
      {
        v14 = 97LL;
      }
    }
    else
    {
      v14 = 95LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)Service);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
