/*
 * XREFs of IopSetIrpPriorityHintFromFileObject @ 0x140557078
 * Callers:
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 */

void __fastcall IopSetIrpPriorityHintFromFileObject(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // edx
  int IoPriorityThread; // eax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 && *(_DWORD *)(v3 + 80) )
  {
    *(_DWORD *)(v2 + 16) &= 0xFFF1FFFF;
    v4 = *(_DWORD *)(v3 + 80);
  }
  else
  {
    IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
    *(_DWORD *)(v2 + 16) &= 0xFFF1FFFF;
    v4 = IoPriorityThread + 1;
  }
  *(_DWORD *)(v2 + 16) |= v4 << 17;
}
