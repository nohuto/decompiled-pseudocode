/*
 * XREFs of ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x180119AE4
 * Callers:
 *     sub_1800BC2DD @ 0x1800BC2DD (sub_1800BC2DD.c)
 *     ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x180119494 (--1-$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ.c)
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C1E0 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1PropertyChangedContext@@QEAA@XZ @ 0x1801198B0 (--1PropertyChangedContext@@QEAA@XZ.c)
 */

PropertyChangedContext *__fastcall PropertyChangedContext::`scalar deleting destructor'(PropertyChangedContext *this)
{
  PropertyChangedContext::~PropertyChangedContext(this);
  operator delete(this);
  return this;
}
