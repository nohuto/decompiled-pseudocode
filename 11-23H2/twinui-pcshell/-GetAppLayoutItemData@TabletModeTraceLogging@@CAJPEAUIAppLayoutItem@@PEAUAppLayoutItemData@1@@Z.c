/*
 * XREFs of ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x1805BBB70
 * Callers:
 *     ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x1805BBA78 (-GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1805BBC00 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemData(
        struct IAppLayoutItem *a1,
        struct TabletModeTraceLogging::AppLayoutItemData *a2)
{
  int AppLayoutItemName; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a2);
  *((_QWORD *)a2 + 1) = -1LL;
  *((_QWORD *)a2 + 2) = -1LL;
  AppLayoutItemName = TabletModeTraceLogging::GetAppLayoutItemName(a1, (unsigned __int16 **)a2);
  v5 = AppLayoutItemName;
  if ( AppLayoutItemName >= 0 )
  {
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, char *))(*(_QWORD *)a1 + 56LL))(a1, 0LL, (char *)a2 + 24);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutItemName);
    return v5;
  }
}
