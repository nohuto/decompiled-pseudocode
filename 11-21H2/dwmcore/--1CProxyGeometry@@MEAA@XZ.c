/*
 * XREFs of ??1CProxyGeometry@@MEAA@XZ @ 0x1800CF5F4
 * Callers:
 *     ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x1800CE040 (--_GCProxyGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x1801A5FAC (-UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z.c)
 */

void __fastcall CProxyGeometry::~CProxyGeometry(CProxyGeometry *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 18);
  *(_QWORD *)this = &CProxyGeometry::`vftable';
  CResource::UnRegisterNotifierNoNULL(this, v1);
  CResource::UnRegisterNotifierNoNULL(this, *((struct CResource **)this + 19));
  CGeometry::~CGeometry(this);
}
