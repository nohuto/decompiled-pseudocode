/*
 * XREFs of ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400671D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140008790 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C174 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CB80 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToLoopbackConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  CPipeInstance *v5; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v7; // esi
  __int64 v8; // rdx
  const struct CPipeInstance *v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    LoopbackConnection = CPipeInstance::GetLoopbackConnection(v5);
    if ( g_UseNewStreamManagementCodePath )
    {
      v7 = CPipeInstance::ResolvePendingConnections((__int64)a2, -1LL, *((_QWORD *)LoopbackConnection + 1), 0);
      if ( v7 < 0 )
      {
        v8 = 1160LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v7);
        if ( v2 )
          LeaveCriticalSection(v2);
        return (unsigned int)v7;
      }
    }
    else
    {
      v7 = CPipeInstance::ResolvePendingConnections((__int64)a2, *((_QWORD *)LoopbackConnection + 1), 1uLL, 0);
      if ( v7 < 0 )
      {
        v8 = 1164LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v10 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
    if ( v10 )
    {
      v7 = CPipeInstance::ConnectToRightPipe(a2, v10);
      if ( v7 < 0 )
      {
        v8 = 1169LL;
        goto LABEL_5;
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x494,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v11);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v12;
  }
}
