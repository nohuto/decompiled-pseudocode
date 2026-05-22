/*
 * XREFs of ?Destroy@SceneNode@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801421B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetTransform@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVSceneModelTransform@2345@@Z @ 0x180144574 (-SetTransform@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composit.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNode::Destroy(Windows::UI::Composition::Scenes::SceneNode *this)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx

  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v2);
    v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
    if ( v3 )
    {
      *((_QWORD *)this + 20) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
    }
  }
  v4 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v4);
    v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
    if ( v5 )
    {
      *((_QWORD *)this + 21) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
    }
  }
  Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::SetTransform(
    this,
    0LL);
  if ( (*((_BYTE *)this + 192) & 1) != 0 )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(
      *((DirectComposition::CDevice **)this + 25),
      (struct DirectComposition::CRebuildableObject *)(((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
