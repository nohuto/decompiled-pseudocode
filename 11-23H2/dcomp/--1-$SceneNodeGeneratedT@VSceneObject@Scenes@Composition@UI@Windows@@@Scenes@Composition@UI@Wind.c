/*
 * XREFs of ??1?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x180141454
 * Callers:
 *     ??_GSceneNode@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180141B20 (--_GSceneNode@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::~SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>(
        Microsoft::WRL2::ContextRuntimeClass *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 v5; // rdx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    *((_QWORD *)this + 21) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
}
