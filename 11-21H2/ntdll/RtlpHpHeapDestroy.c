/*
 * XREFs of RtlpHpHeapDestroy @ 0x180056C28
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180054CB4 (RtlpHpHeapCreate.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x180014CB8 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpRegisterEnvironment @ 0x1800555C0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x180056E50 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x180056EB0 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180056FF0 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x180114F6C (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18011FCA8 (RtlpHpLargeAllocationDestroy.c)
 */

unsigned int *__fastcall RtlpHpHeapDestroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned __int64 v7; // rcx
  char v8; // al
  int v9; // esi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // r11
  __int128 v16; // xmm0
  __int64 v17; // rcx
  unsigned int *result; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h] BYREF
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v26[6]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v27; // [rsp+56h] [rbp-2Ah]
  __int64 v28; // [rsp+70h] [rbp-10h]

  v4 = a1 + 72;
  v22 = a1;
  v5 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v7 = *(_QWORD *)(a1 + 72);
  if ( !v5 && v7 )
    v7 ^= v4;
  v8 = *(_BYTE *)(v4 + 8);
  v9 = v8 & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v7 )
        {
          v10 = (_QWORD *)v7;
          if ( v9 )
            v7 ^= *(_QWORD *)v7;
          else
            v7 = *(_QWORD *)v7;
          *v10 = 0LL;
        }
        v11 = *(_QWORD *)(v7 + 8);
        if ( !v11 )
          break;
        v12 = v7;
        if ( v9 )
          v7 ^= v11;
        else
          v7 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      v13 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= v7;
      RtlpHpLargeAllocationDestroy(v7, a1);
      if ( !v13 )
        break;
      v7 = v13;
    }
    v8 = *(_BYTE *)(v4 + 8);
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  v14 = v22 + 736;
  while ( *(_QWORD *)v14 )
  {
    RtlpHpVsSubsegmentCleanup(v22 + 704, v14 ^ *(_QWORD *)v14, a3, a4);
    RtlpHpVsSubsegmentFree(v22 + 704, v15, 1u);
  }
  RtlpHpLfhContextCleanup(v22 + 896);
  RtlpHpSegContextCleanup(v22 + 320);
  RtlpHpSegContextCleanup(v22 + 512);
  v16 = *(_OWORD *)v22;
  v23 = *(_QWORD *)(v22 + 256) - v22;
  v5 = (*(_BYTE *)(v22 + 30) & 1) == 0;
  v25 = v16;
  v24 = *(_OWORD *)v22;
  if ( v5 )
    RtlpHpFreeVA((unsigned __int64 *)&v22, (unsigned __int64 *)&v23, BYTE1(v25) < 2u ? 16809984 : 0x8000, &v24);
  else
    RtlpHpMetadataFree(v22, &v24);
  RtlpHpRegisterEnvironment(&v25, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v17 = 2147353480LL;
  if ( *(_BYTE *)v17 )
    RtlpHeapLogRangeDestroy(v22);
  result = RtlGetCurrentServiceSessionId();
  v19 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v20 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v20 = 2147353472LL;
  }
  if ( *(_BYTE *)v20 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v19 = (__int64)NtCurrentPeb()->SharedData + 550;
      v21 = *(unsigned __int8 *)v19;
      v28 = v22;
      v27 = 4131;
      return (unsigned int *)NtTraceEvent(v21, 1026LL, 8LL, v26);
    }
  }
  return result;
}
