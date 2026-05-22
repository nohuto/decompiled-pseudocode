/*
 * XREFs of ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x180199A40
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019A990 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??0HitTestResult@@QEAA@$$QEAU0@@Z @ 0x180198D70 (--0HitTestResult@@QEAA@$$QEAU0@@Z.c)
 */

__int64 *__fastcall std::make_unique<HitTestResult,HitTestResult,0>(__int64 *a1, __int64 a2)
{
  void *v4; // rax

  v4 = operator new(0x78uLL);
  *a1 = HitTestResult::HitTestResult((__int64)v4, a2);
  return a1;
}
