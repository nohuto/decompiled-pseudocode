/*
 * XREFs of ??1?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@MEAA@XZ @ 0x18024E51C
 * Callers:
 *     ??1CSceneMesh@@MEAA@XZ @ 0x18024E5C0 (--1CSceneMesh@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800233AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::~CSceneMeshGeneratedT<CSceneMesh,CSceneObject>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  this[15] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::~CResource((CResource *)this);
}
