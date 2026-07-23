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
  ULONG OutputBufferLength; // ebp
  char v7; // si
  _QWORD *v8; // rbx
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE InputBuffer[160]; // [rsp+38h] [rbp-D0h] BYREF

  OutputBufferLength = 160;
  v7 = 0;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v8 = InputBuffer;
  if ( !byte_18017A188 )
  {
    v9 = RtlRunOnceExecuteOnce(&EtwpRegisterTpInitOnce, EtwpRegisterTpNotificationOnce, 0LL, 0LL);
    if ( v9 )
      return RtlNtStatusToDosError(v9);
  }
  while ( 1 )
  {
    v10 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)v8 + 4) = a3;
    *(_OWORD *)v8 = v10;
    *((_DWORD *)v8 + 5) = *(unsigned __int16 *)(a1 + 96);
    v8[4] = a2;
    v11 = NtTraceControl(EtwRegisterGuidsCode, v8, 0xA0u, v8, OutputBufferLength, &ReturnLength);
    if ( v11 != -1073741789 )
      break;
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v7 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v8 = Heap;
    if ( !Heap )
    {
      v11 = -1073741801;
      goto LABEL_15;
    }
  }
  if ( !v11 )
  {
    v12 = 0;
    goto LABEL_6;
  }
LABEL_15:
  v12 = RtlNtStatusToDosError(v11);
  if ( v12 )
    goto LABEL_13;
LABEL_6:
  *(_QWORD *)(a1 + 88) = v8[3];
  if ( (unsigned int)(a3 - 2) <= 1 )
    EtwpUpdateEnableInfoAndCallback(a1, (__int64)(v8 + 5));
  v13 = *(_QWORD *)(a1 + 32) - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( !v13 )
    v13 = *(_QWORD *)(a1 + 40) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  v14 = PrivateLoggerNotificationEntry;
  if ( !v13 )
    v14 = a1;
  PrivateLoggerNotificationEntry = v14;
LABEL_13:
  if ( v7 )
  {
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  return v12;
}
