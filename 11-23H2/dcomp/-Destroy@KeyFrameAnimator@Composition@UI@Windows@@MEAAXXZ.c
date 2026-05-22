/*
 * XREFs of ?Destroy@KeyFrameAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180028A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameAnimationResources@Composition@UI@Windows@@@Z @ 0x1801610D4 (--R-$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameA.c)
 */

void __fastcall Windows::UI::Composition::KeyFrameAnimator::Destroy(Windows::UI::Composition::KeyFrameAnimator *this)
{
  DirectComposition::CDelayedDestructionObject *v2; // rcx
  DirectComposition::CDelayedDestructionObject *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbp
  Windows::UI::Composition::KeyFrameAnimator **v6; // rdx
  Windows::UI::Composition::KeyFrameAnimator **v7; // rbx
  Windows::UI::Composition::KeyFrameAnimator **i; // rax
  size_t v9; // rdi
  char v10; // al
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 **v13; // rdi
  volatile signed __int32 **j; // rbx
  __int64 v15; // rdi
  __int64 k; // rbx
  volatile signed __int32 *v17; // rcx

  v2 = (DirectComposition::CDelayedDestructionObject *)*((_QWORD *)this + 37);
  if ( v2 )
  {
    DirectComposition::CDelayedDestructionObject::Release(v2);
    *((_QWORD *)this + 37) = 0LL;
  }
  v3 = (DirectComposition::CDelayedDestructionObject *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    DirectComposition::CDelayedDestructionObject::Release(v3);
    *((_QWORD *)this + 38) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 320);
  v4 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  if ( v4 )
    std::default_delete<Windows::UI::Composition::KeyFrameAnimationResources>::operator()();
  v5 = *((_QWORD *)this + 43);
  if ( v5 )
  {
    v6 = *(Windows::UI::Composition::KeyFrameAnimator ***)(v5 + 208);
    v7 = *(Windows::UI::Composition::KeyFrameAnimator ***)(v5 + 200);
    if ( v7 != v6 )
    {
      do
      {
        if ( *v7 == this )
          break;
        ++v7;
      }
      while ( v7 != v6 );
      if ( v7 != v6 )
      {
        for ( i = v7 + 1; i != v6; ++i )
        {
          if ( *i != this )
            *v7++ = *i;
        }
        if ( v7 != v6 )
        {
          v9 = *(_QWORD *)(v5 + 208) - (_QWORD)v6;
          memmove_0(v7, v6, v9);
          *(_QWORD *)(v5 + 208) = (char *)v7 + v9;
        }
      }
    }
    v10 = *(_BYTE *)(v5 + 152);
    if ( (v10 & 1) == 0 )
    {
      *(_BYTE *)(v5 + 152) = v10 | 1;
      DirectComposition::CDevice::AddDirtyRebuildableObject(
        *(DirectComposition::CDevice **)(*(_QWORD *)(v5 + 24) + 456LL),
        (struct DirectComposition::CRebuildableObject *)(v5 + 136));
    }
    v11 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 43);
    if ( v11 )
    {
      *((_QWORD *)this + 43) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
  }
  (*(void (__fastcall **)(Windows::UI::Composition::KeyFrameAnimator *))(*(_QWORD *)this + 432LL))(this);
  if ( (*((_BYTE *)this + 152) & 1) != 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1u,
      0LL);
    *((_BYTE *)this + 152) &= ~1u;
  }
  v13 = (volatile signed __int32 **)*((_QWORD *)this + 33);
  for ( j = (volatile signed __int32 **)*((_QWORD *)this + 32); j != v13; ++j )
  {
    v17 = *j;
    if ( *j )
    {
      *j = 0LL;
      if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v12) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 64LL))(v17, v12);
      }
    }
  }
  *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  v15 = *((_QWORD *)this + 26);
  for ( k = *((_QWORD *)this + 25); k != v15; k += 24LL )
  {
    WindowsDeleteString(*(HSTRING *)(k + 16));
    *(_QWORD *)(k + 16) = 0LL;
    WindowsDeleteString(*(HSTRING *)(k + 8));
    *(_QWORD *)(k + 8) = 0LL;
  }
  *((_QWORD *)this + 26) = *((_QWORD *)this + 25);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
