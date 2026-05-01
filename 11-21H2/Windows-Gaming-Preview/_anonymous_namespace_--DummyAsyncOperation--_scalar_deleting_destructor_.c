/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::_scalar_deleting_destructor_ @ 0x180016000
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::DummyAsyncOperation::_DummyAsyncOperation @ 0x18001603C (_anonymous_namespace_--DummyAsyncOperation--_DummyAsyncOperation.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall anonymous_namespace_::DummyAsyncOperation::_scalar_deleting_destructor_(void *a1, char a2)
{
  anonymous_namespace_::DummyAsyncOperation::_DummyAsyncOperation();
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0xB0uLL);
  return a1;
}
