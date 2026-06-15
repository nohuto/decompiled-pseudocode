/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x18011DBE0
 * Callers:
 *     AudioServerGetChannelVolume @ 0x180120FE0 (AudioServerGetChannelVolume.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids,
      this,
      a2);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v7 = *((_QWORD *)this + 21);
  if ( v7 && *((_DWORD *)this + 40) )
  {
    if ( (unsigned int)v4 < *(_DWORD *)(v7 + 96) )
    {
      v8 = 0;
      *a3 = *(float *)(*(_QWORD *)(v7 + 120) + 4 * v4);
      goto LABEL_12;
    }
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    v8 = -2004287487;
  }
  AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelVolume", 2172, v8);
LABEL_12:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v8;
}
