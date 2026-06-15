/*
 * XREFs of std::_Ref_count_resource_APO_NOTIFICATION____lambda_fb374d45151f083911fef4d31606bded___::_scalar_deleting_destructor_ @ 0x14002D600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_resource_APO_NOTIFICATION____lambda_fb374d45151f083911fef4d31606bded___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
