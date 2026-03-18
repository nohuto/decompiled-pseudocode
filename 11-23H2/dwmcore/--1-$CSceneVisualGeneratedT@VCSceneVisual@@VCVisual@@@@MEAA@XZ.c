/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801C179C
 * Callers:
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801C3720 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x180219F60 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800233AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[88]);
  this[88] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
