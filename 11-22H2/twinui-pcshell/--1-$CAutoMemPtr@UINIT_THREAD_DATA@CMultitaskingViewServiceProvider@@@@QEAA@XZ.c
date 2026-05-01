/*
 * XREFs of ??1?$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ @ 0x1801BE7B0
 * Callers:
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800E1C6C (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     _CMultitaskingViewServiceProvider::_StartMTVThread_::_1_::dtor$0 @ 0x1802BB035 (_CMultitaskingViewServiceProvider--_StartMTVThread_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

CMultitaskingViewServiceProvider::INIT_THREAD_DATA *__fastcall CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>::~CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>(
        CMultitaskingViewServiceProvider::INIT_THREAD_DATA **a1)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(result);
  return result;
}
