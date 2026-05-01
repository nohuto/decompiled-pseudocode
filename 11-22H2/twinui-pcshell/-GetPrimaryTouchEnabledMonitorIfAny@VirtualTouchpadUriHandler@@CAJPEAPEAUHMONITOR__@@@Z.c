/*
 * XREFs of ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x1804FF440
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x1804FEDB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?second@?$__compressed_pair@PEAUtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAAEAU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@XZ @ 0x1801A2324 (-second@-$__compressed_pair@PEAUtagPOINTER_DEVICE_INFO@@U-$function_deleter@P6APEAXPEAX@Z$1-Loca.c)
 *     ??$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA?AV?$unique_ptr@$$BY0A@UtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@_K@Z @ 0x1804FE7D8 (--$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA-AV-$unique_ptr@$$BY0A@Uta.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(HMONITOR *a1)
{
  signed int Error; // ebx
  __int64 v3; // r8
  const char *v4; // r9
  const char *v5; // r9
  unsigned int LastError; // edi
  unsigned int v7; // ecx
  HLOCAL v8; // rbx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  Error = 0;
  v12 = 0;
  if ( (unsigned int)GetPointerDevices(&v12, 0LL)
    || (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) < 0)
    || Error == -2147024774 )
  {
    if ( v12 )
    {
      wil::make_unique_hlocal_nothrow<tagPOINTER_DEVICE_INFO [0]>(&hMem, v12, v3, v4);
      if ( hMem )
      {
        if ( (unsigned int)GetPointerDevices(&v12, hMem) )
        {
          v7 = 0;
          v8 = hMem;
          if ( v12 )
          {
            while ( 1 )
            {
              v9 = 1080LL * v7;
              if ( *(_DWORD *)((char *)hMem + v9 + 16) == 3 )
                break;
              if ( ++v7 >= v12 )
                goto LABEL_13;
            }
            *a1 = *(HMONITOR *)((char *)hMem + v9 + 24);
          }
LABEL_13:
          LastError = 0;
          goto LABEL_16;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x48,
                      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
                      v5);
      }
      else
      {
        LastError = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
          (const char *)0x8007000ELL);
      }
      v8 = hMem;
LABEL_16:
      hMem = 0LL;
      if ( v8 )
      {
        wistd::__compressed_pair<tagPOINTER_DEVICE_INFO *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::second((__int64)&hMem);
        LocalFree(v8);
      }
      return LastError;
    }
  }
  if ( Error < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)Error);
  return (unsigned int)Error;
}
