/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x1800CF7BC
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1800CE0D4 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1800CF5F4 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ??_GCEllipseGeometry@@UEAAPEAXI@Z @ 0x1800CF640 (--_GCEllipseGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x1800CF690 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800CF6F0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800CF740 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x18019F010 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x180216E90 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 15));
  CShapePtr::Release((CShapePtr *)(this + 13));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
