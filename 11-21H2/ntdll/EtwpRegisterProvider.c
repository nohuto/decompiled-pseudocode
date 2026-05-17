/*
 * XREFs of EtwpRegisterProvider @ 0x1800165B8
 * Callers:
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlRunOnceExecuteOnce @ 0x1800163A0 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  char v6; // si
  _BYTE *Heap; // rbx
  NTSTATUS v8; // eax
  __int128 v9; // xmm0
  NTSTATUS v10; // eax
  ULONG v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v15; // [rsp+30h] [rbp-D8h]
  _BYTE v16[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 0;
  memset(v16, 0, sizeof(v16));
  Heap = v16;
  if ( !byte_18017A188 )
  {
    v8 = RtlRunOnceExecuteOnce(
           &EtwpRegisterTpInitOnce,
           (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))EtwpRegisterTpNotificationOnce,
           0LL,
           0LL);
    if ( v8 )
      return RtlNtStatusToDosError(v8);
  }
  while ( 1 )
  {
    v9 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)Heap + 4) = a3;
    *(_OWORD *)Heap = v9;
    *((_DWORD *)Heap + 5) = *(unsigned __int16 *)(a1 + 96);
    *((_QWORD *)Heap + 4) = a2;
    v10 = NtTraceControl(15LL, Heap, 160LL);
    if ( v10 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    v6 = 1;
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v15);
    if ( !Heap )
    {
      v10 = -1073741801;
      goto LABEL_15;
    }
  }
  if ( !v10 )
  {
    v11 = 0;
    goto LABEL_6;
  }
LABEL_15:
  v11 = RtlNtStatusToDosError(v10);
  if ( v11 )
    goto LABEL_13;
LABEL_6:
  *(_QWORD *)(a1 + 88) = *((_QWORD *)Heap + 3);
  if ( (unsigned int)(a3 - 2) <= 1 )
    EtwpUpdateEnableInfoAndCallback(a1, (__int64)(Heap + 40));
  v12 = *(_QWORD *)(a1 + 32) - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 40) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  v13 = PrivateLoggerNotificationEntry;
  if ( !v12 )
    v13 = a1;
  PrivateLoggerNotificationEntry = v13;
LABEL_13:
  if ( v6 )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
  return v11;
}
