/*
 * XREFs of ?SetEnterprisePinGeneration@TaskbarLayoutItem@@UEAAJH@Z @ 0x1801D9770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutItem::SetEnterprisePinGeneration(TaskbarLayoutItem *this, int a2)
{
  *((_DWORD *)this + 31) = a2;
  return 0LL;
}
