/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800E0390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800E3AE8 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)this + 82),
      *((_DWORD *)this + 195));
  }
  *a2 = *((_DWORD *)this + 195);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
