/*
 * XREFs of ?CoinitializeWrapper@CCompositor@@AEAAJXZ @ 0x18004AEA4
 * Callers:
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x18004ACE8 (-Initialize@CCompositor@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositor::CoinitializeWrapper(CCompositor *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CoInitializeEx(0LL, 4u);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D1,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
