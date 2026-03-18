/*
 * XREFs of ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C01FC5AC
 * Callers:
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C01FC130 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0309F70 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C03349D8 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C035DEEC (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 68) = 0;
  result = a1;
  *(_DWORD *)(a1 + 48) = a2;
  return result;
}
