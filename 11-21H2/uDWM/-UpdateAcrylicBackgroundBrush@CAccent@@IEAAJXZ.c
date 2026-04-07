/*
 * XREFs of ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800170B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180018FA0 (--4-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B088 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800973E4 (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAccent::UpdateAcrylicBackgroundBrush(CAccent *this)
{
  __int64 v2; // rax
  CDesktopManager *v3; // rax
  struct IDCompositionDesktopDevicePartner *v4; // rbx
  char *v5; // rsi
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  unsigned int v9; // edi
  struct Windows::UI::Composition::ICompositionBrush **v11; // r8
  int SolidColorBrush; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF
  struct IDCompositionDesktopDevicePartner *v18; // [rsp+60h] [rbp+40h] BYREF

  CRenderDataVisual::ClearInstructions(this);
  v2 = *((_QWORD *)this + 47);
  if ( !v2 || !*(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL) )
    return 0LL;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = *(struct IDCompositionDesktopDevicePartner **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v18 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v17 = 0LL;
  if ( !*(_BYTE *)(*((_QWORD *)v3 + 52) + 657LL) )
  {
    v5 = (char *)this + 368;
    if ( !*((_QWORD *)this + 46) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
      SolidColorBrush = CAccent::CreateSolidColorBrush(
                          v4,
                          (struct Windows::UI::Composition::ICompositionBrush **)this + 46);
      v9 = SolidColorBrush;
      if ( SolidColorBrush < 0 )
      {
        v13 = 1723LL;
        goto LABEL_17;
      }
    }
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=(&v17, v5);
    v16 = 0LL;
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 24LL);
    v7 = **v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v8 = v7(v6, &GUID_01dc794b_4ff5_4491_9942_b9e7b8893be4, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v14 = 1731LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 48LL))(v16, v17);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1732LL;
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v4 + 24LL))(v4);
        v9 = v8;
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
          return 0LL;
        }
        v14 = 1734LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    goto LABEL_22;
  }
  v5 = (char *)this + 360;
  if ( *((_QWORD *)this + 45) )
    goto LABEL_7;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
  SolidColorBrush = WindowsInternal::UI::CreateHostBackdropBrush(v4, (CAccent *)((char *)this + 360), v11);
  v9 = SolidColorBrush;
  if ( SolidColorBrush >= 0 )
    goto LABEL_7;
  v13 = 1714LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)SolidColorBrush);
LABEL_22:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  return v9;
}
