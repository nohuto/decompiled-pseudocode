/*
 * XREFs of HsaSlGetPhyAddress @ 0x1403723F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaSlGetPhyAddress(_QWORD *a1)
{
  return *a1 & 0xFFFFFFFFFF000LL;
}
