/*
 * XREFs of ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E14D4
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DF460 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64 (--1-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integr.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1?DeleteDC@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180237828 (--1-$unique_storage@U-$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1-DeleteDC@@YAH0@ZU-$integral_con.c)
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0C84 (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppTransitionManager::_TagDividerBitmap(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  __int64 (__fastcall *v3)(struct IAppLayoutOperation *, __int64 *); // rdi
  __int64 *v4; // rbx
  int v5; // eax
  unsigned int LastError; // ebx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v7; // rdx
  int v8; // eax
  HDC CompatibleDC; // rbx
  CAppTransitionManager *v10; // rcx
  HBITMAP v11; // rdi
  const char *v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  HWND ShellWindow; // rax
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  HDC v18; // [rsp+40h] [rbp-31h] BYREF
  HBITMAP v19; // [rsp+48h] [rbp-29h] BYREF
  int v20; // [rsp+50h] [rbp-21h] BYREF
  int v21; // [rsp+54h] [rbp-1Dh]
  int v22; // [rsp+58h] [rbp-19h]
  int v23; // [rsp+5Ch] [rbp-15h]
  BITMAPINFO pbmi; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v25[4]; // [rsp+90h] [rbp+1Fh] BYREF
  int v26; // [rsp+94h] [rbp+23h]
  int v27; // [rsp+9Ch] [rbp+2Bh]
  enum DEVICE_SCALE_FACTOR v28; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v17 = 0LL;
  v3 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL);
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  v5 = v3(a2, v4);
  LastError = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v25);
    v8 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v25, v7);
    v20 = 0;
    v21 = 0;
    v22 = v8;
    v23 = v27 - v26;
    if ( v8 > 0 && v27 - v26 > 0 )
    {
      CompatibleDC = CreateCompatibleDC(0LL);
      v18 = CompatibleDC;
      if ( !CompatibleDC )
      {
        LastError = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x274,
          (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)0x8007000ELL);
LABEL_15:
        wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>(&v18);
        goto LABEL_18;
      }
      pbmi.bmiHeader.biSize = 40;
      pbmi.bmiHeader.biWidth = v22 - v20;
      pbmi.bmiHeader.biHeight = v21 - v23;
      *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
      memset(&pbmi.bmiHeader.biCompression, 0, 28);
      v11 = CreateDIBSection(CompatibleDC, &pbmi, 0, 0LL, 0LL, 0);
      v19 = v11;
      if ( !v11 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x27F,
                      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                      v12);
LABEL_14:
        wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v19);
        goto LABEL_15;
      }
      v13 = CAppTransitionManager::_PaintDividerForDWM(v10, CompatibleDC, v11, &pbmi, v28);
      LastError = v13;
      if ( v13 < 0 )
      {
        v14 = 641LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_14;
      }
      ShellWindow = GetShellWindow();
      v13 = DwmpTransitionBitmap(ShellWindow, v11, 22LL, &v20, &v20);
      LastError = v13;
      if ( v13 < 0 )
      {
        v14 = 644LL;
        goto LABEL_13;
      }
      wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v19);
      wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>(&v18);
    }
    LastError = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26B,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_18:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return LastError;
}
