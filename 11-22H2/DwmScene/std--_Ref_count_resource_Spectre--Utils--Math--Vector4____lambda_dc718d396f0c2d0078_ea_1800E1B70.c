/*
 * XREFs of std::_Ref_count_resource_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::_scalar_deleting_destructor_ @ 0x1800E1B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_resource_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
