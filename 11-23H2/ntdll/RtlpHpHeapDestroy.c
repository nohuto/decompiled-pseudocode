/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800652A8
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpHpHeapCreate @ 0x180065EE8 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x1800654E8 (RtlpHpSegContextCleanup.c)
 *     RtlpHpRegisterEnvironment @ 0x18006681C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpLfhContextCleanup @ 0x1800675F8 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x180067738 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180067788 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x180116804 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180123550 (RtlpHpLargeAllocationDestroy.c)
 */

unsigned int *__fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  int v5; // esi
  _QWORD *v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdi
  char v9; // al
  unsigned __int64 v10; // rdi
  __int128 v11; // xmm0
  int v12; // r8d
  __int64 v13; // rcx
  unsigned int *result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-29h] BYREF
  __int64 v20; // [rsp+30h] [rbp-19h] BYREF
  __int128 v21; // [rsp+40h] [rbp-9h] BYREF
  __int128 v22; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v23[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v24; // [rsp+66h] [rbp+1Dh]
  __int64 v25; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  v19 = a1;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v6 = 0LL;
        }
        v7 = (unsigned __int64 *)(v4 + 8);
        if ( !*(_QWORD *)(v4 + 8) )
          break;
        if ( v5 )
          v4 ^= *v7;
        else
          v4 = *v7;
        *v7 = 0LL;
      }
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  v9 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v10 = v19 + 736;
  while ( *(_QWORD *)v10 )
  {
    RtlpHpVsSubsegmentCleanup(v19 + 704, v10 ^ *(_QWORD *)v10);
    RtlpHpVsSubsegmentFree(v19 + 704, v17, 1LL);
  }
  RtlpHpLfhContextCleanup(v19 + 896);
  RtlpHpSegContextCleanup(v19 + 320);
  RtlpHpSegContextCleanup(v19 + 512);
  v11 = *(_OWORD *)v19;
  v20 = *(_QWORD *)(v19 + 256) - v19;
  v2 = (*(_BYTE *)(v19 + 30) & 1) == 0;
  v22 = v11;
  v21 = *(_OWORD *)v19;
  if ( v2 )
  {
    v12 = 16809984;
    if ( (unsigned __int8)(BYTE1(v22) - 2) <= 2u )
      v12 = 0x8000;
    RtlpHpFreeVA((unsigned __int64 *)&v19, (unsigned __int64 *)&v20, v12, &v21);
  }
  else
  {
    RtlpHpMetadataFree(v19, &v21);
  }
  RtlpHpRegisterEnvironment(&v22, 0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeDestroy(v19);
  result = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v16 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v16 = 2147353472LL;
  }
  if ( *(_BYTE *)v16 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      v18 = *(unsigned __int8 *)v15;
      v25 = v19;
      v24 = 4131;
      return (unsigned int *)NtTraceEvent(v18, 1026LL, 8LL, v23);
    }
  }
  return result;
}
