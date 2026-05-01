/*
 * XREFs of ?VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180618200
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180617AA4 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x180618304 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopWallpaperChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        HSTRING string)
{
  PCWSTR StringRawBuffer; // rax
  int VirtualDesktopRegKeyName; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  UINT32 length[4]; // [rsp+30h] [rbp-98h] BYREF
  wchar_t v11[56]; // [rsp+40h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( string )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::WritePerDesktopData(
                                 this,
                                 a2,
                                 L"Wallpaper",
                                 2 * (length[0] + 1),
                                 StringRawBuffer,
                                 2LL * (length[0] + 1));
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v7 = 228LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)VirtualDesktopRegKeyName);
      return (unsigned int)VirtualDesktopRegKeyName;
    }
  }
  else
  {
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(this, a2, v11);
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v7 = 233LL;
      goto LABEL_4;
    }
    LOBYTE(v9) = 1;
    VirtualDesktopRegKeyName = (*(__int64 (__fastcall **)(_QWORD, __int64, wchar_t *, const unsigned __int16 *))(**((_QWORD **)this + 2) + 72LL))(
                                 *((_QWORD *)this + 2),
                                 v9,
                                 v11,
                                 L"Wallpaper");
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v7 = 234LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
