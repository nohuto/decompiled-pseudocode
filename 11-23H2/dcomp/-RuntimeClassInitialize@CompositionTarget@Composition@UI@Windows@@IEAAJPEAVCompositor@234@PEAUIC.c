/*
 * XREFs of ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4
 * Callers:
 *     ?RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180158D5C (-RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CD9C (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VV.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCompositionTarget@Composition@UI@Windows@@@?$vector@PEAVCompositionTarget@Composition@UI@Windows@@V?$allocator@PEAVCompositionTarget@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVCompositionTarget@Composition@UI@Windows@@QEAPEAV2345@AEBQEAV2345@@Z @ 0x180196764 (--$_Emplace_reallocate@AEBQEAVCompositionTarget@Composition@UI@Windows@@@-$vector@PEAVCompositio.c)
 *     ??4?$ComPtr@UICompositionTargetHostPartner@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionTargetHostPartner@Composition@UI@Windows@@@Z @ 0x18019686C (--4-$ComPtr@UICompositionTargetHostPartner@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTarget::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionTarget *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::ICompositionTargetHostPartner *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbx
  __int128 v11; // xmm0
  int updated; // eax
  unsigned int v13; // edi
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+40h] [rbp-40h]
  Microsoft::WRL2::NestableRuntimeClass *v25; // [rsp+50h] [rbp-30h] BYREF
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  __int64 *v28; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF

  v21 = 0LL;
  v30 = 0LL;
  v6 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiontarget.cpp",
      (const char *)(unsigned int)v6);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    return v7;
  }
  v22 = *((_QWORD *)this + 3);
  v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::Compositor *>(
         &v21,
         (struct Windows::UI::Composition::Compositor **)&v22);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiontarget.cpp",
      (const char *)(unsigned int)v9);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    if ( v21 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v21);
    return v7;
  }
  DWORD2(v23) = 0;
  v10 = v21;
  DWORD2(v24) = 0;
  *(_QWORD *)&v24 = Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment;
  v22 = 0x3F8000003F800000LL;
  *(_QWORD *)&v23 = Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment;
  v11 = v23;
  v28 = &v22;
  *(_QWORD *)&v23 = &Windows::UI::Composition::Visual::sc_RelativeSizeAdjustment;
  v25 = v21;
  v26 = v11;
  v27 = v24;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(
              v21,
              (__int64)&v25,
              (PVOID **)&v23);
  v13 = updated;
  if ( updated >= 0 )
  {
    Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(v10, &v30);
    v14 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
    ++*(_DWORD *)(v14 + 88);
    if ( *(_DWORD *)(v14 + 80) != *(_DWORD *)(v14 + 84) + *(_DWORD *)(v14 + 88) )
      Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
    Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 128) + 96LL))(*(_QWORD *)(v14 + 128));
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1809LL,
        (__int64)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
        (const char *)(unsigned int)v15,
        (int)v21);
    v16 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionTargetHostPartner *, __int64))(*(_QWORD *)a3 + 32LL))(
            a3,
            v30);
    v17 = v16;
    if ( v16 >= 0 )
    {
      Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v14);
      if ( (*((_BYTE *)this + 32) & 2) == 0 )
        Microsoft::WRL2::FailFast::ForHR(0x80000013uLL, retaddr);
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionTargetHostPartner>::operator=(
        (__int64 *)this + 22,
        (__int64)a3);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(
        (Microsoft::WRL2::NestableRuntimeClass **)this + 23,
        &v21);
      *(_QWORD *)&v23 = this;
      v19 = (_BYTE *)*((_QWORD *)a2 + 107);
      if ( v19 == *((_BYTE **)a2 + 108) )
      {
        std::vector<Windows::UI::Composition::CompositionTarget *>::_Emplace_reallocate<Windows::UI::Composition::CompositionTarget * const &>(
          (__int64)a2 + 848,
          v19,
          &v23);
      }
      else
      {
        *(_QWORD *)v19 = this;
        *((_QWORD *)a2 + 107) += 8LL;
      }
      v20 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v10 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiontarget.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v14);
      v18 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( v10 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiontarget.cpp",
      (const char *)(unsigned int)updated);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    if ( v10 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
    return v13;
  }
}
