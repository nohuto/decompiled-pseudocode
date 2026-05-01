/*
 * XREFs of ??_E?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAPEAXI@Z @ 0x18032D080
 * Callers:
 *     ??_E?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@WBA@EAAPEAXI@Z @ 0x1801F0920 (--_E-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAA@XZ @ 0x18032BBF0 (--1-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c_.c)
 */

_QWORD *__fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::~AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
