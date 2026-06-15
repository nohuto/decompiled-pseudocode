/*
 * XREFs of ?OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140025560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400528CC (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixConnected(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_OWORD *)&this[-2].LockSemaphore;
  EtwEventActivityIdControl(4LL, &v4);
  EnterCriticalSection(this - 3);
  ++LODWORD(this[1].DebugInfo);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
  }
  if ( this != (struct _RTL_CRITICAL_SECTION *)120 )
    LeaveCriticalSection(this - 3);
  EtwEventActivityIdControl(4LL, &v4);
  return 0LL;
}
