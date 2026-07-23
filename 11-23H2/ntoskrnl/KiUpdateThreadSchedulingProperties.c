/*
 * XREFs of KiUpdateThreadSchedulingProperties @ 0x140204EA0
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140204900 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE2FC (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 */

char KiUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _BYTE *v4; // rax
  __int64 v5; // r10
  char v6; // r11
  int v7; // ecx
  va_list v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rbp
  _QWORD *v11; // rsi
  _BYTE *v12; // r14
  char v13; // cl
  __int64 v14; // rcx
  __int64 v15; // r8
  char IsThreadRankNonZero; // al
  __int64 v17; // rdx
  unsigned int v18; // edx
  char v19; // al
  char v20; // al
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  LOBYTE(v4) = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !*(_QWORD *)(v5 + 16) || v6 == 3 )
  {
    v7 = *(_DWORD *)(a1 + 120) >> 1;
    v22 = v5;
    if ( (v7 & 1) != 0 )
    {
      v4 = *(_BYTE **)(v5 + 34904);
      v9 = (unsigned __int8)*v4;
      v8 = v4 + 8;
      if ( !*v4 )
        return (char)v4;
    }
    else
    {
      va_copy(v8, va);
      v9 = 1;
    }
    v10 = v9;
    do
    {
      v11 = *(_QWORD **)v8;
      v12 = *(_BYTE **)(*(_QWORD *)v8 + 56LL);
      if ( (*(_BYTE *)(a1 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, *(_QWORD *)v8), v13 = 1, !IsThreadRankNonZero) )
      {
        v13 = *(_BYTE *)(a1 + 195);
      }
      LOBYTE(v4) = v13 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
      *v12 = (_BYTE)v4;
      v14 = v11[4375];
      if ( v14 )
      {
        if ( a1 == v11[3] )
          v17 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v17 = (unsigned __int8)v4 & 0x7F;
        LOBYTE(v4) = KiSetSchedulerAssistPriority(v14, v17, 0LL);
      }
      v15 = v11[7];
      if ( KeHeteroSystem )
      {
        v18 = *(_DWORD *)(a1 + 80);
        v19 = (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(v15 + 64)) & 7 ^ *(_BYTE *)(v15 + 64);
        v20 = (v19 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v19;
        if ( v18 <= *(_DWORD *)(a1 + 84) )
          v18 = *(_DWORD *)(a1 + 84);
        LOBYTE(v4) = (v18 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v20 & 0xBF;
        *(_BYTE *)(v15 + 64) = (_BYTE)v4;
      }
      v8 += 8;
      --v10;
    }
    while ( v10 );
  }
  return (char)v4;
}
