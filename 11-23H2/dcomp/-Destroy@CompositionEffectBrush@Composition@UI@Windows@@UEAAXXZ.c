/*
 * XREFs of ?Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002E620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0 (-UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionEffectBrush::Destroy(
        Windows::UI::Composition::CompositionEffectBrush *this)
{
  char *v1; // rsi
  unsigned int v3; // ebp
  unsigned int v4; // r15d
  __int64 v5; // r14
  char *v6; // rcx
  char *v7; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = (char *)this + 168;
  if ( *((_QWORD *)this + 22) )
  {
    v3 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 152LL) + 24LL))(*(_QWORD *)(*(_QWORD *)v1 + 152LL));
    if ( v4 )
    {
      v5 = 0LL;
      do
      {
        if ( *((_DWORD *)this + 46) )
        {
          v9 = *(Microsoft::WRL2::NestableRuntimeClass **)(v5 + *((_QWORD *)this + 22));
          v13 = v9;
          if ( v9 )
          {
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v9);
            v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                    *((struct Microsoft::WRL2::ContextSession **)this + 3),
                    (struct IUnknown *)v9,
                    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                    &v12);
            v11 = v12;
            if ( v10 >= 0 )
              Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(v12, -*((_DWORD *)this + 46));
            if ( v11 )
              Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
          }
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v13);
        }
        DirectComposition::CDevice::ResourceSetReferenceProperty(
          *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
          *((_DWORD *)this + 32),
          v3++ & 0x3FFFFFFF | 0x80000000,
          0);
        v5 += 8LL;
      }
      while ( v3 < v4 );
    }
    v6 = (char *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v6 )
    {
      v7 = v6 - 8;
      `vector destructor iterator'(
        v6,
        8uLL,
        *((_QWORD *)v6 - 1),
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::~RefPtr<Windows::UI::Composition::CompositionBrush>);
      operator delete(v7, 8LL * *(_QWORD *)v7 + 8);
    }
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    0,
    0);
  v8 = *(Microsoft::WRL2::NestableRuntimeClass **)v1;
  if ( *(_QWORD *)v1 )
  {
    *(_QWORD *)v1 = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
