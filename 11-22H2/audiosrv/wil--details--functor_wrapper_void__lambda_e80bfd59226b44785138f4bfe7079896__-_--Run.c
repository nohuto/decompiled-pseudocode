/*
 * XREFs of wil::details::functor_wrapper_void__lambda_e80bfd59226b44785138f4bfe7079896__&_::Run @ 0x18011F270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_e80bfd59226b44785138f4bfe7079896____::Run(__int64 a1)
{
  _BYTE **v1; // rbx
  int v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_BYTE ***)(a1 + 8);
  v3 = 0;
  v4 = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"DisableGetMixFormatChange",
    0x20000018u,
    0LL,
    &v3,
    &v4);
  if ( !v3 )
    **v1 = 1;
  return 0LL;
}
