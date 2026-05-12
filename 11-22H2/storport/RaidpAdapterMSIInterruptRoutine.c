/*
 * XREFs of RaidpAdapterMSIInterruptRoutine @ 0x1C000F1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x1C0032538 (McTemplateK0pqqx_EtwWriteTransfer.c)
 */

char __fastcall RaidpAdapterMSIInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  LARGE_INTEGER v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  char v8; // si
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r8
  char CurrentProcessorNumber; // al
  int v14; // edx
  int v15; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v6.QuadPart = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1094997074 || (*(_BYTE *)(a2 + 107) & 1) == 0 || *(int *)(a2 + 308) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_1C0092A03 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v6 = PerformanceCounter;
  }
  if ( a2 == -336 || (v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 496)) == 0LL )
    v8 = 0;
  else
    v8 = v7(*(_QWORD *)(a2 + 576) + 16LL, a3);
  if ( StorEtwLoggingEnabled && (byte_1C0092A03 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v11.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v11.QuadPart <= 0 || v11.QuadPart >= v6.QuadPart )
      v12 = v11.QuadPart - v6.QuadPart;
    else
      v12 = v11.QuadPart - v6.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v12 )
        v3 = 10000
           * (1000 * (v12 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v12 / PerformanceFrequency.QuadPart)
            + 1000 * (v12 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
    }
    else
    {
      v3 = v12;
    }
    v17 = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1C0092A03 & 8) != 0 )
      McTemplateK0pqqx_EtwWriteTransfer(
        v17,
        v14,
        v15,
        (unsigned int)RaidpAdapterMSIInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v17);
  }
  return v8;
}
