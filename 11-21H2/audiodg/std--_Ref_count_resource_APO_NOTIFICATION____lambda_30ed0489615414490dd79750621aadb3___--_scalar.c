/*
 * XREFs of std::_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___::_scalar_deleting_destructor_ @ 0x140065090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
