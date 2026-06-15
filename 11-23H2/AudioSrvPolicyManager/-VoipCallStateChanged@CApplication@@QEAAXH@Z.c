/*
 * XREFs of ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18002AD14
 * Callers:
 *     ?ClearVoipCallState@CProcess@@QEAAXXZ @ 0x180026430 (-ClearVoipCallState@CProcess@@QEAAXXZ.c)
 *     ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18002DC70 (-OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_ @ 0x18001F1CC (WPP_SF_.c)
 *     WPP_SF_dd @ 0x18002BBE4 (WPP_SF_dd.c)
 */

void __fastcall CApplication::VoipCallStateChanged(CApplication *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r8
  PVOID *v6; // rcx
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = a2 + *((_DWORD *)this + 169);
  v8 = v2;
  *((_DWORD *)this + 169) = v5;
  v6 = (PVOID *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, v5, a2, v5);
    v6 = (PVOID *)WPP_GLOBAL_Control;
  }
  v7 = *((_DWORD *)this + 169);
  if ( v7 >= 0 )
  {
    if ( v7 > 0 )
    {
      *((_DWORD *)this + 52) |= 0x10u;
      goto LABEL_12;
    }
  }
  else
  {
    if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x40000000) != 0 && *((_BYTE *)v6 + 25) >= 2u )
      WPP_SF_((TRACEHANDLE)v6[2], 0x22u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
    *((_DWORD *)this + 169) = 0;
  }
  *((_DWORD *)this + 52) &= ~0x10u;
LABEL_12:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
}
