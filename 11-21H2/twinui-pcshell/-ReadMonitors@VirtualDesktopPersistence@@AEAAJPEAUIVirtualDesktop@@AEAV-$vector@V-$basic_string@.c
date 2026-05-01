/*
 * XREFs of ?ReadMonitors@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18055CC68
 * Callers:
 *     ?AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@@Z @ 0x18055C3AC (-AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV-$vector.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     swprintf_s @ 0x180189094 (swprintf_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x18055CA90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::ReadMonitors(__int64 a1, struct IVirtualDesktop *a2, __int64 a3)
{
  __int64 result; // rax
  int VirtualDesktopRegKeyName; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  wchar_t v12[56]; // [rsp+40h] [rbp-118h] BYREF
  wchar_t Buffer[64]; // [rsp+B0h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    try
    {
      VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                                   (VirtualDesktopPersistence *)a1,
                                   a2,
                                   v12);
      v7 = VirtualDesktopRegKeyName;
      if ( VirtualDesktopRegKeyName >= 0 )
      {
        if ( swprintf_s(Buffer, 0x3BuLL, L"%ws\\%ws", v12, L"Monitors") > 0 )
        {
          LOBYTE(v9) = 1;
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, wchar_t *, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
                  *(_QWORD *)(a1 + 16),
                  v9,
                  Buffer,
                  a3);
          v11 = v10;
          if ( v10 >= 0 )
          {
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1DA,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v10);
            result = v11;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D8,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)0x80004005LL);
          result = 2147500037LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          (const char *)(unsigned int)VirtualDesktopRegKeyName);
        result = v7;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1DD,
                             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
