/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18003ACA0
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800379B0 (--0Win32kInterop@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180044794 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  Win32kInterop *v6; // rbx
  Win32kInterop *v7; // rax
  Win32kInterop *v8; // rbx
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v11 = 118LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a2 )
  {
    v11 = 119LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    v11 = 120LL;
    goto LABEL_14;
  }
  v6 = Win32kInterop::s_pInterop;
  if ( !Win32kInterop::s_pInterop )
  {
    v7 = (Win32kInterop *)RefCountedObject::operator new(0x860uLL);
    v8 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0x860uLL);
      v6 = Win32kInterop::Win32kInterop(v8);
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x8007000ELL,
        v12);
    v9 = Win32kInterop::Initialize(v6, a1, a2);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9,
        v12);
    Win32kInterop::s_pInterop = v6;
  }
  *a3 = v6;
  return 0LL;
}
