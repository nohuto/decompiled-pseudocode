/*
 * XREFs of ZwAllocateUserPhysicalPagesEx @ 0x14041BBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateUserPhysicalPagesEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
