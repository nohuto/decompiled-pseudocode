/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180050B90
 * Callers:
 *     AudioServerSetAllVolumes @ 0x180050AB0 (AudioServerSetAllVolumes.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180050C58 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CAudioStream **this, unsigned int a2, const float *a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  CAudioStream *v9; // rcx
  int v10; // edi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, this);
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 24));
  v9 = this[21];
  if ( v9 && *((_DWORD *)this + 40) )
  {
    v10 = CAudioStream::SetAllStreamVolumes(v9, a2, a3, a4);
    if ( v10 >= 0 )
    {
      if ( v8 )
        LeaveCriticalSection(v8);
      return 0LL;
    }
    v12 = 2202LL;
  }
  else
  {
    v10 = -2004287487;
    v12 = 2201LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v10);
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v10;
}
