/*
 * XREFs of ?GetClassID@CDummyUnknown@@UEAAJPEAU_GUID@@@Z @ 0x1801860B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::GetClassID(struct _GUID *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[2];
  return result;
}
