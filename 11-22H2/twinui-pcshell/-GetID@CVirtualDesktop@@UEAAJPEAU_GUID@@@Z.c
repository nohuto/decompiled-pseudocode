/*
 * XREFs of ?GetID@CVirtualDesktop@@UEAAJPEAU_GUID@@@Z @ 0x1801C4270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktop::GetID(CVirtualDesktop *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct _GUID *)((char *)this + 88);
  return result;
}
