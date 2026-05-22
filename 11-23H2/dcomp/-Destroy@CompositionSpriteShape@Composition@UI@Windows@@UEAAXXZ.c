/*
 * XREFs of ?Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ @ 0x18000E990
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionSpriteShape::Destroy(
        Windows::UI::Composition::CompositionSpriteShape *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock((char *)this + 208);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock((char *)this + 216);
  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 28);
  if ( v2 )
  {
    *((_QWORD *)this + 28) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 29);
  if ( v3 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v3);
    v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 29);
    if ( v4 )
    {
      *((_QWORD *)this + 29) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
    }
  }
  if ( (*((_BYTE *)this + 176) & 1) != 0 )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(
      *((DirectComposition::CDevice **)this + 23),
      (struct DirectComposition::CRebuildableObject *)(((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Windows::UI::Composition::CompositionShape::Destroy(this);
}
