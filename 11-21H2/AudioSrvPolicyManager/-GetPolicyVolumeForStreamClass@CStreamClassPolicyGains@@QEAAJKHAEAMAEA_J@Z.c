/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x180037904
 * Callers:
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18002EEF8 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 * Callees:
 *     pow @ 0x180003494 (pow.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        int a3,
        float *a4,
        __int64 *a5)
{
  __int64 v7; // rbp
  _QWORD *i; // rbx
  __int64 v10; // rbp
  float v11; // xmm0_4
  float v12; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a2;
  EnterCriticalSection(lpCriticalSection);
  *a4 = 1.0;
  *a5 = 0LL;
  if ( (unsigned int)v7 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147549183LL;
  }
  else
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[1].DebugInfo + 8 * v7 + (a3 != 0 ? 0xC0 : 0));
          i;
          i = (_QWORD *)*i )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      v11 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
      v12 = 0.0;
      if ( v11 != -INFINITY )
        v12 = pow(10.0, v11 / 20.0);
      if ( *a4 > v12 )
        *a4 = v12;
      if ( v10 > *a5 )
        *a5 = v10;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
}
