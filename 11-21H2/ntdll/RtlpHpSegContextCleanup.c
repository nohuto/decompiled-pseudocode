/*
 * XREFs of RtlpHpSegContextCleanup @ 0x180056E50
 * Callers:
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180057A70 (RtlpHpSegSegmentFree.c)
 */

void __fastcall RtlpHpSegContextCleanup(__int64 a1)
{
  int v1; // edi
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v1 = a1;
  v2 = (_QWORD *)(a1 + 72);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
      __fastfail(3u);
    v2[1] = v4;
    *v4 = v2;
    RtlpHpSegSegmentFree(v1);
  }
}
