/*
 * XREFs of StorAllocateContiguousIoResourcesWithPreferredNode @ 0x1C004F864
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 *     RaInitializeRaidResources @ 0x1C0058B7C (RaInitializeRaidResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousIoResourcesWithPreferredNode(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v7; // r15
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 ContiguousNodeMemory; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  v18 = 0LL;
  v4 = a1 + 24;
  v5 = *(_QWORD *)(a3 + 4184);
  v7 = *(_QWORD *)(a3 + 752);
  v9 = *(_QWORD *)(a3 + 4192);
  v17 = v5;
  v10 = *(_QWORD *)(a3 + 4176);
  if ( !*(_QWORD *)(a3 + 5480) )
    v4 = a1;
  v19 = v9;
  if ( *(_BYTE *)(a3 + 760) && *(_DWORD *)(a3 + 780) == 3 )
  {
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)(v7 + 8) + 272LL))(
                             v7,
                             &v17,
                             &v19,
                             v4);
    v12 = v4;
  }
  else
  {
    v12 = v4;
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v4, v5, v9, v10, 4, a4);
  }
  v13 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory
    || a4 != 0x80000000
    && (!*(_BYTE *)(a3 + 760) || *(_DWORD *)(a3 + 780) != 3
      ? (v14 = MmAllocateContiguousNodeMemory(v12, v17, v19, v10, 4, 0x80000000))
      : (v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v7 + 8) + 272LL))(
                 v7,
                 &v17,
                 &v19,
                 v4,
                 0,
                 0LL,
                 0x80000000,
                 &v18)),
        (v13 = v14) != 0) )
  {
    if ( *(_QWORD *)(a3 + 5480) )
    {
      v15 = v13 + v4 - 24LL;
      *(_QWORD *)(v13 + 832) = v15;
      *(_OWORD *)v15 = 0LL;
      *(_QWORD *)(v15 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(v13 + 832) = 0LL;
    }
    *(_QWORD *)(v13 + 24) = v18;
    *(_DWORD *)(v13 + 16) = v4;
  }
  return v13;
}
