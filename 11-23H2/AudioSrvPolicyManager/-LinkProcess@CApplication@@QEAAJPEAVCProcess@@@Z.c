/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180027A68
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E76C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x1800254CC (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x180025870 (-AddHead@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180026B24 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180028974 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // r14
  CApplication *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // r8d
  int v6; // r11d
  _DWORD *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r9
  _DWORD *v10; // r10
  __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // eax
  __int64 result; // rax
  int *v15; // rbx
  ATL::CAtlException *v16; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+78h] [rbp+20h] BYREF

  v19 = a2;
  v2 = a2;
  v3 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v21 = v4;
  *((_DWORD *)v3 + 162) = *((_DWORD *)v2 + 105);
  v5 = *((_DWORD *)v2 + 106);
  *((_DWORD *)v3 + 163) = v5;
  *((_BYTE *)v3 + 720) = *((_BYTE *)v2 + 786);
  v6 = *((_DWORD *)v3 + 164) | *((_DWORD *)v2 + 111);
  *((_DWORD *)v3 + 164) = v6;
  v7 = (_DWORD *)((char *)v3 + 208);
  v8 = (_DWORD *)((char *)v3 + 216);
  v9 = (_DWORD *)((char *)v3 + 324);
  v10 = (_DWORD *)((char *)v3 + 328);
  if ( !v5 )
  {
    *v7 |= 1u;
    *v8 = 2;
    *v9 = 2;
    *v10 = 2;
  }
  if ( v6 )
  {
    *v7 |= 0x40u;
    *v8 = 2;
    *v9 = 2;
    *v10 = 2;
    *(_QWORD *)((char *)v3 + 620) = 0LL;
    *(_QWORD *)((char *)v3 + 628) = 0LL;
    *(_QWORD *)((char *)v3 + 636) = 0LL;
    *((_DWORD *)v3 + 161) = 1;
  }
  if ( !(unsigned int)CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 171) = 1;
  try
  {
    v12 = 0;
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead((__int64 *)v3 + 9, (__int64)&v19, v11);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v15 = (int *)v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v20 = *v15;
    v12 = v20;
    if ( v20 >= 0 )
    {
      v3 = this;
      v2 = v19;
      goto LABEL_9;
    }
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v20);
    }
    AudPolicyLogError("CApplication::LinkProcess", 284, v12);
LABEL_17:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
    result = v12;
  }
LABEL_9:
  v13 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      276LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v13);
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::operator=((__int64 *)v2 + 28, (volatile int *)v3);
  goto LABEL_17;
}
