/*
 * XREFs of EtwpRegisterProvider @ 0x18003250C
 * Callers:
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebp
  char v7; // si
  _BYTE *v8; // rbx
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Heap; // rax
  unsigned int v17; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v18[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 160;
  v7 = 0;
  memset_thunk_772440563353939046(v18, 0, 0xA0uLL);
  v8 = v18;
  if ( !byte_180187488 )
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
    *((_DWORD *)v8 + 5) = *(unsigned __int16 *)(a1 + 84);
    *((_QWORD *)v8 + 4) = a2;
    v11 = NtTraceControl(15LL, v8, 160LL, v8, v6, &v17);
    if ( v11 != -1073741789 )
      break;
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    v7 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v17);
    v6 = v17;
    v8 = (_BYTE *)Heap;
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
  *(_QWORD *)(a1 + 88) = *((_QWORD *)v8 + 3);
  if ( (unsigned int)(a3 - 2) <= 1 )
    EtwpUpdateEnableInfoAndCallback(a1, (__int64)(v8 + 40));
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
  }
  return v12;
}
