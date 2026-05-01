/*
 * XREFs of ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805C56EC
 * Callers:
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805C58D0 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
        ScreenManagerHelpers *this,
        struct ITabletModePositioner *a2,
        struct IApplicationView *a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  __int64 (__fastcall *v8)(ScreenManagerHelpers *, GUID *, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned __int8)a3;
  v14 = 0LL;
  v8 = *(__int64 (__fastcall **)(ScreenManagerHelpers *, GUID *, GUID *, __int64 *))(*(_QWORD *)this + 80LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v9 = v8(this, &CLSID_AppSwitchOperation, &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct ITabletModePositioner *, _QWORD))(*(_QWORD *)v14 + 64LL))(
           v14,
           a2,
           v5);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v14)(
             v14,
             &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
             a4);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      v11 = 67LL;
    }
    else
    {
      v11 = 66LL;
    }
  }
  else
  {
    v11 = 65LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return v10;
}
