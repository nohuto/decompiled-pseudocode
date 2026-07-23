/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x18005CF3C
 * Callers:
 *     EtwpSwitchBuffer @ 0x18005A86C (EtwpSwitchBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005C6AC (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // r14d
  unsigned __int32 v6; // eax
  _DWORD *v7; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _DWORD *v10; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  RegionSize = *(unsigned int *)(a1 + 192);
  if ( a2 )
  {
    while ( 1 )
    {
      BaseAddress = 0LL;
      v6 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 208));
      if ( v6 > *(_DWORD *)(a1 + 200) )
        break;
      BaseAddress = (PVOID)(*(_QWORD *)(a1 + 408) + RegionSize * (v6 - 1));
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        break;
      v7 = BaseAddress;
      memset_thunk_772440563353939046(BaseAddress, 0, 0x48uLL);
      v7[2] = 72;
      *v7 = *(_DWORD *)(a1 + 192);
      *((_WORD *)v7 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
      v8 = *(_QWORD **)(a1 + 224);
      v9 = (char *)BaseAddress + 56;
      if ( *v8 != a1 + 216 )
        __fastfail(3u);
      *v9 = a1 + 216;
      v9[1] = v8;
      *v8 = v9;
      v10 = BaseAddress;
      *(_QWORD *)(a1 + 224) = v9;
      v10[11] = 0;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 400));
      **(_QWORD **)(a1 + 240) = v10 + 8;
      *(_QWORD *)(a1 + 240) = v10 + 8;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
      ++v2;
      if ( ++v3 >= a2 )
        return v2;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 208));
  }
  return v2;
}
