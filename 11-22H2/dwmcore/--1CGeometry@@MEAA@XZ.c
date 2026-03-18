/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x1800EB234
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18000C008 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1800EB074 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ??_GCEllipseGeometry@@UEAAPEAXI@Z @ 0x1800EB0C0 (--_GCEllipseGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x1800EB110 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800EB170 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800EB1F0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x1801C31F0 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18022EDA4 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DC518 (-Release@CShapePtr@@QEAAXXZ.c)
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
