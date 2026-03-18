/*
 * XREFs of ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C008D6AC
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C008CFCC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     memmove @ 0x1C0141300 (memmove.c)
 */

char __fastcall TryCopyMemoryFromProbedPointer(void *a1, void *a2, unsigned int a3)
{
  memmove(a1, a2, a3);
  return 1;
}
