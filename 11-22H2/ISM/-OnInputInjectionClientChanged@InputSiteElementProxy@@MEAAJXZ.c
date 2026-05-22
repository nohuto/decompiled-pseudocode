/*
 * XREFs of ?OnInputInjectionClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025054 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x1800270E0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ??$As@UIInputSiteTransformClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180052608 (--$As@UIInputSiteTransformClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18014D738 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18014E628 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall InputSiteElementProxy::OnInputInjectionClientChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 i; // rbx
  InputSiteElementProxy *v8; // r13
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r12
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rax
  __int64 v11; // rcx
  int v12; // eax
  bool v13; // al
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rbx
  void (__fastcall *v22)(__int64, __int64); // rdi
  __int64 Transform; // rax
  __int64 v24; // [rsp+20h] [rbp-49h] BYREF
  __int64 v25; // [rsp+28h] [rbp-41h] BYREF
  __int64 (__fastcall *v26)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  InputSiteElementProxy *v27; // [rsp+38h] [rbp-31h] BYREF
  __int64 v28[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v29[64]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 41);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v24 = 0LL;
  v6 = *(_QWORD *)(v5 + 496);
  for ( i = *(_QWORD *)(v5 + 488); i != v6; i += 16LL )
  {
    v8 = *(InputSiteElementProxy **)i;
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(i + 8);
    v10 = **v9;
    v26 = v10;
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = v26(v9, &GUID_1abe38ad_aa41_f018_ceab_ff5a56c3ae8f, &v24);
    }
    else
    {
      v12 = v10(v9, &GUID_1abe38ad_aa41_f018_ceab_ff5a56c3ae8f, &v24);
    }
    v13 = v12 >= 0;
    if ( v8 == this && v13 )
      break;
  }
  if ( i != *(_QWORD *)(v5 + 496) )
  {
    v25 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(i + 8, &v25) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v5 + 488, &v26, i);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v25);
  }
  v14 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 41);
  v16 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 200LL))((char *)this + 8);
  if ( v16 )
  {
    v18 = v16 + 8;
    v24 = v16 + 8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v24);
    v27 = this;
    v28[0] = v18;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v28);
    v19 = *(_QWORD **)(v15 + 496);
    if ( v19 == *(_QWORD **)(v15 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v15 + 488,
        v19,
        &v27);
    }
    else
    {
      *v19 = this;
      v20 = v19 + 1;
      *v20 = 0LL;
      if ( v20 != v28 )
      {
        *v20 = v18;
        v28[0] = 0LL;
      }
      *(_QWORD *)(v15 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v28);
    v26 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v24, &v26) >= 0 )
      (*(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, GUID *, __int64 *), __int64))(*(_QWORD *)v26 + 24LL))(
        v26,
        v15);
    v25 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(&v24, &v25) >= 0
      && *(_BYTE *)(v15 + 480) )
    {
      v21 = v25;
      v22 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(v15 + 48, v29);
      v22(v21, Transform);
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v24);
  }
  return 0LL;
}
