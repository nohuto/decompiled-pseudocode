/*
 * XREFs of _DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C0316A8C
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1C031E8D0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE(PVOID *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136), *a1);
}
