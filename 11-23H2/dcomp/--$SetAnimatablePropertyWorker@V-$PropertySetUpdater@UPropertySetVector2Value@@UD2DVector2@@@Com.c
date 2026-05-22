/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180148008
 * Callers:
 *     ??$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector2@@@Z @ 0x18000FA50 (--$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@.c)
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
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148DFC (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Co.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector2Value,D2DVector2>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  char v8; // r14
  gsl::details *v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rbx
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rax
  int v14; // xmm1_4
  int v15; // ebx
  __int64 v16; // rdx
  unsigned int v18; // edx
  int v19; // r8d
  char v20; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v21[15]; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  HSTRING v23[4]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v24[26]; // [rsp+80h] [rbp-59h] BYREF
  char v25; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)a2;
  if ( *v6 == *(_QWORD *)(v5 + 12) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    *v6 = *(_QWORD *)(v5 + 12);
  }
  v20 = 0;
  if ( Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
  {
    v11 = *(_QWORD *)(a2 + 8);
    hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(
      (HSTRING_HEADER *)v23,
      (const WCHAR **)&hstringHeader,
      v10);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v23);
    Windows::UI::Composition::AnimationValueData::AnimationValueData((__int64)v24, (__int64)v12);
    v13 = *(_QWORD *)this;
    v25 = v8;
    v24[0] = 35;
    v14 = *(_DWORD *)(v11 + 16);
    v24[10] = *(_DWORD *)(v11 + 12);
    v24[11] = v14;
    v15 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v13 + 224))(
            this,
            v24,
            &v20);
    if ( v15 < 0 )
    {
      v16 = 261LL;
LABEL_7:
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
    if ( *(_QWORD *)(a2 + 8) == -12LL )
    {
      gsl::details::terminate(v9);
      __debugbreak();
    }
    v18 = *(_DWORD *)(a3 + 8);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 8) + 12LL;
    hstringHeader.Reserved.Reserved1 = (PVOID)8;
    v15 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
            (__int64)this,
            v18,
            35,
            &hstringHeader,
            0xFFFFFFFF,
            (unsigned __int64)v21);
    if ( v15 < 0 )
    {
      v16 = 281LL;
      goto LABEL_7;
    }
    if ( v8 || v21[0] )
      Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector2Value,D2DVector2>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        (_DWORD)this,
        a2,
        v19,
        0,
        1,
        0);
  }
  return 0LL;
}
