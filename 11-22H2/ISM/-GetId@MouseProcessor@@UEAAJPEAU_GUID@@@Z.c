/*
 * XREFs of ?GetId@MouseProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180030D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::GetId(MouseProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Mouse;
  return result;
}
