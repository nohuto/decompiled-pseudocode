/*
 * XREFs of ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C174
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140007C50 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400084E0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001E5F0 (-ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400671D0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x140067328 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 */

__int64 __fastcall CPipeInstance::ConnectToRightPipe(CPipeInstance *this, const struct CPipeInstance *a2)
{
  __int64 MixSplitConnection_Internal; // rax

  MixSplitConnection_Internal = CPipeInstance::GetMixSplitConnection_Internal((__int64)a2, 0);
  return CPipeInstance::ResolvePendingConnections(
           (__int64)this,
           -(__int64)(*((_BYTE *)this + 318) != 0) - 1,
           *(_QWORD *)(MixSplitConnection_Internal + 8),
           0);
}
