/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C000CAF4
 * Callers:
 *     NVMePowerInitialize @ 0x1C0009B20 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_BYTE *)(a1 + 867) = 0;
    memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 920) = v2;
    *(_DWORD *)(a1 + 856) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
    result = NVMeAllocateDmaBuffer(a1, 0x100u);
    if ( v5 )
    {
      NVMeZeroMemory(v5, 0x100u);
      *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4200LL) = v5;
      *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4208LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 952) + 4240LL) = 256;
      v4 = *(_QWORD *)(a1 + 952);
      *(_QWORD *)(v4 + 4120) = 0LL;
      *(_BYTE *)(v4 + 4096) = 10;
      *(_BYTE *)(v4 + 4136) = 12;
      *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeGetAutoPowerStateTransitionCompletion;
      ProcessCommand(a1, a1 + 864);
      WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
      return NVMeFreeDmaBuffer(a1, 256LL, (__int64 *)&v5, 0LL);
    }
  }
  return result;
}
