/*
 * XREFs of ?OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@std@@V_lambda_04d0ae44debf7fa40e3352da6740393b_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@0@V10@V10@V_lambda_04d0ae44debf7fa40e3352da6740393b_@@@Z @ 0x18001A3A8 (--$find_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UAttachedInputObject_ea_18001A3A8.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18001B2E0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180123C1C (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180124D8C (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x180125F14 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall InputSiteElementProxy::OnActivationControllerChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 *v10; // rbx
  _QWORD *v11; // rdx
  int (__fastcall *v12)(__int64 *, GUID *, __int64 **); // rdi
  int (__fastcall *v13)(__int64 *, GUID *, __int64 *); // rdi
  __int64 *v14; // rdx
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64); // rdi
  __int64 Transform; // rax
  __int64 *v18; // [rsp+20h] [rbp-39h] BYREF
  __int64 v19; // [rsp+28h] [rbp-31h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-29h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-21h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-19h] BYREF
  char v23[64]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 39);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x90,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v22[0] = (__int64)this;
  v19 = 0LL;
  v20 = v22;
  v21 = &v19;
  std::find_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<InputSite::AttachedInputObjectEntry>>>,_lambda_04d0ae44debf7fa40e3352da6740393b_>(
    &v18,
    *(__int64 **)(v5 + 488),
    *(__int64 **)(v5 + 496),
    &v20);
  v6 = v18;
  if ( v18 != *(__int64 **)(v5 + 496) )
  {
    v18 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(v6 + 1, &v18) >= 0 )
      (*(void (__fastcall **)(__int64 *))(*v18 + 32))(v18);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v5 + 488, &v20, v6);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v19);
  v7 = *((_QWORD *)this + 39);
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  if ( v8 )
  {
    v10 = (__int64 *)(v8 + 8);
    v22[0] = v8 + 8;
    if ( v8 != -8 )
      (*(void (__fastcall **)(__int64))(*v10 + 8))(v8 + 8);
    v20 = (__int64 *)this;
    v21 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64 *))(*v10 + 8))(v10);
    v11 = *(_QWORD **)(v7 + 496);
    if ( v11 == *(_QWORD **)(v7 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v7 + 488,
        v11,
        &v20);
    }
    else
    {
      *v11 = this;
      v14 = v11 + 1;
      *v14 = 0LL;
      if ( v14 != (__int64 *)&v21 )
      {
        *v14 = (__int64)v10;
        v21 = 0LL;
      }
      *(_QWORD *)(v7 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
    v18 = 0LL;
    v12 = *(int (__fastcall **)(__int64 *, GUID *, __int64 **))*v10;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v18);
    if ( v12(v10, &GUID_fc9627fe_ee9e_4718_b797_19522e5898d2, &v18) >= 0 )
      (*(void (__fastcall **)(__int64 *, __int64))(*v18 + 24))(v18, v7);
    v19 = 0LL;
    v13 = *(int (__fastcall **)(__int64 *, GUID *, __int64 *))*v10;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v19);
    if ( v13(v10, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v19) >= 0 && *(_BYTE *)(v7 + 480) )
    {
      v15 = v19;
      v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(v7 + 48, v23);
      v16(v15, Transform);
    }
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v22);
  }
  return 0LL;
}
