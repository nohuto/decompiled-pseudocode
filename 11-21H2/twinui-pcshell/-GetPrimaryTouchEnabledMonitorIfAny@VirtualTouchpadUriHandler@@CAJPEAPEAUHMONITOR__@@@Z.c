/*
 * XREFs of ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x1804495F0
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180448F70 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA?AV?$unique_ptr@$$BY0A@UtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@_K@Z @ 0x180448984 (--$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA-AV-$unique_ptr@$$BY0A@Uta.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(HMONITOR *a1)
{
  signed int Error; // ebx
  __int64 v3; // r8
  const char *v4; // r9
  _DWORD *v5; // rbx
  const char *v6; // r9
  unsigned int LastError; // edi
  int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  Error = 0;
  v11 = 0;
  if ( ((unsigned int)GetPointerDevices(&v11, 0LL)
     || (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) < 0)
     || Error == -2147024774)
    && v11 )
  {
    wil::make_unique_hlocal_nothrow<tagPOINTER_DEVICE_INFO [0]>(&hMem, v11, v3, v4);
    v5 = hMem;
    if ( hMem )
    {
      if ( (unsigned int)GetPointerDevices(&v11, hMem) )
      {
        v8 = 0;
        if ( v11 )
        {
          while ( v5[270 * v8 + 4] != 3 )
          {
            if ( ++v8 >= v11 )
              goto LABEL_13;
          }
          *a1 = *(HMONITOR *)&v5[270 * v8 + 6];
        }
LABEL_13:
        LastError = 0;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x48,
                      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
                      v6);
      }
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)0x8007000ELL);
    }
    if ( v5 )
      LocalFree(v5);
    return LastError;
  }
  else
  {
    if ( Error < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)Error);
    return (unsigned int)Error;
  }
}
