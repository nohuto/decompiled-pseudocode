/*
 * XREFs of _lambda_3575bd4b767d2b46c3040112ba587459_::_lambda_invoker_cdecl_ @ 0x180081B80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

HSTRING __fastcall lambda_3575bd4b767d2b46c3040112ba587459_::_lambda_invoker_cdecl_(HSTRING a1, HSTRING *a2)
{
  HRESULT v3; // eax
  HSTRING result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING newString; // [rsp+40h] [rbp+18h] BYREF

  v3 = WindowsDuplicateString(a1, &newString);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsparsepropertystore.cpp",
      (const char *)(unsigned int)v3,
      v5);
  result = newString;
  *a2 = newString;
  return result;
}
