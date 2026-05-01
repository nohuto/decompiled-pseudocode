/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18048EE5C
 * Callers:
 *     ?SetCallback@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIPenMenuSystemTrayManagerCallback@@@Z @ 0x1801BD950 (-SetCallback@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIPen.c)
 *     ??1?$com_ptr@UIPenMenuSystemTrayManagerCallback@@@winrt@@QEAA@XZ @ 0x18048EA4C (--1-$com_ptr@UIPenMenuSystemTrayManagerCallback@@@winrt@@QEAA@XZ.c)
 *     ??1PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18048EAE4 (--1PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x1805F7844 (--$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@-$factory_cache_entry@UGraphicsCaptureIt.c)
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x1805F7BB0 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
