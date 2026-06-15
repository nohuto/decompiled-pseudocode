/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140008790
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400084E0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400085F0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIStreamInstance@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002E450 (-CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTO.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C174 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005EF60 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400671D0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140008824 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000D684 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::ResolvePendingConnections(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 *v8; // rdi
  int v9; // eax
  __int64 *v10; // rbx
  CConnectionInstance *v11; // rcx
  _QWORD **v12; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = *(__int64 **)(a1 + 256);
  while ( v8 )
  {
    v10 = v8;
    v11 = (CConnectionInstance *)v8[2];
    v12 = (_QWORD **)(v8 + 1);
    v8 = (__int64 *)v8[1];
    if ( *((_QWORD *)v11 + 1) == a2 )
    {
      v9 = CConnectionInstance::SetHandle(v11, a3);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11F9,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v9,
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
