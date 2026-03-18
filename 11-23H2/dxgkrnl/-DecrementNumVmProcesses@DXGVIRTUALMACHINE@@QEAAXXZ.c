/*
 * XREFs of ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0343828
 * Callers:
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00565C8 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVIRTUALMACHINE::DecrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this);
}
