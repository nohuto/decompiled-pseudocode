/*
 * XREFs of ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x18012BA90
 * Callers:
 *     _CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor$1 @ 0x180078212 (_CMonitorManager--OnDefaultDeviceChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x18008441C (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

DefaultChangedContext *__fastcall ATL::CAutoPtr<DefaultChangedContext>::~CAutoPtr<DefaultChangedContext>(
        DefaultChangedContext **a1)
{
  DefaultChangedContext *v2; // rcx
  DefaultChangedContext *result; // rax

  v2 = *a1;
  if ( v2 )
    result = DefaultChangedContext::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
