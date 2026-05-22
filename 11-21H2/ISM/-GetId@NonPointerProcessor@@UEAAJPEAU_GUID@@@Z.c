/*
 * XREFs of ?GetId@NonPointerProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180026680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NonPointerProcessor::GetId(NonPointerProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_NonPointer;
  return result;
}
