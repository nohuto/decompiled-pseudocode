/*
 * XREFs of CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___::_scalar_deleting_destructor_ @ 0x1801B70A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___::_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___ @ 0x1801B681C (CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___::_CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
