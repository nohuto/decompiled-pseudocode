/*
 * XREFs of ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800E8030
 * Callers:
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800E8780 (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@XZ @ 0x1800E74D0 (--$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA-A.c)
 *     ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E8AC0 (-RelativePointToScreen@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18013F688 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
struct tagPOINT __fastcall InjectionRawInputProvider::GetWorkspaceRelativeCoordinates(
        InjectionRawInputProvider *this,
        struct tagPOINT a2,
        struct InputInjectionClientProxy *a3,
        __int64 a4)
{
  int v5; // ebx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 Transform; // rax
  float *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-A8h]
  __int64 v15; // [rsp+28h] [rbp-A0h] BYREF
  struct InputInjectionClientProxy *v16; // [rsp+30h] [rbp-98h]
  unsigned __int64 v17; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-78h] BYREF

  v5 = (int)a3;
  v16 = a3;
  **(_QWORD **)&a2 = a3;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v8 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
  v9 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
  while ( v8 != v9 )
  {
    InputSite::GetAttachedObject<IInputInjectionClientProxy,InputInjectionClientProxy>(*v8, &v15);
    v10 = v15;
    if ( v15 && v15 == a4 )
    {
      if ( !*(_BYTE *)(*v8 + 480) )
        std::_Throw_bad_optional_access();
      Transform = LegacyInputSinkData::GetTransform(*v8 + 48, v19);
      v17 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v5), (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v16))).m128_u64[0];
      v12 = (float *)CInputTransform::RelativePointToScreen(v18, &v17, Transform);
      LODWORD(v14) = (int)*v12;
      HIDWORD(v14) = (int)v12[1];
      **(_QWORD **)&a2 = v14;
    }
    if ( v10 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    ++v8;
  }
  return a2;
}
