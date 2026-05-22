/*
 * XREFs of ?GetId@PTPProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180027410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::GetId(PTPProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_PTP;
  return result;
}
