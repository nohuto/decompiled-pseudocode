/*
 * XREFs of ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4
 * Callers:
 *     ?RemovePipeFromMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005AE0 (-RemovePipeFromMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140007160 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007770 (-RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400084E0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400131E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?GetMixSplitConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14004A294 (-GetMixSplitConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C1C4 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CBD0 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140068A40 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEBAAEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@XZ @ 0x14000EAE0 (-GetHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x14000FED8 (-GetHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140025E00 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 */

__int64 __fastcall CPipeInstance::GetMixSplitConnection_Internal(__int64 a1, int a2)
{
  _QWORD *Head; // rax
  __int64 Tail; // rax

  Head = (_QWORD *)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetHead(a1 + 64);
  if ( *(_QWORD *)(*Head + 16LL) == 2LL && a2 == 1 )
    Tail = ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*Head);
  else
    Tail = ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetHead();
  return *(_QWORD *)Tail;
}
