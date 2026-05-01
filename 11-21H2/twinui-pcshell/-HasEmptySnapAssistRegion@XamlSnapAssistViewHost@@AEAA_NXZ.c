/*
 * XREFs of ?HasEmptySnapAssistRegion@XamlSnapAssistViewHost@@AEAA_NXZ @ 0x1806028C4
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlSnapAssistViewHost::HasEmptySnapAssistRegion(XamlSnapAssistViewHost *this)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)this + 81); ; i += 32LL )
  {
    if ( i == *((_QWORD *)this + 82) )
      return 0;
    if ( *(_DWORD *)(i + 24) == 1 )
      break;
  }
  return 1;
}
