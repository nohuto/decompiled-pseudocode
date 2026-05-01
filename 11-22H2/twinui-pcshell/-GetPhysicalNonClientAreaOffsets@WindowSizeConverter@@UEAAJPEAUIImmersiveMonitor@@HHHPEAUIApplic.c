/*
 * XREFs of ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1805A1CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18007439C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074914 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIAppli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::GetPhysicalNonClientAreaOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagRECT *a7)
{
  int v8; // eax
  unsigned int LastError; // ebx
  int FrameForMonitor; // eax
  __int64 v11; // rdx
  struct IApplicationFrame *v12; // rbx
  __int64 (__fastcall *v13)(struct IApplicationFrame *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  __int64 v17; // rdx
  LONG v18; // r8d
  LONG v19; // edx
  LONG v20; // ecx
  struct IApplicationFrame *v22; // [rsp+30h] [rbp-71h] BYREF
  __int64 v23; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-61h] BYREF
  int v25; // [rsp+48h] [rbp-59h] BYREF
  int v26; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-49h] BYREF
  HWND hWnd; // [rsp+60h] [rbp-41h] BYREF
  __int64 v29; // [rsp+68h] [rbp-39h] BYREF
  struct IImmersiveMonitor *v30; // [rsp+70h] [rbp-31h] BYREF
  int v31[2]; // [rsp+78h] [rbp-29h] BYREF
  struct tagRECT Rect; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT v33; // [rsp+90h] [rbp-11h] BYREF
  _DWORD v34[4]; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+47h]

  v30 = a2;
  v26 = a3;
  v25 = a4;
  *(_QWORD *)v31 = a6;
  *a7 = 0LL;
  v29 = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
         &v29,
         (int)&v30,
         (int)&v26,
         (int)&v25,
         (__int64)v31);
  LastError = v8;
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)((char *)this - 88), v30, &v22);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v11 = 377LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_32:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
      goto LABEL_33;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v22 + 112LL))(
                        v22,
                        255LL,
                        *(_DWORD *)(v29 + 24) & 1);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v11 = 378LL;
      goto LABEL_9;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**(_QWORD **)v31 + 48LL))(
                        *(_QWORD *)v31,
                        &v27,
                        &v24);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v11 = 382LL;
      goto LABEL_9;
    }
    v23 = 0LL;
    v12 = v22;
    v13 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v22 + 144LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    v14 = v13(v12, &v23);
    LastError = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 48LL))(v23, v27, v24);
      LastError = v14;
      if ( v14 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v23 + 32LL))(v23, (v24 & 1) == 0);
        LastError = v14;
        if ( v14 >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 120LL))(v23, a5 != 0 ? 8 : 0);
          LastError = v14;
          if ( v14 >= 0 )
          {
            v14 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v22 + 24LL))(v22, &hWnd);
            LastError = v14;
            if ( v14 >= 0 )
            {
              Rect = 0LL;
              if ( GetClientRect(hWnd, &Rect) )
              {
                if ( MapWindowPoints(hWnd, 0LL, (LPPOINT)&Rect, 2u) )
                {
                  v14 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, _DWORD *))(*(_QWORD *)v22 + 120LL))(
                          v22,
                          v34);
                  LastError = v14;
                  if ( v14 < 0 )
                  {
                    v15 = 402LL;
                    goto LABEL_26;
                  }
                  Rect.top += v34[1];
                  Rect.bottom += v34[3];
                  Rect.left += v34[0];
                  Rect.right += v34[2];
                  v33 = 0LL;
                  if ( GetWindowRect(hWnd, &v33) )
                  {
                    v18 = Rect.top - v33.top;
                    v19 = v33.right - Rect.right;
                    v20 = v33.bottom - Rect.bottom;
                    a7->left = Rect.left - v33.left;
                    a7->top = v18;
                    a7->right = v19;
                    a7->bottom = v20;
                    LastError = 0;
                    goto LABEL_31;
                  }
                  v17 = 410LL;
                }
                else
                {
                  v17 = 399LL;
                }
              }
              else
              {
                v17 = 395LL;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v17,
                            (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                            v16);
              goto LABEL_31;
            }
            v15 = 392LL;
          }
          else
          {
            v15 = 388LL;
          }
        }
        else
        {
          v15 = 387LL;
        }
      }
      else
      {
        v15 = 386LL;
      }
    }
    else
    {
      v15 = 385LL;
    }
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v14);
LABEL_31:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x176,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v8);
LABEL_33:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
  return LastError;
}
