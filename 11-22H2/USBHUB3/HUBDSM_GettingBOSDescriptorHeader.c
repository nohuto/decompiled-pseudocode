/*
 * XREFs of HUBDSM_GettingBOSDescriptorHeader @ 0x1C0022550
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002B424 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingBOSDescriptorHeader(__int64 a1)
{
  HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
