/*
 * XREFs of ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18003A390
 * Callers:
 *     <none>
 * Callees:
 *     ??$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_c676a23b08ff5d86622b6a68e8510924_@@@Z @ 0x18003A3F0 (--$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ThumbnailDeviceFactory::GetThumbnailDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  std::call_once<_lambda_c676a23b08ff5d86622b6a68e8510924_,>(a1 + 56, &v6);
  v4 = *(_QWORD *)(a1 + 48);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
