/*
 * XREFs of RtlpDecommitBlock @ 0x180020548
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180020488 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180020680 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapContractEvent @ 0x180116C84 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x180116DB8 (RtlpLogHeapDecommit.c)
 */

__int64 __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rcx
  _DWORD *v26; // r8
  unsigned __int64 v27; // rdx
  __int64 v28; // [rsp+60h] [rbp+20h] BYREF
  const void *v29; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v28 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v26 = (_DWORD *)(a2 + 32);
    v27 = (unsigned __int64)(16 * v4 - 32) >> 2;
    if ( v27 )
    {
      if ( ((unsigned __int8)v26 & 4) != 0 )
      {
        --v27;
        *v26 = -17891602;
        v26 = (_DWORD *)(a2 + 36);
      }
      memset64(v26, 0xFEEEFEEEFEEEFEEEuLL, v27 >> 1);
      a1 = 0LL;
      if ( (v27 & 1) != 0 )
        v26[v27 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  result = RtlpHeapKey ^ *(_QWORD *)(v3 + 360);
  if ( !result )
  {
    result = RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v29, &v28);
    if ( (_BYTE)result )
    {
      v9 = RtlpSecMemFreeVirtualMemory(v6, &v29, &v28, 0x4000LL);
      if ( v9 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        result = DbgPrint(
                   "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                   v9,
                   (const void *)v3,
                   v29,
                   v28);
      }
      else
      {
        v15 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7, v10, v11) )
          v16 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v16 = 2147353472LL;
        if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v3, v29, v28, 7LL);
        *(_QWORD *)(v3 + 664) += v28;
        ++*(_DWORD *)(v3 + 628);
        ++*(_DWORD *)(v3 + 660);
        ++*(_DWORD *)(v3 + 644);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v12, v13, v14) )
          v20 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v20 = 2147353472LL;
        if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v17, v18, v19) )
            v15 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(v3, (_DWORD)v29, v28, 16 * *(_QWORD *)(v3 + 192), 0, 0LL, *(unsigned __int8 *)v15);
        }
        result = RtlGetCurrentServiceSessionId(v20, v17, v18, v19);
        v24 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = (__int64)NtCurrentPeb();
          v25 = *(_QWORD *)(result + 144) + 560LL;
        }
        else
        {
          v25 = 2147353482LL;
        }
        if ( *(_BYTE *)v25 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v21, v22, v23) )
            v24 = (__int64)NtCurrentPeb()->SharedData + 560;
          result = RtlpLogHeapContractEvent(
                     v3,
                     (_DWORD)v29,
                     v28,
                     16 * (unsigned int)*(_QWORD *)(v3 + 192),
                     0,
                     0LL,
                     *(unsigned __int8 *)v24);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    result = *(unsigned int *)(v3 + 136);
    *(_DWORD *)(a2 + 8) ^= result;
  }
  return result;
}
