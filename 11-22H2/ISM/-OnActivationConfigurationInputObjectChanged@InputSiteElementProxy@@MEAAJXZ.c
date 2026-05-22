/*
 * XREFs of ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180024B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025054 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x1800270E0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18014D738 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18014E628 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall InputSiteElementProxy::OnActivationConfigurationInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  _QWORD *v6; // r15
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  bool v12; // r13
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r12
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rax
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // al
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rbx
  _QWORD *v19; // rdx
  int (__fastcall *v20)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v21; // rdx
  __int64 v22; // rbx
  void (__fastcall *v23)(__int64, __int64); // rdi
  __int64 Transform; // rax
  __int64 v25; // [rsp+20h] [rbp-49h] BYREF
  __int64 v26; // [rsp+28h] [rbp-41h] BYREF
  __int64 (__fastcall *v27)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  InputSiteElementProxy *v28; // [rsp+38h] [rbp-31h] BYREF
  __int64 v29[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v30[64]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 41);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v25 = 0LL;
  v6 = *(_QWORD **)(v5 + 496);
  for ( i = *(_QWORD **)(v5 + 488); i != v6; i += 2 )
  {
    v12 = *i == (_QWORD)this;
    v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))i[1];
    v14 = **v13;
    v27 = v14;
    v15 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = v27(v13, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v25);
    }
    else
    {
      v16 = v14(v13, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v25);
    }
    v17 = v16 >= 0;
    if ( v12 && v17 )
      break;
  }
  if ( i != *(_QWORD **)(v5 + 496) )
  {
    v26 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(i + 1, &v26) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v5 + 488, &v27, i);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v26);
  }
  v8 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 41);
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  if ( v10 )
  {
    v18 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v10 + 8);
    v27 = (__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))(v10 + 8);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v27);
    v28 = this;
    v29[0] = (__int64)v18;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v29);
    v19 = *(_QWORD **)(v9 + 496);
    if ( v19 == *(_QWORD **)(v9 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v9 + 488,
        v19,
        &v28);
    }
    else
    {
      *v19 = this;
      v21 = v19 + 1;
      *v21 = 0LL;
      if ( v21 != v29 )
      {
        *v21 = (__int64)v18;
        v29[0] = 0LL;
      }
      *(_QWORD *)(v9 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v29);
    v26 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v27, &v26) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, v9);
    v25 = 0LL;
    v20 = **v18;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v25);
    if ( v20(v18, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v25) >= 0 && *(_BYTE *)(v9 + 480) )
    {
      v22 = v25;
      v23 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(v9 + 48, v30);
      v23(v22, Transform);
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v27);
  }
  return 0LL;
}
