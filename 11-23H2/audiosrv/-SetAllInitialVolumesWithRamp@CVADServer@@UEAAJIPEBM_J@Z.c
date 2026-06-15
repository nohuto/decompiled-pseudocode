/*
 * XREFs of ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x18011F350
 * Callers:
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x180124CB0 (AudioServerSetAllInitialVolumesWithRamp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800ED41C (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 */

__int64 __fastcall CVADServer::SetAllInitialVolumesWithRamp(CVADServer *this, int a2, float *a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  CAudioStream *v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids,
      this);
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v9 = (CAudioStream *)*((_QWORD *)this + 21);
  if ( !v9 || !*((_DWORD *)this + 40) )
  {
    v10 = -2004287487;
    v11 = 2245LL;
    goto LABEL_15;
  }
  if ( !*((_BYTE *)this + 176) )
  {
    v10 = -2147024809;
    v11 = 2247LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)v10;
  }
  v10 = CAudioStream::SetAllInitialStreamVolumes(v9, a2, a3, a4);
  if ( v10 < 0 )
  {
    v11 = 2249LL;
    goto LABEL_15;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
