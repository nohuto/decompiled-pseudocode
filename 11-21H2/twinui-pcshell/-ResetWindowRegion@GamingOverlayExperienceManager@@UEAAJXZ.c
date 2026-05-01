/*
 * XREFs of ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x18032F9D0 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033AEF0 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::ResetWindowRegion(GamingOverlayExperienceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // zf
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  int CurrentDisplayCoordinates; // eax
  HRGN RectRgn; // rax
  HRGN v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int updated; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  HRGN hRgn; // [rsp+38h] [rbp-18h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v21; // [rsp+80h] [rbp+30h] BYREF
  int v22; // [rsp+88h] [rbp+38h] BYREF
  int v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+98h] [rbp+48h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v3 = *((_QWORD *)this + 20) == 0LL;
  v19 = v1;
  if ( !v3 )
  {
    v24 = 0;
    v22 = 0;
    v23 = 0;
    v21 = 0;
    CurrentDisplayCoordinates = GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(
                                  this,
                                  &v24,
                                  &v22,
                                  &v23,
                                  &v21);
    v4 = CurrentDisplayCoordinates;
    if ( CurrentDisplayCoordinates < 0 )
    {
      v6 = (unsigned int)CurrentDisplayCoordinates;
      v5 = 541LL;
      goto LABEL_5;
    }
    hRgn = 0LL;
    RectRgn = CreateRectRgn(0, 0, v23 - v24, v21 - v22);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hRgn,
      RectRgn);
    v9 = hRgn;
    if ( !hRgn )
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x223,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x8007000ELL);
LABEL_22:
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
      goto LABEL_23;
    }
    v10 = *((_QWORD *)this + 20);
    v16 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    updated = v11(v10, &v16);
    v4 = updated;
    if ( updated >= 0 )
    {
      hWnd = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &hWnd);
      v4 = updated;
      if ( updated >= 0 )
      {
        if ( hWnd )
        {
          if ( SetWindowRgn(hWnd, v9, 1) )
          {
            hRgn = 0LL;
            updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                        (GamingOverlayExperienceManager *)((char *)this - 136),
                        1);
            v4 = updated;
            if ( updated >= 0 )
            {
              v4 = 0;
              goto LABEL_21;
            }
            v13 = 564LL;
            goto LABEL_18;
          }
          v4 = -2147467259;
          v13 = 559LL;
          v14 = 2147500037LL;
        }
        else
        {
          v4 = -2147418113;
          v13 = 556LL;
          v14 = 2147549183LL;
        }
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)v14);
LABEL_21:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
        goto LABEL_22;
      }
      v13 = 555LL;
    }
    else
    {
      v13 = 551LL;
    }
LABEL_18:
    v14 = (unsigned int)updated;
    goto LABEL_19;
  }
  v4 = -2147418113;
  v5 = 537LL;
  v6 = 2147549183LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v6);
LABEL_23:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v19);
  return v4;
}
