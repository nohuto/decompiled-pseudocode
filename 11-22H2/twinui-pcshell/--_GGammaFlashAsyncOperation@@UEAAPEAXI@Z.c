/*
 * XREFs of ??_GGammaFlashAsyncOperation@@UEAAPEAXI@Z @ 0x1803FA738
 * Callers:
 *     ??_EGammaFlashAsyncOperation@@WBA@EAAPEAXI@Z @ 0x1802943D0 (--_EGammaFlashAsyncOperation@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAA@XZ @ 0x1803F90DC (--1-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c_.c)
 */

GammaFlashAsyncOperation *__fastcall GammaFlashAsyncOperation::`scalar deleting destructor'(
        GammaFlashAsyncOperation *this,
        char a2)
{
  AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::~AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
