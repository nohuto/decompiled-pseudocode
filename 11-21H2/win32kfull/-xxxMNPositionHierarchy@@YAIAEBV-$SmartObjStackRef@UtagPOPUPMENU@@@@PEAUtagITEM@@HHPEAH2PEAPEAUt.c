/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C010DD14 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C022EE24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023EFC0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 *a2, int a3, int a4, LONG *a5, LONG *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // bl
  int v17; // esi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rax
  MenuHelpers *v21; // rcx
  bool v22; // di
  LONG left; // eax
  LONG v24; // edi
  int v25; // edx
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  LONG bottom; // esi
  __int64 *v31; // rax
  int v32; // ebx
  __int64 v33; // rdx
  struct tagMONITOR *v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rbx
  int v37; // esi
  LONG top; // ebx
  _DWORD *v39; // rcx
  unsigned int DpiForSystem; // eax
  _QWORD *v41; // rcx
  struct tagRECT v43; // [rsp+20h] [rbp-61h] BYREF
  int v44; // [rsp+30h] [rbp-51h]
  __int64 v45; // [rsp+38h] [rbp-49h]
  int v46; // [rsp+40h] [rbp-41h]
  __int64 *v47; // [rsp+48h] [rbp-39h]
  LONG *v48; // [rsp+50h] [rbp-31h]
  LONG *v49; // [rsp+58h] [rbp-29h]
  __int64 v50; // [rsp+60h] [rbp-21h]
  int **v51[2]; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v52; // [rsp+78h] [rbp-9h] BYREF

  v48 = a5;
  v49 = a6;
  v50 = a7;
  v10 = *a1;
  v47 = a2;
  v43 = 0LL;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( !v11 )
  {
    v13 = 4;
    v14 = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL);
    v15 = *a2;
    v16 = *(_BYTE *)(v14 + 31) & 0x20;
    v17 = *(_DWORD *)(*a2 + 64);
    v46 = *(_DWORD *)(*a2 + 68);
    LODWORD(v14) = *(_DWORD *)(v15 + 72);
    LODWORD(v45) = *(_DWORD *)(v15 + 76);
    v18 = *a1;
    v44 = v14;
    v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 16) + 40LL);
    v20 = *a1;
    v52 = *(struct tagRECT *)(v19 + 88);
    v21 = (MenuHelpers *)*v20;
    v22 = 1;
    if ( *(_QWORD *)(*v20 + 40) )
    {
      v21 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v21 + 10) & 0x20) != 0 )
        v22 = 0;
    }
    if ( v16 && IsTrayWindow(*(_QWORD *)(**a1 + 16), 1) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (__int64)&v52);
    if ( MenuHelpers::GetMenuRightAlignHint(v21) || !v22 )
    {
      *(_DWORD *)**a1 |= 0x10u;
      if ( !v16 )
      {
        v25 = v44;
        left = v52.left;
        v24 = v52.left + v44 + v17 - a3;
        goto LABEL_16;
      }
      v24 = v52.right - a3;
    }
    else
    {
      left = v52.left;
      v24 = v52.left;
      if ( !v16 )
      {
        v25 = v44;
        v24 = v17 + v52.left;
LABEL_16:
        v52.left = v17 + left;
        v52.right = v25 + v17 + left;
        v52.top += v46;
        v52.bottom = v52.top + v45;
      }
    }
    v26 = MonitorFromRect(&v52, 1u, 0);
    v27 = *a1;
    v28 = v26;
    v45 = v26;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *v27);
    MNGetPopupBoundsRect(v51, v28, &v43, 0);
    if ( v16 )
    {
      bottom = v52.top - a4;
      if ( v52.top - a4 < v43.top )
        bottom = v52.bottom;
    }
    else
    {
      bottom = v52.bottom;
    }
    if ( v24 >= v43.right - a3 )
      v24 = v43.right - a3;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v29 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL);
      v24 = v29 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v24 - a3;
      if ( v24 >= v43.right - a3 )
        v24 = v43.right - a3;
    }
    goto LABEL_35;
  }
  v13 = 1;
  v24 = *(_DWORD *)(*a2 + 64) + *(_DWORD *)(*a2 + 72) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
  bottom = *(_DWORD *)(*a2 + 68) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
  {
    v31 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
    v32 = *(_DWORD *)(*v31 + 68);
    bottom += *(_DWORD *)(GetDPIMetrics(*v31, v33) + 28) - v32;
  }
  v34 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1, 0);
  v35 = *a1;
  v36 = (__int64)v34;
  v45 = (__int64)v34;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *v35);
  MNGetPopupBoundsRect(v51, v36, &v43, 0);
  v29 = (*(_DWORD *)**a1 >> 4) & 1;
  if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= v43.left )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    v13 = 2;
  }
  if ( v24 + a3 > v43.right )
  {
    v13 = 2;
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    v13 ^= 3u;
LABEL_35:
  if ( bottom + a4 <= v43.bottom )
  {
    top = v43.top;
  }
  else
  {
    v37 = bottom - a4;
    top = v43.top;
    v39 = (_DWORD *)**a1;
    if ( (*v39 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem((__int64)v39, v29);
      bottom = v37 - GetDpiDependentMetric(26LL, DpiForSystem);
      if ( bottom < top )
      {
LABEL_42:
        bottom = v43.bottom - a4;
        goto LABEL_44;
      }
      v13 = 8;
    }
    else
    {
      bottom = *(_DWORD *)(*v47 + 76) + 6 + v37;
    }
    if ( bottom < top || bottom + a4 > v43.bottom )
      goto LABEL_42;
  }
LABEL_44:
  if ( v24 <= v43.left )
    v24 = v43.left;
  v41 = (_QWORD *)v50;
  if ( bottom <= top )
    bottom = top;
  *v48 = v24;
  *v49 = bottom;
  if ( v41 )
    *v41 = v45;
  return v13;
}
