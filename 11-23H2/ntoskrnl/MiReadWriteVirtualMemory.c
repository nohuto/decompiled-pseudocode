/*
 * XREFs of MiReadWriteVirtualMemory @ 0x1407AE6E0
 * Callers:
 *     NtReadVirtualMemoryEx @ 0x140338A40 (NtReadVirtualMemoryEx.c)
 *     NtWriteVirtualMemory @ 0x1407AE680 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x1407AE6B0 (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x140338A70 (PsIsProcessLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyVirtualMemory @ 0x1406F7B20 (MiCopyVirtualMemory.c)
 *     EtwTiLogReadWriteVm @ 0x14076C02C (EtwTiLogReadWriteVm.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        char *a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // r15
  char PreviousMode; // al
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  _KPROCESS *Process; // r15
  PVOID v20; // rsi
  __int64 v21; // r14
  int v22; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-68h]
  KPROCESSOR_MODE v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF

  Object[0] = 0LL;
  if ( (a7 & 0xFFFFFFFE) != 0 || (a7 & 1) != 0 && a6 != 16 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = a4 - 1;
    v13 = &a2[a4 - 1];
    if ( !a4 )
      v13 = a2;
    if ( v13 < a2 )
      return 3221225477LL;
    v14 = a4 - 1;
    if ( !a4 )
      v14 = 0LL;
    if ( (unsigned __int64)&a2[v14] > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v15 = a4 - 1;
    if ( !a4 )
      v15 = 0LL;
    if ( &a3[v15] < a3 )
      return 3221225477LL;
    if ( !a4 )
      v12 = 0LL;
    if ( (unsigned __int64)&a3[v12] > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v16 = (_QWORD *)a5;
    if ( a5 )
    {
      v17 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = *(_QWORD *)v17;
      PreviousMode = v25;
    }
    else
    {
      PreviousMode = v25;
    }
  }
  else
  {
    v16 = (_QWORD *)a5;
  }
  v26 = 0LL;
  v18 = 0;
  if ( a4 )
  {
    v18 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            a6,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            Object,
            0LL,
            0LL);
    if ( v18 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v20 = Object[0];
      if ( (*((_BYTE *)Object[0] + 992) & 1) == 0 || Process == Object[0] || *((_QWORD *)Object[0] + 175) )
      {
        *(_QWORD *)Tag = a4;
        v21 = (__int64)a2;
        if ( a6 == 16 )
          v22 = MiCopyVirtualMemory(
                  (ULONG_PTR)Object[0],
                  a2,
                  (ULONG_PTR)Process,
                  a3,
                  *(size_t *)Tag,
                  v25,
                  (size_t *)&v26,
                  a7);
        else
          v22 = MiCopyVirtualMemory(
                  (ULONG_PTR)Process,
                  a3,
                  (ULONG_PTR)Object[0],
                  a2,
                  *(size_t *)Tag,
                  v25,
                  (size_t *)&v26,
                  0);
        v18 = v22;
      }
      else
      {
        v18 = -1073741819;
        v21 = (__int64)a2;
      }
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)v20, a6) )
        EtwTiLogReadWriteVm(v18, (__int64)Process, (__int64)v20, a6, v21, v26);
      ObfDereferenceObjectWithTag(v20, 0x6D566D4Du);
    }
  }
  if ( v16 )
    *v16 = v26;
  return (unsigned int)v18;
}
