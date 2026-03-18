/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C022EE24
 * Callers:
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022EBFC (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SubtractRect @ 0x1C00C1550 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025A5CC (GetMonitorMenuRectForWindow.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(int ***a1, __int64 a2, struct tagRECT *a3, int a4)
{
  __int128 v8; // xmm0
  int **v9; // rax
  struct tagRECT v10; // xmm0
  struct tagRECT *v11; // rax
  struct tagRECT v12; // xmm0
  int **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-39h] BYREF
  char v22[16]; // [rsp+28h] [rbp-31h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-21h] BYREF
  __int128 v24; // [rsp+50h] [rbp-9h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp+7h] BYREF
  __int128 v26; // [rsp+70h] [rbp+17h] BYREF

  v8 = *(_OWORD *)GetMonitorRectForWindow((__int64)v22, a2, *((const struct tagWND **)**a1 + 2));
  v9 = *a1;
  v24 = v8;
  if ( **v9 >= 0 )
  {
    v11 = (struct tagRECT *)&v26;
    v26 = v24;
  }
  else
  {
    v10 = *(struct tagRECT *)GetMonitorMenuRectForWindow(&v25);
    v11 = &v25;
    v25 = v10;
  }
  v12 = *v11;
  v13 = *a1;
  v23 = v12;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v13 + 2) + 40LL) + 288LL) & 0xF) == 2
    || (v14 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 2) + 40LL) + 256LL)), (v21 = v14) == 0)
    || v14 == a2 )
  {
    if ( a4 )
      goto LABEL_14;
LABEL_15:
    *a3 = v23;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v16, v15);
  if ( ***a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 112)) )
    v19 = *(_QWORD *)(a2 + 40) + 28LL;
  else
    v19 = v18;
  PhysicalToLogicalDPIRect(&v23, v19, CurrentThreadDpiAwarenessContext, &v21);
  if ( !a4 )
    goto LABEL_15;
  PhysicalToLogicalDPIRect(&v24, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v21);
LABEL_14:
  SubtractRect((__int64)a3, (int *)&v24, &v23.left);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
}
