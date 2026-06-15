/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140019A50
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140019590 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14001D110 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140059318 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005B6C0 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140062370 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400087D0 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14001C77C (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::ResolvePendingConnections(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rdi
  __int64 *v10; // rbx
  CConnectionInstance *v11; // rcx
  __int64 **v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 *v15; // rax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 256);
  while ( v8 )
  {
    v10 = (__int64 *)v8;
    v11 = *(CConnectionInstance **)(v8 + 16);
    v12 = (__int64 **)(v8 + 8);
    v8 = *(_QWORD *)(v8 + 8);
    if ( *((_QWORD *)v11 + 1) == a2 )
    {
      v13 = CConnectionInstance::SetHandle(v11, a3);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11DB,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v13,
          v16);
      if ( a4 == 1 )
      {
        v14 = *v10;
        if ( v10 == *(__int64 **)(a1 + 248) )
          *(_QWORD *)(a1 + 248) = v14;
        else
          **v12 = v14;
        v15 = *v12;
        if ( v10 == *(__int64 **)(a1 + 256) )
          *(_QWORD *)(a1 + 256) = v15;
        else
          *(_QWORD *)(*v10 + 8) = v15;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(a1 + 248, v10);
      }
    }
  }
  return 0LL;
}
