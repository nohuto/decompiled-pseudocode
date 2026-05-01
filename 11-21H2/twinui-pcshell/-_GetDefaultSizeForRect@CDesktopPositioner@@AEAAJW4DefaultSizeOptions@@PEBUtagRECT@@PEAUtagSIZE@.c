/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800F0130
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F00B8 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F02A4 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800F13D8 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F20B0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  struct IImmersiveMonitor **AddressOf; // rax
  int MonitorFromRect; // eax
  __int64 v12; // rdi
  LONG cy; // r14d
  __int64 v15; // rdx
  struct IApplicationViewTitlebarConfiguration *v16; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h] BYREF
  struct tagSIZE v18; // [rsp+50h] [rbp-9h] BYREF
  __int64 v19; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+7h]
  int v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+6Ch] [rbp+13h]
  __m128i si128; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v20 = 0x1F4000001F4LL;
  if ( a2 == 1 )
  {
    v21 = 900;
    v22 = 640;
  }
  else
  {
    v21 = 800;
    v22 = 600;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  v8 = CDesktopPositioner::_CreateTitlebarConfiguration(v7, 0LL, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40D,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v17 = 0LL;
    AddressOf = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v17);
    MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(a1, a3, AddressOf);
    v9 = MonitorFromRect;
    if ( MonitorFromRect < 0 )
    {
      v15 = 1040LL;
    }
    else
    {
      MonitorFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(a1, a3, &v18);
      v9 = MonitorFromRect;
      if ( MonitorFromRect < 0 )
      {
        v15 = 1043LL;
      }
      else
      {
        v12 = 3LL;
        cy = v18.cy;
        while ( 1 )
        {
          MonitorFromRect = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, __int64 *))(**((_QWORD **)a1 + 33) + 48LL))(
                              *((_QWORD **)a1 + 33),
                              *(&v20 + v12),
                              v17,
                              0LL,
                              1,
                              v16,
                              &v19);
          v9 = MonitorFromRect;
          if ( MonitorFromRect < 0 )
            break;
          if ( (v18.cx < (int)v19 || cy < SHIDWORD(v19)) && --v12 >= 0 )
            continue;
          *a4 = v19;
          v9 = 0;
          goto LABEL_13;
        }
        v15 = 1049LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromRect);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v9;
}
