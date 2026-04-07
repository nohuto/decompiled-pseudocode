/*
 * XREFs of ??1CapturedWindowSWRVisual@@MEAA@XZ @ 0x1800CB818
 * Callers:
 *     ??_GCapturedWindowSWRVisual@@MEAAPEAXI@Z @ 0x1800CBA40 (--_GCapturedWindowSWRVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CapturedWindowSWRVisual::~CapturedWindowSWRVisual(CapturedWindowSWRVisual *this)
{
  *(_QWORD *)this = &CapturedWindowSWRVisual::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CapturedWindowSWRVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)this + 3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)this + 3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
