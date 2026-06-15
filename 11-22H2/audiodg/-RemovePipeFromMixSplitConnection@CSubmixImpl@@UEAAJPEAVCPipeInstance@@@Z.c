/*
 * XREFs of ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007770
 * Callers:
 *     <none>
 * Callees:
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?RemovePipeFromRightSubmixMixSplitConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x140007A6C (-RemovePipeFromRightSubmixMixSplitConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::RemovePipeFromMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 MixSplitConnection_Internal; // rax
  int v9; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = CSubmixImpl::RemovePipeFromRightSubmixMixSplitConnection(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v5,
      v14);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
  else
  {
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal(v7, 0LL);
      v9 = CPipeInstance::UnresolvePendingConnections(a2, *(_QWORD *)(MixSplitConnection_Internal + 8));
      if ( v9 >= 0 )
        goto LABEL_4;
      v11 = 1204LL;
    }
    else
    {
      v12 = *((_QWORD *)this + 34);
      if ( !v12
        || (v13 = CPipeInstance::GetMixSplitConnection_Internal(v12, 0LL),
            v9 = CPipeInstance::UnresolvePendingConnections(a2, *(_QWORD *)(v13 + 8)),
            v9 >= 0) )
      {
LABEL_4:
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      v11 = 1210LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9,
      v14);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v9;
  }
}
