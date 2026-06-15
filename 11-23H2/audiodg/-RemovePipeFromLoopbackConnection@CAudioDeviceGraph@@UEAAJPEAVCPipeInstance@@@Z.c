/*
 * XREFs of ?RemovePipeFromLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x140005B60 (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CB80 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipeFromLoopbackConnection(CPipeInstance **this, struct IUnknown **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 31);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 31));
  LoopbackConnection = CPipeInstance::GetLoopbackConnection(this[18]);
  v6 = CAudioDeviceGraph::RemovePipeInternal((CAudioDeviceGraph *)(this - 2), a2, *((_QWORD *)LoopbackConnection + 1));
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54D,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
}
