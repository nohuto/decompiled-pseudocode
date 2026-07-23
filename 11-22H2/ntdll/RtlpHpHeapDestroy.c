/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800653D8
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x1800478C4 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x180064850 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x180065618 (RtlpHpSegContextCleanup.c)
 *     RtlpHpRegisterEnvironment @ 0x180066838 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpLfhContextCleanup @ 0x180067614 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x180067754 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800677A4 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x180115354 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1801220A0 (RtlpHpLargeAllocationDestroy.c)
 */

int __fastcall RtlpHpHeapDestroy(__int64 a1)
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
  struct _PEB *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r11
  void *v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR v21[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v22; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  _BYTE Fields[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v25; // [rsp+66h] [rbp+1Dh]
  _QWORD *v26; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  v20 = (_QWORD *)a1;
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
  v10 = (unsigned __int64)(v20 + 92);
  while ( *(_QWORD *)v10 )
  {
    RtlpHpVsSubsegmentCleanup(v20 + 88, v10 ^ *(_QWORD *)v10);
    RtlpHpVsSubsegmentFree(v20 + 88, v17, 1LL);
  }
  RtlpHpLfhContextCleanup(v20 + 112);
  RtlpHpSegContextCleanup(v20 + 40);
  RtlpHpSegContextCleanup(v20 + 64);
  v11 = *(_OWORD *)v20;
  v21[0] = v20[32] - (_QWORD)v20;
  v2 = (*((_BYTE *)v20 + 30) & 1) == 0;
  v23 = v11;
  v22 = *(_OWORD *)v20;
  if ( v2 )
  {
    v12 = 16809984;
    if ( (unsigned __int8)(BYTE1(v23) - 2) <= 2u )
      v12 = 0x8000;
    RtlpHpFreeVA((PVOID *)&v20, v21, v12, &v22);
  }
  else
  {
    RtlpHpMetadataFree((__int64)v20, &v22);
  }
  RtlpHpRegisterEnvironment(&v23, 0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeDestroy(v20);
  LODWORD(v14) = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)v14 )
  {
    v14 = NtCurrentPeb();
    v16 = (__int64)v14->SharedData + 550;
  }
  else
  {
    v16 = 2147353472LL;
  }
  if ( *(_BYTE *)v16 )
  {
    v14 = NtCurrentPeb();
    if ( (v14->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      v18 = (void *)*(unsigned __int8 *)v15;
      v26 = v20;
      v25 = 4131;
      LODWORD(v14) = NtTraceEvent(v18, 0x402u, 8u, Fields);
    }
  }
  return (int)v14;
}
