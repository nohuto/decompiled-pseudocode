/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18000AA4C
 * Callers:
 *     ??$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector4@@@Z @ 0x18000A55C (--$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector4Value,D2DVector4>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  char v9; // r14
  gsl::details *v10; // rcx
  int v11; // edx
  int v12; // ebx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __m128 v17; // xmm1
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-A9h]
  char v20; // [rsp+30h] [rbp-99h] BYREF
  char v21; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v23[26]; // [rsp+60h] [rbp-69h] BYREF
  char v24; // [rsp+C8h] [rbp-1h]
  _BYTE v25[32]; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)a2;
  v8 = *v7 - *(_QWORD *)(v5 + 12);
  if ( *v7 == *(_QWORD *)(v5 + 12) )
    v8 = v7[1] - *(_QWORD *)(v5 + 20);
  if ( v8 )
  {
    v9 = 1;
    *(_OWORD *)v7 = *(_OWORD *)(v5 + 12);
  }
  else
  {
    v9 = 0;
  }
  v20 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_6;
  v14 = *(_QWORD *)(a2 + 8);
  hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v25, &hstringHeader);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)v25);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v23, v15);
  v16 = *(_QWORD *)this;
  v24 = v9;
  v23[0] = 69;
  v17 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 12));
  v23[10] = v17.m128_i32[0];
  v23[13] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  v23[12] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  v23[11] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  v12 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v16 + 224))(
          this,
          v23,
          &v20);
  if ( v12 >= 0 )
  {
LABEL_6:
    if ( !v20 )
    {
      if ( *(_QWORD *)(a2 + 8) == -12LL )
      {
        gsl::details::terminate(v10);
        JUMPOUT(0x18000AB79LL);
      }
      v11 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 8) + 12LL;
      hstringHeader.Reserved.Reserved1 = (PVOID)16;
      v12 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (_DWORD)this,
              v11,
              69,
              (unsigned int)&hstringHeader,
              0xFFFFFFFF,
              (bool)&v21);
      if ( v12 < 0 )
      {
        v18 = 281LL;
        goto LABEL_18;
      }
      if ( v9 || v21 )
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
          *((_DWORD *)this + 32),
          1u,
          *(const void **)(a2 + 8),
          0x1CuLL);
    }
    return 0LL;
  }
  v18 = 261LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v12,
    v19);
  return (unsigned int)v12;
}
