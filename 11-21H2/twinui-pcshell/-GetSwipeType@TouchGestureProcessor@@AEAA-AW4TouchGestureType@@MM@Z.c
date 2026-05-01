/*
 * XREFs of ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x18058E6F4
 * Callers:
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18058DE98 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18058F7C8 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchGestureProcessor::GetSwipeType(__int64 a1, float a2, float a3)
{
  int v3; // eax
  __int64 result; // rax
  bool v5; // zf

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= COERCE_FLOAT(LODWORD(a3) & _xmm) )
    return v3 & 2;
  v5 = (v3 & 4) == 0;
  result = 0LL;
  if ( !v5 )
    return 4LL;
  return result;
}
