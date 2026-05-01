/*
 * XREFs of sub_18015E2A8 @ 0x18015E2A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18015E2A8(CApplicationFrameService *a1, struct IApplicationFrameProxy *a2)
{
  __int64 v2; // rsi

  *(_DWORD *)(v2 - 102) <<= (char)a1;
  LOBYTE(a1) = v2 & (unsigned __int8)a1;
  return CApplicationFrameService::DestroyFrame(a1, a2);
}
