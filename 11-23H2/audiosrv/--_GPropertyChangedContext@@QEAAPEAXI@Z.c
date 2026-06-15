/*
 * XREFs of ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18012C1CC
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001CB60 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     sub_18008E8DC @ 0x18008E8DC (sub_18008E8DC.c)
 *     ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x18012BA90 (--1-$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1PropertyChangedContext@@QEAA@XZ @ 0x18012BFD0 (--1PropertyChangedContext@@QEAA@XZ.c)
 */

PropertyChangedContext *__fastcall PropertyChangedContext::`scalar deleting destructor'(PropertyChangedContext *this)
{
  PropertyChangedContext::~PropertyChangedContext(this);
  operator delete(this);
  return this;
}
