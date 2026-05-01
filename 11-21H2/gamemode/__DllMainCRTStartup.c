/*
 * XREFs of __DllMainCRTStartup @ 0x10006A52
 * Callers:
 *     __DllMainCRTStartup@12 @ 0x10006A10 (__DllMainCRTStartup@12.c)
 * Callees:
 *     _DllMain@12 @ 0x10004C86 (_DllMain@12.c)
 *     __CRT_INIT@12 @ 0x10006818 (__CRT_INIT@12.c)
 *     ___CppXcptFilter @ 0x10006A2C (___CppXcptFilter.c)
 *     __DllMainCRTStartup @ 0x10006A52 (__DllMainCRTStartup.c)
 *     __SEH_prolog4 @ 0x100071E8 (__SEH_prolog4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v4; // [esp+30h] [ebp-1Ch]

  v4 = 1;
  if ( fdwReason <= 1 )
    __native_dllmain_reason = fdwReason;
  if ( fdwReason || dword_100080C0 )
  {
    if ( fdwReason != 1 && fdwReason != 2 )
      goto LABEL_14;
    if ( _pRawDllMain )
    {
      if ( fdwReason == 1 )
        dword_100080C4 = 1;
      v4 = _pRawDllMain(_pRawDllMain, hinstDLL, fdwReason, lpvReserved);
    }
    if ( v4 )
    {
      v4 = _CRT_INIT((int)hinstDLL, fdwReason, (int)lpvReserved);
      if ( v4 )
      {
LABEL_14:
        v4 = DllMain(hinstDLL, fdwReason, lpvReserved);
        if ( fdwReason == 1 && !v4 )
        {
          DllMain(hinstDLL, 0, 0);
          _CRT_INIT((int)hinstDLL, 0, 0);
          if ( _pRawDllMain )
            _pRawDllMain(_pRawDllMain, hinstDLL, 0, 0);
        }
        if ( !fdwReason || fdwReason == 3 )
        {
          v4 = _CRT_INIT((int)hinstDLL, fdwReason, (int)lpvReserved);
          if ( _pRawDllMain )
          {
            if ( dword_100080C4 )
              v4 = _pRawDllMain(_pRawDllMain, hinstDLL, fdwReason, lpvReserved);
          }
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( fdwReason <= 1 )
    __native_dllmain_reason = -1;
  return v4;
}
