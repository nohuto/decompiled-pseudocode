/*
 * XREFs of sub_1C00B2380 @ 0x1C00B2380
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetUncachedExtension @ 0x1C00465B0 (StorPortGetUncachedExtension.c)
 */

__int64 __fastcall sub_1C00B2380(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // r9

  v3 = *(_BYTE **)(a1 - 16);
  if ( (v3[248] & 1) == 0 || !*(_BYTE *)(a2 + 82) || ((*(_DWORD *)(*(_QWORD *)v3 + 484LL) + 7) & 0xFFFFFFF8) == 0 )
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return StorPortGetUncachedExtension(a1, a2, a3);
}
