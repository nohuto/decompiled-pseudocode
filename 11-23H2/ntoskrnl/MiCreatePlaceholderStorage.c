/*
 * XREFs of MiCreatePlaceholderStorage @ 0x140A47C30
 * Callers:
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x140289B40 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B330 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402E326C (MiInsertVadEvent.c)
 *     MiAllocateVad @ 0x1407CFBD8 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rsi
  int v3; // ebx
  _QWORD *Pool; // rax
  _QWORD *v5; // rdi
  __int64 Vad; // rax
  __int64 v7; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsChargeProcessNonPagedPoolQuota(Process, 0x88uLL);
  if ( v3 < 0 )
    return (unsigned int)v3;
  Pool = MiAllocatePool(64, 0x48uLL, 0x73706D4Du);
  v5 = Pool;
  if ( !Pool )
  {
    v3 = -1073741670;
LABEL_6:
    PsReturnProcessNonPagedPoolQuota(Process, 136LL);
    return (unsigned int)v3;
  }
  *((_DWORD *)Pool + 16) = 128;
  Vad = MiAllocateVad(0LL, 0LL, 2);
  v5[1] = Vad;
  if ( !Vad )
  {
    v3 = -1073741670;
    ExFreePoolWithTag(v5, 0);
    goto LABEL_6;
  }
  MiInsertVadEvent(a1, v5, 0LL, v7);
  return 0LL;
}
