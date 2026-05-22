/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180147E20
 * Callers:
 *     ??$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DQuaternion@@@Z @ 0x180147C80 (--$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Compositi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180094898 (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Co.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetQuaternionValue,D2DQuaternion>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        float **a2,
        __int64 a3)
{
  float *v3; // rax
  float *v5; // rcx
  char v8; // r14
  gsl::details *v9; // rcx
  unsigned int v10; // r8d
  float *v11; // rbx
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rax
  __m128 v14; // xmm1
  int v15; // ebx
  __int64 v16; // rdx
  unsigned int v18; // edx
  __int64 v19; // r8
  char v20; // [rsp+30h] [rbp-A9h] BYREF
  char v21[15]; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  _DWORD v23[26]; // [rsp+60h] [rbp-79h] BYREF
  char v24; // [rsp+C8h] [rbp-11h]
  HSTRING v25[4]; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v3 = a2[1];
  v5 = *a2;
  if ( **a2 == v3[3] && v5[1] == v3[4] && v5[2] == v3[5] && v5[3] == v3[6] )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    *(_OWORD *)v5 = *(_OWORD *)(v3 + 3);
  }
  v20 = 0;
  if ( Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
  {
    v11 = a2[1];
    hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(
      (HSTRING_HEADER *)v25,
      (const WCHAR **)&hstringHeader,
      v10);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v25);
    Windows::UI::Composition::AnimationValueData::AnimationValueData((__int64)v23, (__int64)v12);
    v13 = *(_QWORD *)this;
    v24 = v8;
    v23[0] = 71;
    v14 = (__m128)_mm_loadu_si128((const __m128i *)(v11 + 3));
    v23[10] = v14.m128_i32[0];
    v23[13] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
    v23[12] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
    v23[11] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    v15 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v13 + 224))(
            this,
            v23,
            &v20);
    if ( v15 < 0 )
    {
      v16 = 261LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
        (const char *)(unsigned int)v15);
      return (unsigned int)v15;
    }
  }
  if ( !v20 )
  {
    if ( a2[1] == (float *)-12LL )
    {
      gsl::details::terminate(v9);
      __debugbreak();
    }
    v18 = *(_DWORD *)(a3 + 8);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2[1] + 3;
    hstringHeader.Reserved.Reserved1 = (PVOID)16;
    v15 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
            (__int64)this,
            v18,
            71,
            &hstringHeader,
            0xFFFFFFFF,
            (unsigned __int64)v21);
    if ( v15 < 0 )
    {
      v16 = 281LL;
      goto LABEL_10;
    }
    if ( v8 || v21[0] )
      Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector4Value,D2DVector4>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        (__int64)this,
        (__int64)a2,
        v19,
        0,
        1,
        0);
  }
  return 0LL;
}
