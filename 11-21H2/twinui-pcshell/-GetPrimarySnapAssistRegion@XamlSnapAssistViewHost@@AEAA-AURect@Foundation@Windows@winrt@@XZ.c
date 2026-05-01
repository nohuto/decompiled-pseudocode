/*
 * XREFs of ?GetPrimarySnapAssistRegion@XamlSnapAssistViewHost@@AEAA?AURect@Foundation@Windows@winrt@@XZ @ 0x18060268C
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlSnapAssistViewHost::GetPrimarySnapAssistRegion(__int64 a1, __int64 a2)
{
  _DWORD *i; // r8

  for ( i = *(_DWORD **)(a1 + 648); ; i += 8 )
  {
    if ( i == *(_DWORD **)(a1 + 656) )
    {
      *(_OWORD *)a2 = 0LL;
      return a2;
    }
    if ( !i[6] )
      break;
  }
  *(_DWORD *)a2 = i[2];
  *(_DWORD *)(a2 + 4) = i[3];
  *(_DWORD *)(a2 + 8) = i[4];
  *(_DWORD *)(a2 + 12) = i[5];
  return a2;
}
