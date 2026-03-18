/*
 * XREFs of DxgkMakeResident @ 0x1C01C4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C4F60 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 */

int __fastcall DxgkMakeResident(struct D3DDDI_MAKERESIDENT *a1)
{
  return DxgkMakeResidentInternal(a1, 1, 0LL);
}
