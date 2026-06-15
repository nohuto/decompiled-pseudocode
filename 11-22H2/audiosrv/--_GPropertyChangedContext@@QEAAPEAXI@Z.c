/*
 * XREFs of ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18012C21C
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001CB60 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     sub_18008E90C @ 0x18008E90C (sub_18008E90C.c)
 *     ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x18012BAE0 (--1-$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1PropertyChangedContext@@QEAA@XZ @ 0x18012C020 (--1PropertyChangedContext@@QEAA@XZ.c)
 */

PropertyChangedContext *__fastcall PropertyChangedContext::`scalar deleting destructor'(PropertyChangedContext *this)
{
  PropertyChangedContext::~PropertyChangedContext(this);
  operator delete(this);
  return this;
}
