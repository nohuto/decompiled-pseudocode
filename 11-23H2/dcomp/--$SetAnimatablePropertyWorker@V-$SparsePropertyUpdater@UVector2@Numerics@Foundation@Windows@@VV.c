/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC
 * Callers:
 *     ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0 (-EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98 (-EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015F88 (-EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?put_RelativeSizeAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006DCA0 (-put_RelativeSizeAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180071A38 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@V.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        PVOID **a3)
{
  _QWORD *v6; // rdx
  char v7; // r14
  unsigned int v8; // r8d
  PVOID *v9; // rcx
  unsigned int v10; // edx
  int v11; // ebx
  _DWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v18[15]; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  HSTRING_HEADER v20; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v21[26]; // [rsp+80h] [rbp-59h] BYREF
  char v22; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, HSTRING_HEADER *))(a2 + 8))(*(_QWORD *)a2 + *(int *)(a2 + 16), &hstringHeader);
  v6 = *(_QWORD **)(a2 + 40);
  if ( hstringHeader.Reserved.Reserved1 == (PVOID)*v6 )
  {
    v7 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(a2 + 24))(*(_QWORD *)a2 + *(int *)(a2 + 32), *v6);
    v7 = 1;
  }
  v17 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_4;
  v13 = *(_DWORD **)(a2 + 40);
  hstringHeader.Reserved.Reserved1 = **a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)&hstringHeader, v8);
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)&v20);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v21, v14);
  v15 = *(_QWORD *)this;
  v22 = v7;
  v21[0] = 35;
  v21[10] = *v13;
  v21[11] = v13[1];
  v11 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v15 + 224))(
          this,
          v21,
          &v17);
  if ( v11 >= 0 )
  {
LABEL_4:
    if ( !v17 )
    {
      v9 = *a3;
      v10 = *((_DWORD *)*a3 + 3);
      if ( !*(_QWORD *)(a2 + 40) )
      {
        gsl::details::terminate((gsl::details *)v9);
        __debugbreak();
      }
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 40);
      hstringHeader.Reserved.Reserved1 = (PVOID)8;
      v11 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (__int64)this,
              *((_DWORD *)v9 + 2),
              35,
              &hstringHeader,
              v10,
              (unsigned __int64)v18);
      if ( v11 < 0 )
      {
        v16 = 281LL;
        goto LABEL_17;
      }
      if ( v7 || v18[0] )
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(
          (_DWORD)this,
          a2,
          (_DWORD)a3,
          0,
          1,
          0);
    }
    return 0LL;
  }
  v16 = 261LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
