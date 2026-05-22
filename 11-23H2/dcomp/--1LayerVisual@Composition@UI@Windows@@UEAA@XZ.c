/*
 * XREFs of ??1LayerVisual@Composition@UI@Windows@@UEAA@XZ @ 0x1800861C4
 * Callers:
 *     ??_GLayerVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180086180 (--_GLayerVisual@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::LayerVisual::~LayerVisual(Windows::UI::Composition::LayerVisual *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rdx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 45);
  if ( v2 )
  {
    *((_QWORD *)this + 45) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 44);
  if ( v3 )
  {
    *((_QWORD *)this + 44) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
}
