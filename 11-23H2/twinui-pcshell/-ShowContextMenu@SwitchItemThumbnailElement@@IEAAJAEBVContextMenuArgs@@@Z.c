/*
 * XREFs of ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180586EA4
 * Callers:
 *     ?v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x1805873E0 (-v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180586524 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardCompareHelper@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardMergeHelper@UISC_SERVICE@CServiceHostComponent@@@@@@QEAAXXZ @ 0x180586D58 (-RemoveAll@-$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@U.c)
 *     ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x1805872EC (-_SHPrettyMenu@@YAXPEAUHMENU__@@@Z.c)
 *     ?GetScreenLocation@ContextMenuArgs@@QEBA?AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1805935D4 (-GetScreenLocation@ContextMenuArgs@@QEBA-AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18074D0C0 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074D8C8 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SwitchItemThumbnailElement::ShowContextMenu(
        SwitchItemThumbnailElement *this,
        const struct ContextMenuArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HMENU v6; // rcx
  int v8; // ebx
  HWND hWnd; // rdi
  LANGID ThreadUILanguage_0; // ax
  int v11; // eax
  unsigned int v12; // ebx
  HWND v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 i; // rdx
  ContextMenuRenderingData *v16; // rcx
  HMENU v17; // rcx
  int hData[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v19[2]; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HMENU hMenu; // [rsp+80h] [rbp+20h] BYREF
  __int64 x; // [rsp+90h] [rbp+30h] BYREF
  __int64 v25; // [rsp+98h] [rbp+38h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 73) + 40LL))(
          *((_QWORD *)this + 73),
          *((_QWORD *)this + 72)) )
    return 0LL;
  hMenu = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HMENU *))(**((_QWORD **)this + 73) + 48LL))(
         *((_QWORD *)this + 73),
         *((_QWORD *)this + 72),
         &hMenu);
  v5 = v4;
  if ( v4 >= 0 )
  {
    _SHPrettyMenu(hMenu);
    ContextMenuArgs::GetScreenLocation(a2, &x, this);
    v8 = x;
    v25 = x;
    hWnd = (HWND)(*(__int64 (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)this + 328LL))(this);
    *(_QWORD *)hData = 0LL;
    *(_QWORD *)v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)hMenu, (int)hWnd, (int)&v25, 8, hData);
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v11 = IsBiDiLocale(ThreadUILanguage_0);
    v12 = TrackPopupMenu(hMenu, v11 != 0 ? 33034 : 258, v8, SHIDWORD(x), 0, hWnd, 0LL);
    ImmersiveContextMenuHelper::RemoveOwnerDrawFromMenu(hMenu, (HMENU)hWnd, v13);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 73) + 88LL))(
        *((_QWORD *)this + 73),
        *((_QWORD *)this + 72),
        v12);
    v14 = 0LL;
    for ( i = *(_QWORD *)v19; v14 < i; ++v14 )
    {
      v16 = *(ContextMenuRenderingData **)(*(_QWORD *)hData + 8 * v14);
      if ( v16 )
      {
        ContextMenuRenderingData::`scalar deleting destructor'(v16);
        i = *(_QWORD *)v19;
      }
    }
    CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll((__int64)hData);
    CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll((__int64)hData);
    v17 = hMenu;
    hMenu = 0LL;
    if ( v17 )
      DestroyMenu(v17);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
    (const char *)(unsigned int)v4);
  v6 = hMenu;
  hMenu = 0LL;
  if ( v6 )
    DestroyMenu(v6);
  return v5;
}
