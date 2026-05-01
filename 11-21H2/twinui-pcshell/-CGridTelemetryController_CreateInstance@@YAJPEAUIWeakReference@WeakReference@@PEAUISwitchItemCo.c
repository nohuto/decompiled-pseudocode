/*
 * XREFs of ?CGridTelemetryController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUISwitchItemController@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D27AC
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x1804BF534 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU3@@Z @ 0x1804D2460 (--$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@We.c)
 */

__int64 __fastcall CGridTelemetryController_CreateInstance(
        struct IWeakReference *a1,
        struct ISwitchItemController *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IWeakReference *v10; // [rsp+30h] [rbp+8h] BYREF
  struct ISwitchItemController *v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CGridTelemetryController,ISwitchItemController,WeakReference::IWeakReference * &,ISwitchItemController * &>(
         &v12,
         (__int64 *)&v10,
         (__int64 *)&v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 197LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridtelemetry.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = (**v12)(v12, &GUID_b6197d31_183c_4b40_942b_308a66f93fde, a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 198LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v6;
}
