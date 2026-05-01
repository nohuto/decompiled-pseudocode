/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800611E0
 * Callers:
 *     <none>
 * Callees:
 *     ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800612B0 (-get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::get_Name(VirtualDesktop *this, HSTRING *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  HSTRING v7; // r8
  unsigned int v8; // ebx
  int DefaultName; // eax
  unsigned int v10; // ebx
  HSTRING v12; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  string = 0LL;
  v4 = *((_QWORD *)this + 14);
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 40LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(v4, &string);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6,
      v13);
    WindowsDeleteString(string);
    return v8;
  }
  else if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            (Microsoft::WRL::Wrappers::Details *)string,
                            0LL,
                            v7) )
  {
    v12 = string;
    string = 0LL;
    *a2 = v12;
    WindowsDeleteString(0LL);
    return 0LL;
  }
  else
  {
    DefaultName = VirtualDesktop::get_DefaultName(this, a2);
    v10 = DefaultName;
    if ( DefaultName < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC2,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)DefaultName,
        v13);
      WindowsDeleteString(string);
      return v10;
    }
    else
    {
      WindowsDeleteString(string);
      return 0LL;
    }
  }
}
