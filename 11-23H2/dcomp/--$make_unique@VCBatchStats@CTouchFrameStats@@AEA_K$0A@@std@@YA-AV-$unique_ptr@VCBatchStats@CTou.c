/*
 * XREFs of ??$make_unique@VCBatchStats@CTouchFrameStats@@AEA_K$0A@@std@@YA?AV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@AEA_K@Z @ 0x1801A50A0
 * Callers:
 *     ?FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z @ 0x1801A56E0 (-FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<CTouchFrameStats::CBatchStats,unsigned __int64 &,0>(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *result; // rax

  v4 = operator new(0x70uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    *(_DWORD *)v4 = 0;
    v4[1] = v6;
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
