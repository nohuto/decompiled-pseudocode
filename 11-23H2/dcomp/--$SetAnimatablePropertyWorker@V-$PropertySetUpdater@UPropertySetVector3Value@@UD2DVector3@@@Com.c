/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180004FFC
 * Callers:
 *     ??$InsertProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector3@@@Z @ 0x180004A7C (--$InsertProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@.c)
 * Callees:
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180004F7C (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector3Value,D2DVector3>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v7; // r9
  unsigned __int64 v8; // rcx
  char v9; // r14
  gsl::details *v10; // rcx
  int v11; // edx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-B9h]
  char v21; // [rsp+30h] [rbp-A9h] BYREF
  char v22; // [rsp+31h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v24[32]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v25[11]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v26; // [rsp+ACh] [rbp-2Dh]
  char v27; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v5 = a2[1];
  v7 = (_QWORD *)*a2;
  v8 = *(_QWORD *)*a2 - *(_QWORD *)(v5 + 12);
  if ( !v8 )
    v8 = *((unsigned int *)v7 + 2) - (unsigned __int64)*(unsigned int *)(v5 + 20);
  if ( v8 )
  {
    v9 = 1;
    *v7 = *(_QWORD *)(v5 + 12);
    *((_DWORD *)v7 + 2) = *(_DWORD *)(v5 + 20);
  }
  else
  {
    v9 = 0;
  }
  v21 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_6;
  v15 = a2[1];
  hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v24, &hstringHeader);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)v24);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v25, v16);
  v27 = v9;
  v25[0] = 52;
  v17 = *(_DWORD *)(v15 + 20);
  hstringHeader.Reserved.Reserved1 = *(PVOID *)(v15 + 12);
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v17;
  v18 = *(_QWORD *)this;
  v25[10] = hstringHeader.Reserved.Reserved1;
  v26 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[4];
  v12 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v18 + 224))(
          this,
          v25,
          &v21);
  if ( v12 >= 0 )
  {
LABEL_6:
    if ( !v21 )
    {
      if ( a2[1] == -12LL )
      {
        gsl::details::terminate(v10);
        JUMPOUT(0x1800050F1LL);
      }
      v11 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2[1] + 12LL;
      hstringHeader.Reserved.Reserved1 = (PVOID)12;
      v12 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (_DWORD)this,
              v11,
              52,
              (unsigned int)&hstringHeader,
              0xFFFFFFFF,
              (bool)&v22);
      if ( v12 < 0 )
      {
        v19 = 281LL;
        goto LABEL_17;
      }
      if ( v9 || v22 )
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector3Value,D2DVector3>,Windows::UI::Composition::PropertySetUpdaterInfo>(
          (__int64)this,
          (__int64)a2,
          v13,
          0,
          1,
          0);
    }
    return 0LL;
  }
  v19 = 261LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v12,
    v20);
  return (unsigned int)v12;
}
