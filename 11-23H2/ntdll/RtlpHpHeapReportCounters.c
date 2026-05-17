/*
 * XREFs of RtlpHpHeapReportCounters @ 0x18008B3F0
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x18008B1F0 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpHeapReportCounters(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 128) << 12;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 408) + *(_QWORD *)(a1 + 600);
  *(_QWORD *)(a2 + 144) = v6;
  *(_QWORD *)(a2 + 128) = v4;
  v7 = v5 << 12;
  *(_QWORD *)(a2 + 136) = v5 << 12;
  v8 = ((v5 - 2 * v6) << 12) - 4096;
  *(_QWORD *)(a2 + 152) = v8;
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 88) << 12;
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a1 + 96) << 12;
  *(_QWORD *)(a2 + 80) = v8;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 20) = 2;
  *(_DWORD *)(a2 + 24) = *(unsigned __int16 *)(a1 + 28);
  LODWORD(v8) = NtCurrentPeb()->NumberOfHeaps;
  *(_QWORD *)(a2 + 40) = v4;
  *(_DWORD *)(a2 + 28) = v8 - 1;
  *(_QWORD *)(a2 + 48) = v7;
  LODWORD(v6) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 100) = 0;
  *(_DWORD *)(a2 + 104) = v6;
  result = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a2 + 120) = result;
  return result;
}
