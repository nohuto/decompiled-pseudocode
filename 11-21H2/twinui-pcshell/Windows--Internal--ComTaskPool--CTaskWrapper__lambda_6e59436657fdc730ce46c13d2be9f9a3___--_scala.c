/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::_scalar_deleting_destructor_ @ 0x18019D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::_CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___ @ 0x18019BA04 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::_CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
