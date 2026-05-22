/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180092FF8
 * Callers:
 *     ??$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEB_N@Z @ 0x180092B28 (--$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148C7C (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@U.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetBooleanValue,bool>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v4; // rcx
  char v7; // dl
  char v8; // r14
  gsl::details *v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // ebx
  int v13; // r8d
  __int64 v15; // rbx
  HSTRING_HEADER *v16; // rax
  __int64 v17; // rdx
  char v18; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v19[15]; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  HSTRING v21[4]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v22[10]; // [rsp+80h] [rbp-59h] BYREF
  char v23; // [rsp+A8h] [rbp-31h]
  char v24; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v4 = *(_BYTE **)a2;
  v7 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 12LL);
  if ( *v4 == v7 )
  {
    v8 = 0;
  }
  else
  {
    *v4 = v7;
    v8 = 1;
  }
  v18 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_4;
  v15 = *(_QWORD *)(a2 + 8);
  hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(
    (HSTRING_HEADER *)v21,
    (const WCHAR **)&hstringHeader,
    v10);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v21);
  Windows::UI::Composition::AnimationValueData::AnimationValueData((__int64)v22, (__int64)v16);
  v24 = v8;
  v22[0] = 17;
  v23 = *(_BYTE *)(v15 + 12);
  v12 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(*(_QWORD *)this + 224LL))(
          this,
          v22,
          &v18);
  if ( v12 >= 0 )
  {
LABEL_4:
    if ( !v18 )
    {
      if ( *(_QWORD *)(a2 + 8) == -12LL )
      {
        gsl::details::terminate(v9);
        JUMPOUT(0x1800930DCLL);
      }
      v11 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 8) + 12LL;
      hstringHeader.Reserved.Reserved1 = (PVOID)1;
      v12 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (__int64)this,
              v11,
              17,
              &hstringHeader,
              0xFFFFFFFF,
              (unsigned __int64)v19);
      if ( v12 < 0 )
      {
        v17 = 281LL;
        goto LABEL_15;
      }
      if ( v8 || v19[0] )
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetBooleanValue,bool>,Windows::UI::Composition::PropertySetUpdaterInfo>(
          (_DWORD)this,
          a2,
          v13,
          0,
          1,
          0);
    }
    return 0LL;
  }
  v17 = 261LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
