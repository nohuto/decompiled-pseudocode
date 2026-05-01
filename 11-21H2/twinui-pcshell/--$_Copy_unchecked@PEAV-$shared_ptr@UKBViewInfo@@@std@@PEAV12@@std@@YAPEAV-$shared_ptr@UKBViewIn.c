/*
 * XREFs of ??$_Copy_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00@Z @ 0x180459D68
 * Callers:
 *     ??$_Assign_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@0Uforward_iterator_tag@1@@Z @ 0x180459C90 (--$_Assign_range@PEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 *__fastcall std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    std::shared_ptr<FlyoutView>::operator=(a3, i);
    a3 += 2;
  }
  return a3;
}
