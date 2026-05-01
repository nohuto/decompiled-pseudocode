/*
 * XREFs of ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1805D7A0C
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D6B90 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1805D87A8 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x1805D761C (-MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppResizeView::QueryResizeApps(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  HRESULT Service; // eax
  unsigned int v9; // ebx
  void *v10; // rbx
  __int64 (__fastcall *v11)(void *, GUID *, GUID *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              *(IUnknown **)(a1 + 16),
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              ppvOut);
  v9 = Service;
  if ( Service >= 0 )
  {
    v19 = 0LL;
    v10 = ppvOut[0];
    v11 = *(__int64 (__fastcall **)(void *, GUID *, GUID *, __int64 *))(*(_QWORD *)ppvOut[0] + 80LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    v12 = v11(v10, &CLSID_AppResizeOperation, &GUID_83266822_9e63_4b62_a1b4_75b389df3388, &v19);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v12 = AppResizeView::MapResizeDropLocationToResizeAction(v13, a2, &v18);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 40LL))(v19, v18, a3);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v19)(
                  v19,
                  &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                  a4);
          v9 = v12;
          if ( v12 >= 0 )
          {
LABEL_12:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
            goto LABEL_13;
          }
          v14 = 684LL;
        }
        else
        {
          v14 = 683LL;
        }
      }
      else
      {
        v14 = 682LL;
      }
    }
    else
    {
      v14 = 679LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A4,
    (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)Service);
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  return v9;
}
