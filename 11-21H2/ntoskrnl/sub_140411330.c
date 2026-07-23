/*
 * XREFs of sub_140411330 @ 0x140411330
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_140416BB0 @ 0x140416BB0 (sub_140416BB0.c)
 *     sub_140416C00 @ 0x140416C00 (sub_140416C00.c)
 *     sub_140416C50 @ 0x140416C50 (sub_140416C50.c)
 */

__int64 __fastcall sub_140411330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  _misaligned_access();
  LODWORD(a3) = sub_140416C00(a2, a3, a4, v5);
  sub_140416BB0(a4, a1 + 128, a5, v5);
  return sub_140416C50(a5, a4, v5, (unsigned int)-(int)a3);
}
