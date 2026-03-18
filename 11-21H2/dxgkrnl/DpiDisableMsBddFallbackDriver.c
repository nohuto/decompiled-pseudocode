/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C0388570
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02BB55C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02C4E5C (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02C53D8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  NTSTATUS v6; // eax
  void (__fastcall *v7)(__int64, __int128 *); // rax
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax

  if ( qword_1C0130748 )
  {
    v3 = *(_QWORD *)(qword_1C0130748 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 3896), 1);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 3896), 2, v4);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v3 + 3896), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 3896), 2u, v5);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 3896), 1);
    v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2744), 0);
    if ( v6 < 0 )
      WdLogSingleEntry1(2LL, v6);
    v7 = *(void (__fastcall **)(__int64, __int128 *))(v3 + 992);
    v8 = *(_QWORD *)(v3 + 48);
    *(_QWORD *)(v3 + 5632) = a1;
    v7(v8, &xmmword_1C0130750);
    *(_QWORD *)(v3 + 5632) = 0LL;
    if ( qword_1C0130740 == qword_1C0130748 )
      qword_1C0130740 = 0LL;
    dword_1C01307F0 = 2;
    Global = DXGGLOBAL_GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
}
