/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800E3AA8
 * Callers:
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D9C (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 63LL, a4);
}
