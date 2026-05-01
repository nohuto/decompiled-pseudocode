/*
 * XREFs of ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x1800671E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@@Z @ 0x180067270 (--$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 */

void __fastcall ThumbnailDeviceFactory::PreCreateThumbnailDevice(ThumbnailDeviceFactory *this)
{
  ThumbnailDeviceFactory *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once<_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_,>((char *)this + 56, &v1);
}
