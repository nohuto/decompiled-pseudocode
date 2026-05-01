/*
 * XREFs of ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x1803FCD80 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180408E14 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::ResetWindowRegion(GamingOverlayExperienceManager *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r9
  int CurrentDisplayCoordinates; // eax
  HRGN RectRgn; // rax
  HRGN v7; // rbx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int updated; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  HRGN hRgn; // [rsp+38h] [rbp-18h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF
  int v21; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+98h] [rbp+48h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
  if ( !*((_QWORD *)this + 25) )
  {
    v2 = -2147418113;
    v3 = 558LL;
    v4 = 2147549183LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v4);
    goto LABEL_23;
  }
  v22 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  CurrentDisplayCoordinates = GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(this, &v22, &v20, &v21, &v19);
  v2 = CurrentDisplayCoordinates;
  if ( CurrentDisplayCoordinates < 0 )
  {
    v4 = (unsigned int)CurrentDisplayCoordinates;
    v3 = 562LL;
    goto LABEL_5;
  }
  hRgn = 0LL;
  RectRgn = CreateRectRgn(0, 0, v21 - v22, v19 - v20);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hRgn,
    RectRgn);
  v7 = hRgn;
  if ( !hRgn )
  {
    v2 = -2147024882;
    v3 = 568LL;
    v4 = 2147942414LL;
    goto LABEL_5;
  }
  v8 = *((_QWORD *)this + 25);
  v14 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  updated = v9(v8, &v14);
  v2 = updated;
  if ( updated < 0 )
  {
    v11 = 572LL;
LABEL_18:
    v12 = (unsigned int)updated;
    goto LABEL_19;
  }
  hWnd = 0LL;
  updated = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &hWnd);
  v2 = updated;
  if ( updated < 0 )
  {
    v11 = 576LL;
    goto LABEL_18;
  }
  if ( !hWnd )
  {
    v2 = -2147418113;
    v11 = 577LL;
    v12 = 2147549183LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v12);
    goto LABEL_21;
  }
  if ( !SetWindowRgn(hWnd, v7, 1) )
  {
    v2 = -2147467259;
    v11 = 580LL;
    v12 = 2147500037LL;
    goto LABEL_19;
  }
  v7 = 0LL;
  updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
              (GamingOverlayExperienceManager *)((char *)this - 136),
              1);
  v2 = updated;
  if ( updated < 0 )
  {
    v11 = 585LL;
    goto LABEL_18;
  }
  v2 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  if ( v7 )
    DeleteObject(v7);
LABEL_23:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
