/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1408AB952
 * Callers:
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, unsigned int a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, a2 >> 31, Src, 0, (unsigned int *)(a3 + 44));
}
