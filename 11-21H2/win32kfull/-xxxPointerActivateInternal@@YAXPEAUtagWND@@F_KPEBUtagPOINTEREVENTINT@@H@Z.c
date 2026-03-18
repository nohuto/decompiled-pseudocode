/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438
 * Callers:
 *     EditionPointerActivate @ 0x1C016C770 (EditionPointerActivate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006D988 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00F1ED0 (IsMessageOnlyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C014C4E8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C016B98A (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01EB7E4 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01EC71C (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01ECB98 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0231190 (xxxMNDismissIfOffMenu.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v5; // rdi
  __int16 v6; // bx
  char v8; // r12
  __int64 v9; // r15
  __int64 TopLevelWindow; // rax
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct tagPOINT v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  const struct tagWND *v23; // r9
  __int64 v24; // rbx
  unsigned int v25; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v32[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v33; // [rsp+68h] [rbp-18h] BYREF
  __int64 v34; // [rsp+78h] [rbp-8h]
  struct tagPOINT v37; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3;
  v6 = a2;
  v34 = 0LL;
  v33 = 0LL;
  if ( *((_DWORD *)a4 + 44) )
  {
    v8 = 1;
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      v11 = (__int64 *)TopLevelWindow;
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 120) )
        {
          ThreadLock(TopLevelWindow, (__int64 *)&v33);
          v15 = *(_QWORD *)(v9 + 104);
          if ( v15 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v15 + 16)) )
          {
            v16 = (struct tagPOINT)*((_QWORD *)a4 + 5);
            v32[2] = 0LL;
            v37 = v16;
            v17 = *(__int64 **)(v12 + 608);
            if ( v17 )
              v18 = *v17;
            else
              v18 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, v18);
            v23 = *(const struct tagWND **)(v9 + 104);
            if ( (*(_DWORD *)(*((_QWORD *)v23 + 5) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v31[0]
                && *(_QWORD *)(*(_QWORD *)v31[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(
                  *(const struct tagWND **)(*(_QWORD *)v31[0] + 16LL),
                  (int *)&v37,
                  0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v37, &v37, 0LL, v23);
            }
            v24 = *(_QWORD *)(v9 + 104);
            v25 = LOWORD(v37.x) | (LOWORD(v37.y) << 16);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v32[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v32;
            v32[1] = v24;
            HMLockObject(v24);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 104), v25);
            ThreadUnlock1(v28, v27, v29);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31);
            v6 = a2;
            v5 = a3;
          }
          if ( !v8 )
          {
            v30 = xxxSendPointerMessageWorker((__int64)a1, 587LL, v5, *v11, 0LL, 177);
            if ( v30 == 1 || v30 != 3 && xxxQueryLegacyActivation((ULONG_PTR)a1, (struct tagWND *)v11, v6, a4) == 1 )
              xxxActivateWindowWithOptions((const struct tagWND *)v11, 3LL, 49LL, 1);
          }
          ThreadUnlock1(v13, v12, v14);
        }
      }
    }
    return;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v20 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner )
  {
    LOBYTE(v21) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( !v21 )
    {
      v22 = GetTopLevelWindow(v20);
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(v22 + 16),
        *(struct tagQ **)(*(_QWORD *)(v22 + 16) + 432LL),
        6u,
        0LL,
        0,
        0LL,
        *(_QWORD *)v22,
        0LL);
    }
  }
}
