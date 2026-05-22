/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x1800B5A6C
 * Callers:
 *     ?put_RelativeOffsetAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x1800B5F00 (-put_RelativeOffsetAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateApiValue@?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBA_NXZ @ 0x1800B5D28 (-UpdateApiValue@-$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Compositio.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x18010AB9C (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@V.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector3,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>,Windows::UI::Composition::PropertyUpdateInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        PVOID **a3)
{
  char updated; // r12
  unsigned int v7; // r8d
  __int64 *v8; // rbx
  HSTRING_HEADER *v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  PVOID *v13; // rcx
  unsigned int v14; // edx
  char v15; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v16[15]; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  HSTRING v18[4]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v19[10]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-31h]
  int v21; // [rsp+B0h] [rbp-29h]
  char v22; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v15 = 0;
  updated = Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector3,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>::UpdateApiValue(a2);
  if ( Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
  {
    v8 = *(__int64 **)(a2 + 40);
    hstringHeader.Reserved.Reserved1 = **a3;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(
      (HSTRING_HEADER *)v18,
      (const WCHAR **)&hstringHeader,
      v7);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v18);
    Windows::UI::Composition::AnimationValueData::AnimationValueData((__int64)v19, (__int64)v9);
    v22 = updated;
    v19[0] = 52;
    v20 = *v8;
    v21 = *((_DWORD *)v8 + 2);
    v10 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(*(_QWORD *)this + 224LL))(
            this,
            v19,
            &v15);
    if ( v10 < 0 )
    {
      v11 = 261LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  if ( !v15 )
  {
    v13 = *a3;
    v14 = *((_DWORD *)*a3 + 3);
    if ( !*(_QWORD *)(a2 + 40) )
    {
      gsl::details::terminate((gsl::details *)v13);
      __debugbreak();
    }
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 40);
    hstringHeader.Reserved.Reserved1 = (PVOID)12;
    v10 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
            (__int64)this,
            *((_DWORD *)v13 + 2),
            52,
            &hstringHeader,
            v14,
            (unsigned __int64)v16);
    if ( v10 < 0 )
    {
      v11 = 281LL;
      goto LABEL_4;
    }
    if ( updated || v16[0] )
      Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector3,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>,Windows::UI::Composition::PropertyUpdateInfo>(
        (_DWORD)this,
        a2,
        (_DWORD)a3,
        0,
        1,
        0);
  }
  return 0LL;
}
