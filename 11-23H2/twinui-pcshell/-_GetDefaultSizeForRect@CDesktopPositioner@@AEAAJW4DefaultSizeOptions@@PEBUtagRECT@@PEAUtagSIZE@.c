/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180060064
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18005FFEC (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800603CC (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076FF4 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_GetDefaultSizeForRect(
        CDesktopPositioner *a1,
        int a2,
        const struct tagRECT *a3,
        _QWORD *a4)
{
  CDesktopPositioner *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *AddressOf; // rax
  int MonitorFromRect; // eax
  __int64 v12; // rdi
  LONG cy; // r14d
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-39h]
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  struct tagSIZE v19; // [rsp+50h] [rbp-9h] BYREF
  __int64 v20; // [rsp+58h] [rbp-1h]
  __int64 v21; // [rsp+60h] [rbp+7h]
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  __m128i si128; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v21 = 0x1F4000001F4LL;
  if ( a2 == 1 )
  {
    v22 = 900;
    v23 = 640;
  }
  else
  {
    v22 = 800;
    v23 = 600;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  v8 = CDesktopPositioner::_CreateTitlebarConfiguration(v7, 0LL, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x546,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8,
      v16);
  }
  else
  {
    v18 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v18);
    MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(a1, a3, (struct IImmersiveMonitor **)AddressOf);
    v9 = MonitorFromRect;
    if ( MonitorFromRect < 0 )
    {
      v15 = 1353LL;
    }
    else
    {
      MonitorFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(a1, a3, &v19);
      v9 = MonitorFromRect;
      if ( MonitorFromRect < 0 )
      {
        v15 = 1356LL;
      }
      else
      {
        v12 = 3LL;
        cy = v19.cy;
        while ( 1 )
        {
          v16 = 1;
          MonitorFromRect = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 37) + 48LL))(
                              *((_QWORD **)a1 + 37),
                              *(&v21 + v12),
                              v18,
                              0LL);
          v9 = MonitorFromRect;
          if ( MonitorFromRect < 0 )
            break;
          if ( (v19.cx < (int)v20 || cy < SHIDWORD(v20)) && --v12 >= 0 )
            continue;
          *a4 = v20;
          v9 = 0;
          goto LABEL_13;
        }
        v15 = 1362LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromRect,
      v16);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return v9;
}
