/*
 * XREFs of ??1SceneMesh@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x1801320B0
 * Callers:
 *     ??_GSceneMesh@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180132200 (--_GSceneMesh@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneMesh::~SceneMesh(
        Windows::UI::Composition::Scenes::SceneMesh *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  __int64 v10; // rdx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    *((_QWORD *)this + 28) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 27);
  if ( v4 )
  {
    *((_QWORD *)this + 27) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 26);
  if ( v5 )
  {
    *((_QWORD *)this + 26) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
  v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 25);
  if ( v6 )
  {
    *((_QWORD *)this + 25) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  }
  v7 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 24);
  if ( v7 )
  {
    *((_QWORD *)this + 24) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  }
  v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    *((_QWORD *)this + 23) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  }
  v9 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
  if ( v9 )
  {
    *((_QWORD *)this + 21) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v10);
}
