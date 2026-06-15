/*
 * XREFs of ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400689F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CB80 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?RemovePipeFromRightSubmixLoopbackConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x140068B14 (-RemovePipeFromRightSubmixLoopbackConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z.c)
 */

__int64 __fastcall CSubmixImpl::RemovePipeFromLoopbackConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  CPipeInstance *v8; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 MixSplitConnection_Internal; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = CSubmixImpl::RemovePipeFromRightSubmixLoopbackConnection(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D3,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v5);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
  v8 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    LoopbackConnection = CPipeInstance::GetLoopbackConnection(v8);
    v10 = CPipeInstance::UnresolvePendingConnections(a2, *((_QWORD *)LoopbackConnection + 1));
    if ( v10 < 0 )
    {
      v11 = 1243LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v10);
      if ( v2 )
        LeaveCriticalSection(v2);
      return (unsigned int)v10;
    }
  }
  else
  {
    v12 = *((_QWORD *)this + 34);
    if ( v12 )
    {
      MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal(v12, 0);
      v10 = CPipeInstance::UnresolvePendingConnections(a2, *(_QWORD *)(MixSplitConnection_Internal + 8));
      if ( v10 < 0 )
      {
        v11 = 1249LL;
        goto LABEL_8;
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
