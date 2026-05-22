/*
 * XREFs of ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180170384
 * Callers:
 *     ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180170268 (-DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV-$optional@ULastUpData@ShellEdgyRecognizer@@@std@@.c)
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017043C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x1801702EC (-GetRectForLocation@ShellEdgyRecognizer@@AEAA-AUtagRECT@@U2@W4EdgyLocation@1@@Z.c)
 */

__int64 __fastcall ShellEdgyRecognizer::HitTestEdgyRegion(__int64 a1, POINT a2)
{
  RECT *v2; // rdi
  unsigned int left; // esi
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __m128i si128; // [rsp+30h] [rbp-38h] BYREF
  RECT rc; // [rsp+40h] [rbp-28h] BYREF

  v2 = (RECT *)&si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
    left = v2->left;
    if ( (v2->left & *(_DWORD *)(a1 + 128)) != 0 )
    {
      v7 = *(_OWORD *)(a1 + 80);
      ShellEdgyRecognizer::GetRectForLocation(a1, (__int64)&rc, &v7, left);
      if ( PtInRect(&rc, a2) )
        break;
    }
    v2 = (RECT *)((char *)v2 + 4);
    if ( v2 == &rc )
      return 0LL;
  }
  return left;
}
