/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800D8370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800CF234 (WPP_SF_g.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800E4664 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // edi
  CAudioStream **v6; // r14
  CAudioStream **i; // rbx
  float v9; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0.0;
  v5 = 0;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, 0LL);
  }
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v6 = (CAudioStream **)*((_QWORD *)this + 15);
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
    for ( i = (CAudioStream **)*((_QWORD *)this + 14); i != v6; ++i )
    {
      if ( (int)CAudioStream::GetPeakValue(*i, &v9) >= 0 )
        v3 = fmaxf(v9, v3);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_g(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        v3);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1278, -2147467261);
  }
  return v5;
}
