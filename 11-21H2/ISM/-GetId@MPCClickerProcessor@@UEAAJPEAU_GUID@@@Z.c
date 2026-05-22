/*
 * XREFs of ?GetId@MPCClickerProcessor@@UEAAJPEAU_GUID@@@Z @ 0x1800273B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCClickerProcessor::GetId(MPCClickerProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCClicker;
  return result;
}
