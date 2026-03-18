/*
 * XREFs of GetContextHelpId @ 0x1C024EE68
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetContextHelpId(_QWORD *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rdx

  for ( i = *(_DWORD *)(a1[5] + 280LL); !i; i = *(_DWORD *)(v2 + 280) )
  {
    a1 = (_QWORD *)((*(_BYTE *)(a1[5] + 31LL) & 0xC0) == 0x40 ? a1[13] : a1[15]);
    if ( !a1 )
      break;
    v2 = a1[5];
    if ( (*(_WORD *)(v2 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  return i;
}
