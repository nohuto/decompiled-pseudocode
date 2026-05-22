/*
 * XREFs of ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIActivationConfigurationInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationConfigurationInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001A348 (--$As@UIActivationConfigurationInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18001B2E0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180123C1C (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??$As@UIInputSiteTransformClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180123C78 (--$As@UIInputSiteTransformClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180124D8C (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x180125F14 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InputSiteElementProxy::OnActivationConfigurationInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 i; // rbx
  bool v9; // r15
  bool v10; // al
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 *v17; // rdx
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64); // rdi
  __int64 Transform; // rax
  __int64 v21; // [rsp+20h] [rbp-49h] BYREF
  __int64 v22; // [rsp+28h] [rbp-41h] BYREF
  __int64 v23; // [rsp+30h] [rbp-39h] BYREF
  InputSiteElementProxy *v24; // [rsp+38h] [rbp-31h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v26[64]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 39);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x86,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v22 = 0LL;
  v6 = *(_QWORD *)(v5 + 496);
  v7 = v5 + 488;
  for ( i = *(_QWORD *)(v5 + 488); i != v6; i += 16LL )
  {
    v9 = *(_QWORD *)i == (_QWORD)this;
    v10 = (int)Microsoft::WRL::ComPtr<IUnknown>::As<IActivationConfigurationInputObjectProxy>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(i + 8),
                 &v22) >= 0;
    if ( v9 && v10 )
      break;
  }
  if ( i != *(_QWORD *)(v7 + 8) )
  {
    v21 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(i + 8, &v21) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v7, &v23, i);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v21);
  }
  v11 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 39);
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  if ( v13 )
  {
    v15 = v13 + 8;
    v21 = v13 + 8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v21);
    v24 = this;
    v25[0] = v15;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v25);
    v16 = *(_QWORD **)(v12 + 496);
    if ( v16 == *(_QWORD **)(v12 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v12 + 488,
        v16,
        &v24);
    }
    else
    {
      *v16 = this;
      v17 = v16 + 1;
      *v17 = 0LL;
      if ( v17 != v25 )
      {
        *v17 = v15;
        v25[0] = 0LL;
      }
      *(_QWORD *)(v12 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v25);
    v23 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v21, &v23) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 24LL))(v23, v12);
    v22 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(&v21, &v22) >= 0
      && *(_BYTE *)(v12 + 480) )
    {
      v18 = v22;
      v19 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(v12 + 48, v26);
      v19(v18, Transform);
    }
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v21);
  }
  return 0LL;
}
