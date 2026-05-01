/*
 * XREFs of ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18037D68C
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18037D278 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18037D908 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z @ 0x18037DF64 (-GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSize(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2,
        const struct tagRECT *a3,
        const enum DEVICE_SCALE_FACTOR *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int ScaleFactorForWindow; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // edi
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int RelativeSizeForMonitor; // eax
  int v19; // eax
  int nNumerator; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+24h] [rbp-3Ch]
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v25[4]; // [rsp+40h] [rbp-20h] BYREF
  int v26; // [rsp+44h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v23 = 0LL;
  v8 = *((_QWORD *)this + 43);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  ScaleFactorForWindow = v9(v8, &v23);
  v11 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 120LL))(v23, v25);
    v11 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v12 = 327LL;
      goto LABEL_7;
    }
    ScaleFactorForWindow = GetScaleFactorForWindow(*((_QWORD *)this + 44), &v24);
    v11 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v12 = 329LL;
      goto LABEL_7;
    }
    v13 = (int)(float)((float)((float)v26 * 100.0) / (float)v24);
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Touchpad\\",
           L"FixedDimension",
           (unsigned int *)&nNumerator) < 0 )
    {
      if ( SHRegGetDWORD(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Touchpad\\",
             L"PercentOfScreenDimension",
             (unsigned int *)&nNumerator) < 0 )
      {
        LODWORD(v22) = *((_DWORD *)this + 71);
        v15 = *((_DWORD *)this + 72);
        goto LABEL_20;
      }
      v16 = a3->right - a3->left;
      if ( v16 >= a3->bottom - a3->top )
        v16 = a3->bottom - a3->top;
      v17 = MulDiv(v16, nNumerator, 100);
      RelativeSizeForMonitor = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, *((_DWORD *)this + 70));
      if ( v17 > RelativeSizeForMonitor )
        RelativeSizeForMonitor = v17;
      v15 = (int)(float)((float)((float)RelativeSizeForMonitor * 100.0) / (float)*(int *)a4);
    }
    else
    {
      v14 = *((_DWORD *)this + 70);
      if ( nNumerator > v14 )
        v14 = nNumerator;
      nNumerator = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, v14);
      v15 = MulDiv(nNumerator, 100, *a4);
      nNumerator = v15;
    }
    LODWORD(v22) = v15;
LABEL_20:
    HIDWORD(v22) = v15 - v13;
    v19 = v22;
    *(_QWORD *)((char *)this + 308) = v22;
    LODWORD(v22) = v19 * *a4 / 100;
    HIDWORD(v22) = *a4 * *((_DWORD *)this + 78) / 100;
    *(_QWORD *)((char *)this + 300) = v22;
    v11 = 0;
    goto LABEL_21;
  }
  v12 = 325LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  return v11;
}
