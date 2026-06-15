/*
 * XREFs of ?RemovePipeFromMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x140005B60 (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipeFromMixSplitConnection(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 MixSplitConnection_Internal; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal(*((_QWORD *)this + 18), 0LL);
  v6 = CAudioDeviceGraph::RemovePipeInternal(
         (CAudioDeviceGraph *)((char *)this - 16),
         a2,
         *(_QWORD *)(MixSplitConnection_Internal + 8));
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x540,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6,
      v9);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
