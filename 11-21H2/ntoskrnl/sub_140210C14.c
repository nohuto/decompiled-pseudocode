/*
 * XREFs of sub_140210C14 @ 0x140210C14
 * Callers:
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     sub_140210484 @ 0x140210484 (sub_140210484.c)
 *     sub_1402108CC @ 0x1402108CC (sub_1402108CC.c)
 *     sub_140210C6C @ 0x140210C6C (sub_140210C6C.c)
 */

int __fastcall sub_140210C14(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return sub_1402108CC(a1, *(_QWORD *)(a3 + 944), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return sub_140210484(a1, a3 + 216, a4);
  return sub_140210C6C(a2, a3, a4);
}
