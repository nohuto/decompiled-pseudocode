/*
 * XREFs of ??1CGridTelemetryController@@UEAA@XZ @ 0x1802E5ACA
 * Callers:
 *     ??_GCGridTelemetryController@@UEAAPEAXI@Z @ 0x18058A0F0 (--_GCGridTelemetryController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CGridTelemetryController::~CGridTelemetryController(CGridTelemetryController *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
