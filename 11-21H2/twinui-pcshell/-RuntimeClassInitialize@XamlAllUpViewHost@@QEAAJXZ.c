/*
 * XREFs of ?RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ @ 0x180437D3C
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18042B9D8 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 */

__int64 __fastcall XamlAllUpViewHost::RuntimeClassInitialize(XamlAllUpViewHost *this)
{
  int inited; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((XamlAllUpViewHost *)((char *)this + 24));
  v2 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
    (const char *)(unsigned int)inited);
  return v2;
}
