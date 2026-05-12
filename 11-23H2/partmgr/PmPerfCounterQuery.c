/*
 * XREFs of PmPerfCounterQuery @ 0x1C001D5B0
 * Callers:
 *     PmIoctlGetPerformanceInfo @ 0x1C001D4F8 (PmIoctlGetPerformanceInfo.c)
 * Callees:
 *     PmPerfCounterIdleUpdate @ 0x1C00042C0 (PmPerfCounterIdleUpdate.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

LONG __fastcall PmPerfCounterQuery(PRKMUTEX Mutex, int a2, _DWORD *a3)
{
  char v6; // r15
  unsigned int v7; // ebp
  int Flink_high; // eax
  ULONG64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2 == 1;
  memset(a3, 0, 0x58uLL);
  v7 = 0;
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  *a3 = 88;
  a3[1] = a2;
  if ( a2 == 1 )
    Flink_high = HIDWORD(Mutex[1].Header.WaitListHead.Flink);
  else
    Flink_high = (int)Mutex[1].Header.WaitListHead.Flink;
  a3[19] = Flink_high;
  QpcTimeStamp = 0LL;
  v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  PmPerfCounterIdleUpdate((__int64)Mutex, v9, v6, 0);
  PmPerfCounterIdleUpdate((__int64)Mutex, v9, v6, 1);
  if ( Mutex[1].Header.SignalState )
  {
    do
    {
      v10 = *((_QWORD *)&Mutex[1].Header.WaitListHead.Blink->Flink + v7);
      if ( a2 == 1 )
        v10 += 64LL;
      v11 = a3 + 8;
      *((_QWORD *)a3 + 2) += *(_QWORD *)v10;
      v12 = 4LL;
      *((_QWORD *)a3 + 3) += *(_QWORD *)(v10 + 8);
      a3[16] += *(_DWORD *)(v10 + 48);
      a3[17] += *(_DWORD *)(v10 + 52);
      a3[18] += *(_DWORD *)(v10 + 56);
      a3[20] += *(_DWORD *)(v10 + 60);
      v13 = v10 - (_QWORD)a3;
      do
      {
        *v11 += *(_QWORD *)((char *)v11 + v13 - 16);
        ++v11;
        --v12;
      }
      while ( v12 );
      ++v7;
    }
    while ( v7 < Mutex[1].Header.SignalState );
  }
  *((_QWORD *)a3 + 1) = MEMORY[0xFFFFF78000000014];
  return KeReleaseMutex(Mutex, 0);
}
