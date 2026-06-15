/*
 * XREFs of dllmain_dispatch @ 0x1800165DC
 * Callers:
 *     _DllMainCRTStartup @ 0x180016740 (_DllMainCRTStartup.c)
 * Callees:
 *     dllmain_crt_dispatch @ 0x1800163D0 (dllmain_crt_dispatch.c)
 *     __scrt_dllmain_exception_filter @ 0x180016B14 (__scrt_dllmain_exception_filter.c)
 *     DllMain @ 0x18001F2AC (DllMain.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !fdwReason && dword_180062D90 <= 0 )
    return 0LL;
  if ( fdwReason - 1 > 1
    || (!pRawDllMain || (v7 = ((__int64 (*)(void))pRawDllMain)()) != 0)
    && (v7 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved)) != 0 )
  {
    v8 = DllMain(hinstDLL, fdwReason, lpvReserved);
    v7 = v8;
    if ( fdwReason == 1 && !v8 )
    {
      DllMain(hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch((__int64)hinstDLL, 0, (__int64)lpvReserved);
      if ( pRawDllMain )
        pRawDllMain(hinstDLL, 0LL, lpvReserved);
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v7 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved);
      if ( v7 )
      {
        if ( pRawDllMain )
          return (unsigned int)pRawDllMain(hinstDLL, fdwReason, lpvReserved);
        else
          return 1;
      }
    }
  }
  return v7;
}
