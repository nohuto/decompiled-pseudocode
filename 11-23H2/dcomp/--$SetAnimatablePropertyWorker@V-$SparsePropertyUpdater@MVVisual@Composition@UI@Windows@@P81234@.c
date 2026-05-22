/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006D4D4
 * Callers:
 *     ??$SetAnimatableSparseProperty@VVisual@Composition@UI@Windows@@MP81234@EBAMXZP81234@EAAXM@Z@ProxyObject@Composition@UI@Windows@@IEAAJPEAVVisual@123@AEBMP84123@EBAMXZP84123@EAAXM@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18006D484 (--$SetAnimatableSparseProperty@VVisual@Composition@UI@Windows@@MP81234@EBAMXZP81234@EAAXM@Z@Prox.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?UpdateApiValue@?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@QEBA_NXZ @ 0x18006D378 (-UpdateApiValue@-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAA.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072534 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>,Windows::UI::Composition::PropertyUpdateInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        PVOID **a3)
{
  char updated; // r12
  unsigned int v7; // r8d
  PVOID *v8; // rcx
  unsigned int v9; // edx
  int v10; // ebx
  _DWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v17[15]; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  HSTRING_HEADER v19; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v20[26]; // [rsp+80h] [rbp-59h] BYREF
  char v21; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v16 = 0;
  updated = Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>::UpdateApiValue(a2);
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_2;
  v12 = *(_DWORD **)(a2 + 40);
  hstringHeader.Reserved.Reserved1 = **a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, (const WCHAR **)&hstringHeader, v7);
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)&v19);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v20, v13);
  v14 = *(_QWORD *)this;
  v21 = updated;
  v20[0] = 18;
  v20[10] = *v12;
  v10 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v14 + 224))(
          this,
          v20,
          &v16);
  if ( v10 >= 0 )
  {
LABEL_2:
    if ( !v16 )
    {
      v8 = *a3;
      v9 = *((_DWORD *)*a3 + 3);
      if ( !*(_QWORD *)(a2 + 40) )
      {
        gsl::details::terminate((gsl::details *)v8);
        JUMPOUT(0x18006D5D9LL);
      }
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 40);
      hstringHeader.Reserved.Reserved1 = (PVOID)4;
      v10 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (__int64)this,
              *((_DWORD *)v8 + 2),
              18,
              &hstringHeader,
              v9,
              (unsigned __int64)v17);
      if ( v10 < 0 )
      {
        v15 = 281LL;
        goto LABEL_13;
      }
      if ( updated || v17[0] )
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>,Windows::UI::Composition::PropertyUpdateInfo>(
          (_DWORD)this,
          a2,
          (_DWORD)a3,
          0,
          1,
          0);
    }
    return 0LL;
  }
  v15 = 261LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
