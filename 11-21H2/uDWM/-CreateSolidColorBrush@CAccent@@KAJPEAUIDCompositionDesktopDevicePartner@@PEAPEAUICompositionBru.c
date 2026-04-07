/*
 * XREFs of ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800973E4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::CreateSolidColorBrush(
        __int64 (__fastcall ***a1)(struct IDCompositionDesktopDevicePartner *, GUID *, __int64 *),
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  __int64 (__fastcall *v4)(struct IDCompositionDesktopDevicePartner *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD); // rdi
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionBrush **); // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v5 = v4((struct IDCompositionDesktopDevicePartner *)a1, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v7 = v14;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    v9 = v8(v7, 0LL, &v13);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (**v13)(v13, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, a2);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v10 = 479LL;
    }
    else
    {
      v10 = 478LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DA,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v5);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v6;
}
