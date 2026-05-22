/*
 * XREFs of _lambda_ca85b764199dcdb943f9219ecf8076c3_::_lambda_invoker_cdecl_ @ 0x180061F00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180062544 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_ca85b764199dcdb943f9219ecf8076c3_::_lambda_invoker_cdecl_(LampArrayRawInputProvider *a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = LampArrayRawInputProvider::EnsureAmbientManager(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
