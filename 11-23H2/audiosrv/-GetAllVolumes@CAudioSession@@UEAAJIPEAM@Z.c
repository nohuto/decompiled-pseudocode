/*
 * XREFs of ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DF9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetAllVolumes(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbp
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = a2;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((const wchar_t **)this + 82));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( (_DWORD)v4 == *((_DWORD *)this + 222) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = 0LL;
      v8 = v4;
      do
      {
        a3[v7] = *(float *)(v7 * 4 + *((_QWORD *)this + 112));
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetAllVolumes", 1136, -2147024809);
  }
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  return v6;
}
