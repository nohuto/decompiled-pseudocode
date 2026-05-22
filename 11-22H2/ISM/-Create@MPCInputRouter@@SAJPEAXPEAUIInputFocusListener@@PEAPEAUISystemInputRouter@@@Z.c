/*
 * XREFs of ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18002B3A8
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004E820 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18002B460 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002B9C4 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B26E0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  MPCInputRouter *v6; // rax
  const char *v7; // r9
  MPCInputRouter *v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  MPCInputRouter *v13; // [rsp+50h] [rbp+8h] BYREF
  DWORD v14; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v13) = 0;
  v14 = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"MPCInputRouterWaitForDebugger",
    0x10u,
    0LL,
    &v13,
    &v14);
  if ( (_DWORD)v13 == 1 )
  {
    while ( !IsDebuggerPresent() )
      Sleep(0x64u);
    __debugbreak();
  }
  if ( !a1 || !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)0x80070057LL,
      v11);
  v6 = (MPCInputRouter *)RefCountedObject::operator new(0x3D8uLL);
  v13 = v6;
  if ( v6 )
    v8 = MPCInputRouter::MPCInputRouter(v6, a1, a2);
  else
    v8 = 0LL;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x7B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      v7);
  v9 = MPCInputRouter::Initialize(v8);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v9,
      v11);
  *a3 = v8;
  return 0LL;
}
