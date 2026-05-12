/*
 * XREFs of PmWmiCounterQuery @ 0x1C001D860
 * Callers:
 *     ?PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z @ 0x1C001D710 (-PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z.c)
 *     PmIoctlPerformance @ 0x1C001DCC4 (PmIoctlPerformance.c)
 * Callees:
 *     PmPerfCounterIdleUpdate @ 0x1C00042C0 (PmPerfCounterIdleUpdate.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

LONG __fastcall PmWmiCounterQuery(PRKMUTEX Mutex, char *a2, _OWORD *a3, int a4)
{
  unsigned int v8; // esi
  ULONG64 v9; // rbx
  __int64 v10; // r8
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  LONG result; // eax
  unsigned __int64 QpcTimeStamp; // [rsp+60h] [rbp+8h] BYREF

  memset(a2, 0, 0x58uLL);
  v8 = 0;
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  *((_DWORD *)a2 + 12) = Mutex[1].Header.WaitListHead.Flink;
  QpcTimeStamp = 0LL;
  v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  PmPerfCounterIdleUpdate((__int64)Mutex, v9, 0, 0);
  PmPerfCounterIdleUpdate((__int64)Mutex, v9, 0, 1);
  if ( Mutex[1].Header.SignalState )
  {
    v10 = *((_QWORD *)a2 + 1);
    v11 = *((_DWORD *)a2 + 10);
    v12 = *((_DWORD *)a2 + 11);
    v13 = *((_DWORD *)a2 + 13);
    v14 = *((_QWORD *)a2 + 2);
    v15 = *((_QWORD *)a2 + 3);
    v16 = *((_QWORD *)a2 + 4);
    do
    {
      v17 = v8++;
      v18 = *((_QWORD *)&Mutex[1].Header.WaitListHead.Blink->Flink + v17);
      *(_QWORD *)a2 += *(_QWORD *)v18;
      v10 += *(_QWORD *)(v18 + 8);
      *((_QWORD *)a2 + 1) = v10;
      v11 += *(_DWORD *)(v18 + 48);
      *((_DWORD *)a2 + 10) = v11;
      v12 += *(_DWORD *)(v18 + 52);
      *((_DWORD *)a2 + 11) = v12;
      v13 += *(_DWORD *)(v18 + 60);
      *((_DWORD *)a2 + 13) = v13;
      v14 += *(_QWORD *)(v18 + 16);
      *((_QWORD *)a2 + 2) = v14;
      v15 += *(_QWORD *)(v18 + 24);
      *((_QWORD *)a2 + 3) = v15;
      v16 += *(_QWORD *)(v18 + 40);
      *((_QWORD *)a2 + 4) = v16;
    }
    while ( v8 < Mutex[1].Header.SignalState );
  }
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000014];
  result = KeReleaseMutex(Mutex, 0);
  *((_DWORD *)a2 + 16) = a4;
  *(_OWORD *)(a2 + 68) = *a3;
  return result;
}
