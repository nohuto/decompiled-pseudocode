/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800DB5BC
 * Callers:
 *     _lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator() @ 0x180008AF0 (_lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, 63LL, a4);
}
