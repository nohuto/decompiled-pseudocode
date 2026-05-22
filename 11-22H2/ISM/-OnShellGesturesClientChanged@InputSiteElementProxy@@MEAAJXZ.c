/*
 * XREFs of ?OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?RUAttachedInputObjectEntry@InputSite@@@_lambda_7d522b53a5955c60a828757f528cefe4_@@QEBA?A_PAEBUAttachedInputObjectEntry@InputSite@@@Z @ 0x18001F9D0 (--$-RUAttachedInputObjectEntry@InputSite@@@_lambda_7d522b53a5955c60a828757f528cefe4_@@QEBA-A_PAE.c)
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

// Hidden C++ exception states: #wind=7
__int64 __fastcall InputSiteElementProxy::OnShellGesturesClientChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  __int64 *v14; // rdx
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64); // rsi
  __int64 Transform; // rax
  __int64 v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+28h] [rbp-41h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-29h] BYREF
  __int64 *i; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 41);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v20[0] = (__int64)this;
  v19 = 0LL;
  v6 = *(_QWORD *)(v5 + 496);
  v7 = *(_QWORD *)(v5 + 488);
  v21 = v20;
  for ( i = &v19; v7 != v6; v7 += 16LL )
  {
    if ( (unsigned __int8)_lambda_7d522b53a5955c60a828757f528cefe4_::operator()<InputSite::AttachedInputObjectEntry>(
                            &v21,
                            v7) )
      break;
  }
  if ( v7 != *(_QWORD *)(v5 + 496) )
  {
    v18 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(v7 + 8, &v18) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v5 + 488, &v21, v7);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v18);
  }
  v8 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 41);
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 264LL))((char *)this + 8);
  if ( v10 )
  {
    v12 = v10 + 8;
    v18 = v10 + 8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v18);
    v21 = (__int64 *)this;
    i = (__int64 *)v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&i);
    v13 = *(_QWORD **)(v9 + 496);
    if ( v13 == *(_QWORD **)(v9 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v9 + 488,
        v13,
        &v21);
    }
    else
    {
      *v13 = this;
      v14 = v13 + 1;
      *v14 = 0LL;
      if ( v14 != (__int64 *)&i )
      {
        *v14 = v12;
        i = 0LL;
      }
      *(_QWORD *)(v9 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&i);
    v20[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v18, v20) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20[0] + 24LL))(v20[0], v9);
    v19 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(&v18, &v19) >= 0
      && *(_BYTE *)(v9 + 480) )
    {
      v15 = v19;
      v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(v9 + 48, v23);
      v16(v15, Transform);
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
  }
  return 0LL;
}
