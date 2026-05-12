/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C00248A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x1C0032538 (McTemplateK0pqqx_EtwWriteTransfer.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  char v8; // bp
  LARGE_INTEGER v9; // rax
  unsigned __int64 v10; // r8
  char CurrentProcessorNumber; // al
  int v12; // edx
  int v13; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v4.QuadPart = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1094997074 || (*(_BYTE *)(a2 + 107) & 1) == 0 || *(int *)(a2 + 308) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_1C0092A03 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  if ( a2 != -336 && (v6 = *(_QWORD *)(a2 + 568)) != 0 && (v7 = *(__int64 (__fastcall **)(__int64))(v6 + 24)) != 0LL )
    v8 = v7(*(_QWORD *)(a2 + 576) + 16LL);
  else
    v8 = 0;
  if ( StorEtwLoggingEnabled && (byte_1C0092A03 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v9.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v9.QuadPart <= 0 || v9.QuadPart >= v4.QuadPart )
      v10 = v9.QuadPart - v4.QuadPart;
    else
      v10 = v9.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v10 )
        v2 = 10000
           * (1000 * (v10 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v10 / PerformanceFrequency.QuadPart)
            + 1000 * (v10 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
    }
    else
    {
      v2 = v10;
    }
    v16 = v2;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1C0092A03 & 8) != 0 )
      McTemplateK0pqqx_EtwWriteTransfer(
        v16,
        v12,
        v13,
        (unsigned int)RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v16);
  }
  return v8;
}
