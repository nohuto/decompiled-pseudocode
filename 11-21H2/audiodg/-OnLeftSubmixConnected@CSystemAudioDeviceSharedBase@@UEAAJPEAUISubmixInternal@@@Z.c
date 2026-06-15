/*
 * XREFs of ?OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14002BD80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixConnected(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  __int64 v3; // r9
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = *(_OWORD *)&this[-2].LockSemaphore;
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  EnterCriticalSection(this - 3);
  v3 = (unsigned int)(LODWORD(this[1].DebugInfo) + 1);
  v5 = this - 3;
  LODWORD(this[1].DebugInfo) = v3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids, v3);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v5);
  EtwEventActivityIdControl(4LL, &v7);
  return 0LL;
}
