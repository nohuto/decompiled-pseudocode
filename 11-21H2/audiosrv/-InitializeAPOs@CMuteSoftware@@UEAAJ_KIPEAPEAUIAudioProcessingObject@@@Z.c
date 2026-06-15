/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800CA220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CB3E0 (WPP_SF_qD.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_c3ad8c7f2ffb3e627dd5155130aa6484_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v7 = 0;
  if ( a3 )
  {
    do
    {
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 6);
      if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
             (char *)this + 48) >= 0
        && *((_QWORD *)this + 6) )
      {
        break;
      }
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
    v9 = *((_QWORD *)this + 6);
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_c3ad8c7f2ffb3e627dd5155130aa6484_Traceguids);
      }
      v7 = -2147467262;
LABEL_20:
      AudSrvTraceLoggingErrorHelper("CMuteSoftware::InitializeAPOs", 915, v7);
      goto LABEL_21;
    }
    v10 = *((_DWORD *)this + 6) == 0;
    v14 = 50000LL;
    LOBYTE(v8) = !v10;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
            v9,
            v8,
            0LL,
            1LL,
            &v14);
    v7 = v11;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_c3ad8c7f2ffb3e627dd5155130aa6484_Traceguids, this, v11);
    }
    if ( v7 < 0 )
      goto LABEL_20;
  }
LABEL_21:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return (unsigned int)v7;
}
