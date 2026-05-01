/*
 * XREFs of ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x18003A360
 * Callers:
 *     <none>
 * Callees:
 *     ??$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_c676a23b08ff5d86622b6a68e8510924_@@@Z @ 0x18003A3F0 (--$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 */

void __fastcall ThumbnailDeviceFactory::PreCreateThumbnailDevice(ThumbnailDeviceFactory *this)
{
  ThumbnailDeviceFactory *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once<_lambda_c676a23b08ff5d86622b6a68e8510924_,>((char *)this + 56, &v1);
}
