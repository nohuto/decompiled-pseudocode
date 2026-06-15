/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400084E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140008790 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14000C530 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C1C4 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 MixSplitConnection_Internal; // rax
  int v7; // esi
  const struct CConnectionInstance *SecondaryLoopbackConnection; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  const struct CPipeInstance *v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal(v5, 0LL);
    v7 = CPipeInstance::ResolvePendingConnections(
           a2,
           -1LL,
           *(_QWORD *)(MixSplitConnection_Internal + 8),
           g_UseNewStreamManagementCodePath == 0);
    if ( v7 < 0 )
    {
      v12 = 1128LL;
      goto LABEL_11;
    }
    SecondaryLoopbackConnection = CPipeInstance::GetSecondaryLoopbackConnection(*((CPipeInstance **)this + 3));
    if ( SecondaryLoopbackConnection )
    {
      v7 = CPipeInstance::ResolvePendingConnections(
             a2,
             -2LL,
             *((_QWORD *)SecondaryLoopbackConnection + 1),
             g_UseNewStreamManagementCodePath == 0);
      if ( v7 < 0 )
      {
        v12 = 1134LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v7,
          v14);
        if ( v2 )
          LeaveCriticalSection(v2);
        return (unsigned int)v7;
      }
    }
  }
  else
  {
    v13 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
    if ( v13 )
    {
      v7 = CPipeInstance::ConnectToRightPipe(a2, v13);
      if ( v7 < 0 )
      {
        v12 = 1139LL;
        goto LABEL_11;
      }
    }
  }
  v9 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x476,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9,
      v14);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v10;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
