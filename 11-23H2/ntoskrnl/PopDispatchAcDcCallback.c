/*
 * XREFs of PopDispatchAcDcCallback @ 0x140994690
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140C3D96C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
