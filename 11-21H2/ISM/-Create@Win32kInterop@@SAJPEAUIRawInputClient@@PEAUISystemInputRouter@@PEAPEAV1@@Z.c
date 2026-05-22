/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180027B04
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18002792C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800328A8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18003AB60 (--0Win32kInterop@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  Win32kInterop *v6; // rbx
  Win32kInterop *v7; // rax
  int v8; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 )
  {
    v10 = 118LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)0x80070057LL,
      v11);
    return 2147942487LL;
  }
  if ( !a2 )
  {
    v10 = 119LL;
    goto LABEL_15;
  }
  if ( !a3 )
  {
    v10 = 120LL;
    goto LABEL_15;
  }
  v6 = Win32kInterop::s_pInterop;
  if ( !Win32kInterop::s_pInterop )
  {
    v7 = (Win32kInterop *)malloc(0x8F0uLL);
    v6 = v7;
    if ( v7 )
      memset_0(v7, 0, 0x8F0uLL);
    if ( v6 )
    {
      memset_0(v6, 0, 0x8F0uLL);
      v6 = Win32kInterop::Win32kInterop(v6);
    }
    if ( !v6 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x8007000ELL,
        v11);
    v8 = Win32kInterop::Initialize(v6, a1, a2);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v8,
        v11);
    Win32kInterop::s_pInterop = v6;
  }
  *a3 = v6;
  return 0LL;
}
