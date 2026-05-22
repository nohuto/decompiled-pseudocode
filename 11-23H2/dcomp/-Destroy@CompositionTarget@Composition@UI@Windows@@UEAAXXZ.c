/*
 * XREFs of ?Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1801968BC
 * Callers:
 *     ?Destroy@GlobalCompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180158CF0 (-Destroy@GlobalCompositionTarget@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionTarget::Destroy(
        Windows::UI::Composition::CompositionTarget *this,
        __int64 a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 *v4; // rsi
  __int64 v5; // rbx
  Windows::UI::Composition::CompositionTarget **v6; // r8
  Windows::UI::Composition::CompositionTarget **v7; // rcx
  Windows::UI::Composition::CompositionTarget **v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)this + 24,
    a2);
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 23);
  if ( v3 )
  {
    *((_QWORD *)this + 23) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (__int64 *)((char *)this + 176);
  if ( *((_QWORD *)this + 22) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = *(Windows::UI::Composition::CompositionTarget ***)(v5 + 856);
    v7 = *(Windows::UI::Composition::CompositionTarget ***)(v5 + 848);
    if ( v7 == v6 )
LABEL_7:
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    while ( 1 )
    {
      v8 = v7 + 1;
      if ( *v7 == this )
        break;
      ++v7;
      if ( v8 == v6 )
        goto LABEL_7;
    }
    memmove_0(v7, v8, (char *)v6 - (char *)v8);
    *(_QWORD *)(v5 + 856) -= 8LL;
    v9 = *v4;
    v15 = *v4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 22);
    v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
    ++*(_DWORD *)(v10 + 88);
    if ( *(_DWORD *)(v10 + 80) != *(_DWORD *)(v10 + 84) + *(_DWORD *)(v10 + 88) )
      Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
    Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v10);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 128) + 96LL))(*(_QWORD *)(v10 + 128));
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1809LL,
        (__int64)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
        (const char *)(unsigned int)v11,
        v13);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, 0LL);
    if ( v12 < 0 )
      Microsoft::WRL2::FailFast::ForHR((unsigned int)v12, retaddr);
    Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
