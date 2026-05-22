/*
 * XREFs of ?GetId@ButtonProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180031890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ButtonProcessor::GetId(ButtonProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Button;
  return result;
}
