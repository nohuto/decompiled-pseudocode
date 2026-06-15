/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x18000DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, this);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v7 = *((_QWORD *)this + 24);
  if ( !v7 || !*((_DWORD *)this + 46) )
  {
    v10 = -2004287487;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 0x939u, v10);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 != *(_DWORD *)(v7 + 84) )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x303,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v12);
    goto LABEL_17;
  }
  if ( (_DWORD)v4 )
  {
    v8 = 0LL;
    v9 = v4;
    do
    {
      a3[v8] = *(float *)(v8 * 4 + *(_QWORD *)(v7 + 104));
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
