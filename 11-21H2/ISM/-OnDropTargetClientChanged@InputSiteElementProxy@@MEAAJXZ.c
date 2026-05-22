/*
 * XREFs of ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180009490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
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
__int64 __fastcall InputSiteElementProxy::OnDropTargetClientChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 i; // rbx
  InputSiteElementProxy *v9; // r12
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  bool v12; // al
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, __int64); // rsi
  __int64 Transform; // rax
  __int64 v22; // [rsp+20h] [rbp-49h] BYREF
  __int64 v23; // [rsp+28h] [rbp-41h] BYREF
  __int64 v24; // [rsp+30h] [rbp-39h] BYREF
  InputSiteElementProxy *v25; // [rsp+38h] [rbp-31h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v27[64]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 39);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x108,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  v23 = 0LL;
  v6 = *(_QWORD *)(v5 + 496);
  v7 = v5 + 488;
  for ( i = *(_QWORD *)(v5 + 488); i != v6; i += 16LL )
  {
    v9 = *(InputSiteElementProxy **)i;
    v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(i + 8);
    v11 = **v10;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v23);
    v12 = v11(v10, &GUID_2997278b_3edd_8da0_6daf_809840cbb7ae, &v23) >= 0;
    if ( v9 == this && v12 )
      break;
  }
  if ( i != *(_QWORD *)(v7 + 8) )
  {
    v22 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(i + 8, &v22) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v7, &v24, i);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v22);
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v23);
  v13 = *((_QWORD *)this + 39);
  v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 144LL))((char *)this + 8);
  if ( v14 )
  {
    v16 = v14 + 8;
    v22 = v14 + 8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v22);
    v25 = this;
    v26[0] = v16;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v26);
    v17 = *(_QWORD **)(v13 + 496);
    if ( v17 == *(_QWORD **)(v13 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v13 + 488,
        v17,
        &v25);
    }
    else
    {
      *v17 = this;
      v18 = v17 + 1;
      *v18 = 0LL;
      if ( v18 != v26 )
      {
        *v18 = v16;
        v26[0] = 0LL;
      }
      *(_QWORD *)(v13 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v26);
    v24 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v22, &v24) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, v13);
    v23 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(&v22, &v23) >= 0
      && *(_BYTE *)(v13 + 480) )
    {
      v19 = v23;
      v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(v13 + 48, v27);
      v20(v19, Transform);
    }
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v22);
  }
  return 0LL;
}
