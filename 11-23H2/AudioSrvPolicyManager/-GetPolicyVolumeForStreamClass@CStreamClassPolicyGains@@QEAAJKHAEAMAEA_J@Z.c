/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x18003EFA0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800321D8 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18002C8E4 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        int a3,
        float *a4,
        __int64 *a5)
{
  __int64 v7; // rbp
  __int64 *v9; // rsi
  _QWORD *i; // rbx
  __int64 v11; // rdi
  float v12; // xmm0_4
  float v13; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  EnterCriticalSection(this);
  v16 = this;
  *a4 = 1.0;
  v9 = a5;
  *a5 = 0LL;
  if ( (unsigned int)v7 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    return 2147549183LL;
  }
  else
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&this[1].DebugInfo + 8 * v7 + (a3 != 0 ? 0xC0 : 0));
          i;
          i = (_QWORD *)*i )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      v12 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
      v13 = ConvertDbToEngineVolume(v12);
      if ( *a4 > v13 )
        *a4 = v13;
      if ( v11 > *v9 )
        *v9 = v11;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    return 0LL;
  }
}
