/*
 * XREFs of sub_1C0008BB4 @ 0x1C0008BB4
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     CompletionFunction @ 0x1C0014960 (CompletionFunction.c)
 *     sub_1C0015240 @ 0x1C0015240 (sub_1C0015240.c)
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C004E400 @ 0x1C004E400 (sub_1C004E400.c)
 *     sub_1C004F710 @ 0x1C004F710 (sub_1C004F710.c)
 *     sub_1C004FA08 @ 0x1C004FA08 (sub_1C004FA08.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0074EE0 @ 0x1C0074EE0 (sub_1C0074EE0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0008BB4(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 4896), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 4896) + 20LL) & 1) == 0;
}
