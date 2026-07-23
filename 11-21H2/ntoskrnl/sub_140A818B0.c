/*
 * XREFs of sub_140A818B0 @ 0x140A818B0
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140A9C958 @ 0x140A9C958 (sub_140A9C958.c)
 * Callees:
 *     sub_140A818E8 @ 0x140A818E8 (sub_140A818E8.c)
 */

__int64 __fastcall sub_140A818B0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v3 = a2;
  *(_DWORD *)a1 = *(_DWORD *)v3;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 8);
  return sub_140A818E8(a1, (unsigned int)a3, a3, v3);
}
