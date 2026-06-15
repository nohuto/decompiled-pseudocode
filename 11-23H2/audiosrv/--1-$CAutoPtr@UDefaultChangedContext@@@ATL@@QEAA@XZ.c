/*
 * XREFs of ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x18012BA40
 * Callers:
 *     _CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor$1 @ 0x1800781E2 (_CMonitorManager--OnDefaultDeviceChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x1800843EC (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
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
