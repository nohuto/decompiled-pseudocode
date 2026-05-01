/*
 * XREFs of std::_Ref_count_resource_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___::_scalar_deleting_destructor_ @ 0x18001D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_resource_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
