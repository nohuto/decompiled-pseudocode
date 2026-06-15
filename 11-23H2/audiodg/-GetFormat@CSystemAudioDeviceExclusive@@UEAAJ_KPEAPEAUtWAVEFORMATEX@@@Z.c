/*
 * XREFs of ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140057AF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1400380F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     WPP_SF_Ds @ 0x140055E88 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetFormat(
        CSystemAudioDeviceExclusive *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-20h] BYREF

  v9 = *(_OWORD *)((char *)this + 248);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v5 = *((_QWORD *)this + 29);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v6 = (*(__int64 (__fastcall **)(__int64, struct tWAVEFORMATEX **))(*(_QWORD *)v5 + 24LL))(v5, a3);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_980b67fa5e2e3abd99d2fcedd60d2ea4_Traceguids,
        v6,
        (__int64)"CSystemAudioDeviceExclusive::GetFormat");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::GetFormat", 0x1A4u, v6);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v6;
}
