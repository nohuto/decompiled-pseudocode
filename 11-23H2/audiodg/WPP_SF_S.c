/*
 * XREFs of WPP_SF_S @ 0x1400528D0
 * Callers:
 *     wWinMain @ 0x140052B98 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids, 24LL, a4);
}
