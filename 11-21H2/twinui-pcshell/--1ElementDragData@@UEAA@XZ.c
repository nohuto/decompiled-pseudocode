/*
 * XREFs of ??1ElementDragData@@UEAA@XZ @ 0x1804D738C
 * Callers:
 *     ??_EElementDragData@@UEAAPEAXI@Z @ 0x1804D76D0 (--_EElementDragData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804D7360 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 */

void __fastcall ElementDragData::~ElementDragData(ElementDragData *this)
{
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((volatile signed __int32 **)this + 23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
