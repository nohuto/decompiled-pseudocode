/*
 * XREFs of ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x1800E71B4
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800E74A0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18022B610 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18003EA68 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18008C8B0 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x1800E72E8 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::InitializeCloakType(__int64 a1, int a2)
{
  int ViewId; // eax
  unsigned int v5; // ebx
  HWND v6; // rax
  HWND v8; // rax
  HWND Window; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  char pvAttribute; // [rsp+60h] [rbp+10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v11);
  v12 = -1LL;
  v13 = -1LL;
  ViewId = CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v11);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ViewId);
  }
  else
  {
    if ( !a2 )
    {
      v10[0] = &v11;
      v10[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(v10);
    }
    v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    if ( DwmGetWindowAttribute(v6, 0xEu, &pvAttribute, 4u) >= 0 && (pvAttribute & 2) != 0 && !*(_DWORD *)(a1 + 264) )
    {
      v8 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
      Window = GetWindow(v8, 4u);
      if ( !Window || DwmGetWindowAttribute(Window, 0xEu, &pvAttribute, 4u) < 0 || (pvAttribute & 2) == 0 )
      {
        *(_DWORD *)(a1 + 264) |= 1u;
        ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
          (__int64 *)&v11,
          (_DWORD *)(a1 + 264));
      }
    }
    v5 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v11);
  return v5;
}
