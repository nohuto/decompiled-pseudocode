/*
 * XREFs of LdrpRecordUnloadEvent @ 0x18006BB6C
 * Callers:
 *     LdrpProcessDetachNode @ 0x18006B9F4 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006BD80 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

PVOID __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  __int64 v4; // rbx
  unsigned __int16 v5; // bp
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  int v8; // ett
  __int64 v9; // r14
  __int64 v10; // rbx
  PVOID result; // rax
  unsigned int v12; // ecx
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+24h] [rbp-34h]
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+2Ch] [rbp-2Ch]

  v1 = LdrpUnloadIndex;
  v2 = LdrpUnloadIndex & 0xF;
  v4 = 52 * v2;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 8] = LdrpUnloadIndex;
  LdrpUnloadIndex = v1 + 1;
  *(_QWORD *)&RtlpUnloadEventTrace[v4] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&RtlpUnloadEventTrace[v4 + 4] = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  if ( v5 > 0x40u )
    v5 = 64;
  memmove(&RtlpUnloadEventTrace[v4 + 14], *(const void **)(a1 + 96), v5);
  v6 = (unsigned __int64)v5 >> 1;
  if ( v5 < 0x40u )
    RtlpUnloadEventTrace[52 * v2 + 14 + v6] = 0;
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(PVOID *)(a1 + 48));
  v7 = RtlpUnloadEventTraceEx;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 10] = v13;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 12] = v14;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 46] = v15;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 48] = v16;
  if ( v7 )
    goto LABEL_6;
  v12 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
    v12 = 0xFFFF;
  RtlpUnloadEventTraceExNumber = v12;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 104LL * v12);
  RtlpUnloadEventTraceEx = (__int64)result;
  v7 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v8 = LdrpUnloadIndexEx;
    v9 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v10 = 104 * v9;
    *(_DWORD *)(v10 + v7 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v8 + 1;
    *(_QWORD *)(v10 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v10 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v9 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (v6 + 52 * v9) + 28) = 0;
    *(_DWORD *)(v10 + RtlpUnloadEventTraceEx + 20) = v13;
    *(_DWORD *)(v10 + RtlpUnloadEventTraceEx + 24) = v14;
    *(_DWORD *)(v10 + RtlpUnloadEventTraceEx + 92) = v15;
    result = (PVOID)RtlpUnloadEventTraceEx;
    *(_DWORD *)(v10 + RtlpUnloadEventTraceEx + 96) = v16;
  }
  return result;
}
