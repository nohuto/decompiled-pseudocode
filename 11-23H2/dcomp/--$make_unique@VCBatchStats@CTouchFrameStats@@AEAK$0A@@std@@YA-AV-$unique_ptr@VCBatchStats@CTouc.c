/*
 * XREFs of ??$make_unique@VCBatchStats@CTouchFrameStats@@AEAK$0A@@std@@YA?AV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@AEAK@Z @ 0x180008D10
 * Callers:
 *     ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34 (-GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<CTouchFrameStats::CBatchStats,unsigned long &,0>(_QWORD *a1, int *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edx
  _QWORD *result; // rax

  v4 = operator new(0x70uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    v4[1] = 0LL;
    *(_DWORD *)v4 = v6;
    memset_0(v4 + 2, 0, 0x60uLL);
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
