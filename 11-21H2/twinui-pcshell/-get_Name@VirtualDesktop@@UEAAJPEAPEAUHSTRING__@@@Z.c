/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RvUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RvUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035370 (-get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktop::get_Name(VirtualDesktop *this, HSTRING *a2)
{
  HSTRING *v2; // rsi
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
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RvUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RvUpdates>::GetImpl'::`2'::impl,
    a2);
  *v2 = 0LL;
  string = 0LL;
  v4 = *((_QWORD *)this + 13);
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(v4, &string);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
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
    *v2 = v12;
    WindowsDeleteString(0LL);
    return 0LL;
  }
  else
  {
    DefaultName = VirtualDesktop::get_DefaultName(this, v2);
    v10 = DefaultName;
    if ( DefaultName < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
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
