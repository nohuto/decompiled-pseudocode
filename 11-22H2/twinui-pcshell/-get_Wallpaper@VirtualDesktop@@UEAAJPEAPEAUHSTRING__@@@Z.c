/*
 * XREFs of ?get_Wallpaper@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180545AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::get_Wallpaper(VirtualDesktop *this, HSTRING *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  HSTRING v6; // r8
  unsigned int v7; // ebx
  HSTRING v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  string = 0LL;
  v3 = *((_QWORD *)this + 14);
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = v4(v3, &string);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         (Microsoft::WRL::Wrappers::Details *)string,
                         0LL,
                         v6) )
    {
      v8 = string;
      string = 0LL;
      *a2 = v8;
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v5);
  }
  WindowsDeleteString(string);
  return v7;
}
