/*
 * XREFs of IsEqualInputSource @ 0x1C00ACCA0
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0033E80 (CoalesceInputSourceMouseMoves.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035E4C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     GetCoalesceableMouseMessage @ 0x1C00ACC10 (GetCoalesceableMouseMessage.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 || !a2 )
    return 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return v2;
}
