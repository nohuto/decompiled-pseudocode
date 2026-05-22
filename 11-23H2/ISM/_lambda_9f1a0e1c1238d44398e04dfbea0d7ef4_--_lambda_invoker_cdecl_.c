/*
 * XREFs of _lambda_9f1a0e1c1238d44398e04dfbea0d7ef4_::_lambda_invoker_cdecl_ @ 0x1800597D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180059DD4 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_9f1a0e1c1238d44398e04dfbea0d7ef4_::_lambda_invoker_cdecl_(LampArrayRawInputProvider *a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = LampArrayRawInputProvider::EnsureAmbientManager(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
