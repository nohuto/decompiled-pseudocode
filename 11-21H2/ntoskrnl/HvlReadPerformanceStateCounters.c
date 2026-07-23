/*
 * XREFs of HvlReadPerformanceStateCounters @ 0x14039E4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 */

void __fastcall HvlReadPerformanceStateCounters(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx

  v4 = a2;
  v5 = a4;
  v6 = a3;
  if ( a2 < 2 && (v7 = sub_14039E528()) != 0 )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(v7 + 32);
    v9 = *((unsigned int *)&xmmword_140CF7090 + 2 * v4 + 7);
    *v6 = *(_QWORD *)(v8 + 8LL * *((unsigned int *)&xmmword_140CF7090 + 2 * v4 + 6));
    *v5 = *(_QWORD *)(v8 + 8 * v9);
  }
  else
  {
    *v6 = 0LL;
    *v5 = 0LL;
  }
}
