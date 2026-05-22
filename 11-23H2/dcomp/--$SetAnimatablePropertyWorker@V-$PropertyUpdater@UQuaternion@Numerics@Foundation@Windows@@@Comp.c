/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180152DFC
 * Callers:
 *     ?SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18010BCD8 (-SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z.c)
 *     ?put_Orientation@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJUQuaternion@Numerics@Foundation@6@@Z @ 0x180181F00 (-put_Orientation@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJUQuaternion.c)
 *     ?put_Orientation@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUQuaternion@Numerics@Foundation@6@@Z @ 0x180193470 (-put_Orientation@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUQuaternion@Numeric.c)
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
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x18013EF3C (--$UpdateAnimatedPropertyWorker@V-$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Com.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Quaternion>,Windows::UI::Composition::PropertyUpdateInfo>(
        Windows::UI::Composition::CompositionObject *this,
        _QWORD *a2,
        PVOID **a3)
{
  _QWORD *v5; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  char v9; // r14
  unsigned int v10; // r8d
  __int128 *v11; // rbx
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  PVOID *v17; // rcx
  unsigned int v18; // edx
  char v19; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v20[15]; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  HSTRING v22[4]; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v23[10]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-21h]
  char v25; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = (_QWORD *)a2[1];
  v7 = (_QWORD *)*a2;
  v8 = *(_QWORD *)*a2 - *v5;
  if ( !v8 )
    v8 = v7[1] - v5[1];
  if ( v8 )
  {
    v9 = 1;
    *(_OWORD *)v7 = *(_OWORD *)v5;
  }
  else
  {
    v9 = 0;
  }
  v19 = 0;
  if ( Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
  {
    v11 = (__int128 *)a2[2];
    hstringHeader.Reserved.Reserved1 = **a3;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(
      (HSTRING_HEADER *)v22,
      (const WCHAR **)&hstringHeader,
      v10);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v22);
    Windows::UI::Composition::AnimationValueData::AnimationValueData((__int64)v23, (__int64)v12);
    v13 = *(_QWORD *)this;
    v25 = v9;
    v23[0] = 71;
    v24 = *v11;
    v14 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v13 + 224))(
            this,
            v23,
            &v19);
    if ( v14 < 0 )
    {
      v15 = 261LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
  }
  if ( !v19 )
  {
    v17 = *a3;
    v18 = *((_DWORD *)*a3 + 3);
    if ( !a2[1] )
    {
      gsl::details::terminate((gsl::details *)v17);
      __debugbreak();
    }
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2[1];
    hstringHeader.Reserved.Reserved1 = (PVOID)16;
    v14 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
            (__int64)this,
            *((_DWORD *)v17 + 2),
            71,
            &hstringHeader,
            v18,
            (unsigned __int64)v20);
    if ( v14 < 0 )
    {
      v15 = 281LL;
      goto LABEL_9;
    }
    if ( v9 || v20[0] )
      Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Quaternion>,Windows::UI::Composition::PropertyUpdateInfo>(
        (__int64)this,
        (__int64)a2,
        (__int64 *)a3);
  }
  return 0LL;
}
