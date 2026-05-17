/*
 * XREFs of LdrpRecordUnloadEvent @ 0x18006BB6C
 * Callers:
 *     LdrpProcessDetachNode @ 0x18006B9F4 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006BD80 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  __int64 v4; // rbx
  unsigned __int16 v5; // bp
  unsigned __int64 v6; // rdi
  int v7; // eax
  int v8; // r12d
  __int64 v9; // r8
  int v10; // r13d
  int v11; // ett
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx
  int v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+24h] [rbp-34h]
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+2Ch] [rbp-2Ch]

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
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), &v17);
  v7 = v19;
  v8 = v17;
  v9 = RtlpUnloadEventTraceEx;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 10] = v17;
  v10 = v18;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 12] = v18;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 46] = v7;
  *(_DWORD *)&RtlpUnloadEventTrace[v4 + 48] = v20;
  if ( v9 )
    goto LABEL_6;
  v16 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
    v16 = 0xFFFF;
  RtlpUnloadEventTraceExNumber = v16;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 104LL * v16);
  RtlpUnloadEventTraceEx = result;
  v9 = result;
  if ( result )
  {
LABEL_6:
    v11 = LdrpUnloadIndexEx;
    v12 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v13 = 104 * v12;
    *(_DWORD *)(v13 + v9 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v11 + 1;
    *(_QWORD *)(v13 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v13 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v12 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (v6 + 52 * v12) + 28) = 0;
    v14 = v19;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 20) = v8;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 24) = v10;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 92) = v14;
    result = RtlpUnloadEventTraceEx;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 96) = v20;
  }
  return result;
}
