/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180051D10
 * Callers:
 *     AudioServerGetAllVolumes @ 0x180051C40 (AudioServerGetAllVolumes.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, this);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v7 = *((_QWORD *)this + 21);
  if ( !v7 || !*((_DWORD *)this + 40) )
  {
    v10 = -2004287487;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 2291, v10);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 != *(_DWORD *)(v7 + 96) )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    goto LABEL_17;
  }
  if ( (_DWORD)v4 )
  {
    v8 = 0LL;
    v9 = v4;
    do
    {
      a3[v8] = *(float *)(v8 * 4 + *(_QWORD *)(v7 + 120));
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  v10 = 0;
LABEL_10:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
