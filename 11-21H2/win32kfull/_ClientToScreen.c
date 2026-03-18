/*
 * XREFs of _ClientToScreen @ 0x1C025A47C
 * Callers:
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientToScreen(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v3 + 42) & 0x2FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(v3 + 26) & 0x40) != 0 )
      *a2 = *(_DWORD *)(v3 + 112) - *a2;
    else
      *a2 += *(_DWORD *)(v3 + 104);
    result = *(_QWORD *)(a1 + 40);
    a2[1] += *(_DWORD *)(result + 108);
  }
  return result;
}
