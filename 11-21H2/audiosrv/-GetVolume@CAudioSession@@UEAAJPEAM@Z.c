/*
 * XREFs of ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180010270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     WPP_SF_Sg @ 0x1800DB6DC (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetVolume(CAudioSession *this, float *a2)
{
  char *v2; // rbx
  int v5; // r8d
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 736;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v7 = v2;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15,
      v5,
      *((_QWORD *)this + 82),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this + 194)));
  }
  *a2 = *((float *)this + 194);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v7);
  return 0LL;
}
