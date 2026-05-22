/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetColorValue@@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetColorValue@@U_D3DCOLORVALUE@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18006F854
 * Callers:
 *     ??$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBU_D3DCOLORVALUE@@@Z @ 0x18006F034 (--$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@U.c)
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

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetColorValue,_D3DCOLORVALUE>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  float *v5; // rcx
  char v8; // r14
  gsl::details *v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // ebx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v19[15]; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  HSTRING_HEADER v21; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v22[10]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-21h]
  char v24; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(float **)a2;
  if ( **(float **)a2 == *(float *)(v3 + 12)
    && v5[1] == *(float *)(v3 + 16)
    && v5[2] == *(float *)(v3 + 20)
    && v5[3] == *(float *)(v3 + 24) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    *(_OWORD *)v5 = *(_OWORD *)(v3 + 12);
  }
  v18 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_8;
  v14 = *(_QWORD *)(a2 + 8);
  hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)&hstringHeader, v10);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)&v21);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v22, v15);
  v16 = *(_QWORD *)this;
  v24 = v8;
  v22[0] = 70;
  v23 = *(_OWORD *)(v14 + 12);
  v12 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v16 + 224))(
          this,
          v22,
          &v18);
  if ( v12 >= 0 )
  {
LABEL_8:
    if ( !v18 )
    {
      if ( *(_QWORD *)(a2 + 8) == -12LL )
      {
        gsl::details::terminate(v9);
        __debugbreak();
      }
      v11 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 8) + 12LL;
      hstringHeader.Reserved.Reserved1 = (PVOID)16;
      v12 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (__int64)this,
              v11,
              70,
              &hstringHeader,
              0xFFFFFFFF,
              (unsigned __int64)v19);
      if ( v12 < 0 )
      {
        v17 = 281LL;
        goto LABEL_20;
      }
      if ( v8 || v19[0] )
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
          *((_DWORD *)this + 32),
          1,
          *(const void **)(a2 + 8),
          0x1CuLL);
    }
    return 0LL;
  }
  v17 = 261LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
