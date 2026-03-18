/*
 * XREFs of GreDwmStartup @ 0x1C00D3840
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 * Callees:
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C0080944 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0086D14 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0089970 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0090A60 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00D2C28 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     GreSfmDwmStartup @ 0x1C00D3A80 (GreSfmDwmStartup.c)
 *     ?bDwmChildWindowDpiIsolationEnabled@@YAHXZ @ 0x1C00D3B18 (-bDwmChildWindowDpiIsolationEnabled@@YAHXZ.c)
 *     ?bDwmResizeOptimizationOverride@@YAHPEAK00@Z @ 0x1C00D3C4C (-bDwmResizeOptimizationOverride@@YAHPEAK00@Z.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1C00D3E28 (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x1C00D3F48 (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1C00D4074 (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x1C00D41AC (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmStartup(__int64 a1)
{
  int v1; // edi
  int v2; // r14d
  int v3; // esi
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 RectRgn; // rax
  void *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v14; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+D0h] [rbp+58h] BYREF
  int v16; // [rsp+D8h] [rbp+60h] BYREF

  v11 = a1;
  v16 = 0;
  v1 = 0;
  v13 = 0;
  v2 = 0;
  v14 = 0;
  v3 = 0;
  v15 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v16);
  v5 = Win32AllocPoolZInit(344LL, 1935885383LL);
  v6 = 1;
  v7 = v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 176) = a1;
    LOBYTE(v2) = GrepDwmCreateComposedEvent((wchar_t *)v5) >= 0;
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    *(_QWORD *)(v7 + 184) = RectRgn;
    LOBYTE(v3) = RectRgn != 0;
    RtlInitializeGenericTable(
      (PRTL_GENERIC_TABLE)v7,
      HwndLookupCompareTableData,
      HwndLookupAllocTableData,
      HwndLookupFreeTableData,
      0LL);
    GreInitializePushLock(v7 + 72);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)(v7 + 88) = v7 + 80;
    *(_QWORD *)(v7 + 80) = v7 + 80;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    *(_QWORD *)(v7 + 112) = v7 + 104;
    *(_QWORD *)(v7 + 104) = v7 + 104;
    ObjectAttributes.RootDirectory = 0LL;
    *(_QWORD *)(v7 + 128) = v7 + 120;
    *(_QWORD *)(v7 + 120) = v7 + 120;
    *(_QWORD *)(v7 + 336) = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LOBYTE(v1) = ZwCreateEvent((PHANDLE)(v7 + 336), 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
    if ( v2 && v3 && v1 )
    {
      g_pDwmState = (struct DwmState *)v7;
      v7 = 0LL;
      SpRenderHint((struct PDEVOBJ *)&v11, 0x10000u, 0LL, 0LL);
      vAccNotify(
        (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2528) != 0LL)),
        6u,
        (void *)1);
    }
    gfDwmDeviceBitmapsEnabled = bDwmDeviceBitmapsEnabled();
    gfDwmDeviceBitmapsEnabledForMultiAdapter = bDwmDeviceBitmapsEnabledForMultiAdapter();
    gfDwmOverlayTestMode = bDwmOverlayTestMode();
    gfDwmDesktopOverlaysEnabled = bDwmDesktopOverlaysEnabled();
    if ( (unsigned int)bDwmResizeOptimizationOverride(&v13, &v14, &v15) )
    {
      gdwDwmResizeOptimizationOptions = v13;
      gdwDwmResizeTimeoutGdi = v14;
      gdwDwmResizeTimeoutModern = v15;
      gfDwmResizeOptimizationOverride = 1;
    }
    gfDwmChildWindowDpiIsolationEnabled = bDwmChildWindowDpiIsolationEnabled();
    if ( v7 )
    {
      if ( v3 )
        GreDeleteObject(*(_QWORD *)(v7 + 184));
      if ( v2 )
      {
        v10 = *(void **)(v7 + 328);
        if ( v10 )
        {
          ObCloseHandle(v10, 0);
          *(_QWORD *)(v7 + 328) = 0LL;
        }
      }
      if ( v1 )
        ZwClose(*(HANDLE *)(v7 + 336));
      Win32FreePool(v7);
    }
    if ( v2 && v3 && v1 )
      GreSfmDwmStartup();
  }
  else
  {
    EngSetLastError(8u);
  }
  LEAVE_GRE_DWM_CRIT(a1, v16);
  if ( !v2 || !v3 || !v1 )
    return 0;
  return v6;
}
