/*
 * XREFs of PmWmiCounterIoComplete @ 0x1C00041F0
 * Callers:
 *     <none>
 * Callees:
 *     PmPerfCounterIdleUpdate @ 0x1C00042C0 (PmPerfCounterIdleUpdate.c)
 */

ULONG64 __fastcall PmWmiCounterIoComplete(__int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // cl
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+18h] BYREF

  QpcTimeStamp = 0LL;
  result = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  *a3 = result - *a3;
  if ( a1 )
  {
    LOBYTE(v7) = 1;
    PmPerfCounterIdleUpdate(a1, result, 0LL, v7);
    result = *(_QWORD *)(a1 + 72);
    v8 = *(_QWORD *)(result + 8LL * HIDWORD(KeGetPcr()[1].LockArray));
    if ( v8 )
    {
      v9 = **(_BYTE **)(a2 + 184);
      switch ( v9 )
      {
        case 3:
          *(_QWORD *)v8 += *(_QWORD *)(a2 + 56);
          ++*(_DWORD *)(v8 + 48);
          *(_QWORD *)(v8 + 16) += *a3;
          break;
        case 4:
          *(_QWORD *)(v8 + 8) += *(_QWORD *)(a2 + 56);
          ++*(_DWORD *)(v8 + 52);
          *(_QWORD *)(v8 + 24) += *a3;
          break;
        case 9:
          ++*(_DWORD *)(v8 + 56);
          *(_QWORD *)(v8 + 32) += *a3;
          break;
      }
      result = *(unsigned int *)(a2 + 16);
      if ( (result & 8) != 0 )
        ++*(_DWORD *)(v8 + 60);
    }
  }
  return result;
}
