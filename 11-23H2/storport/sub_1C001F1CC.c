/*
 * XREFs of sub_1C001F1CC @ 0x1C001F1CC
 * Callers:
 *     sub_1C001F11C @ 0x1C001F11C (sub_1C001F11C.c)
 *     sub_1C00A2D68 @ 0x1C00A2D68 (sub_1C00A2D68.c)
 *     sub_1C00A2E7C @ 0x1C00A2E7C (sub_1C00A2E7C.c)
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C001F1CC(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  return v1 == 315460 || v1 == 315464;
}
