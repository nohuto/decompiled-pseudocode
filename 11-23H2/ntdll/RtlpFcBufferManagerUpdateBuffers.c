/*
 * XREFs of RtlpFcBufferManagerUpdateBuffers @ 0x1800716A8
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x18004FE64 (RtlpWaitOnAddress.c)
 */

void *__fastcall RtlpFcBufferManagerUpdateBuffers(volatile __int64 *a1, volatile __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  volatile __int64 *v8; // rbp
  __int64 v9; // r9
  char *v10; // rax
  char *v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 i; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1 & 1;
  v6 = *(_DWORD *)a1 & 1;
  v7 = 3LL;
  v8 = &a1[9 * v4];
  v9 = ((_BYTE)v4 - 1) & 1;
  v10 = (char *)v8 - a3 + 24;
  v11 = (char *)&a1[8 * v9 + 3 + v9] - a3;
  do
  {
    if ( *(_QWORD *)a3 )
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)a3;
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)(a3 + 16);
      *(_OWORD *)a3 = *(_OWORD *)&v10[a3];
      *(_QWORD *)(a3 + 16) = *(_QWORD *)&v10[a3 + 16];
    }
    else
    {
      *(_OWORD *)&v11[a3] = *(_OWORD *)&v10[a3];
      *(_QWORD *)&v11[a3 + 16] = *(_QWORD *)&v10[a3 + 16];
    }
    a3 += 24LL;
    --v7;
  }
  while ( v7 );
  a1[v9 + 21] = a2;
  v12 = (unsigned __int64)_InterlockedExchange64(a1, v9) >> 1;
  if ( v12 )
  {
    for ( i = v12 + _InterlockedExchangeAdd64(a1 + 1, v12); i; i = *((_QWORD *)a1 + 1) )
      RtlpWaitOnAddress((_QWORD *)a1 + 1, &i, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount);
  }
  a1[v6 + 21] = 0LL;
  return memset_thunk_772440563353939046((void *)(v8 + 3), 0, 0x48uLL);
}
