/*
 * XREFs of ??$_Copy_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00@Z @ 0x18014B6B0
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18014A300 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802DB4DC (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 16LL )
  {
    std::shared_ptr<FlyoutView>::operator=(a3, i);
    a3 += 16LL;
  }
  return a3;
}
