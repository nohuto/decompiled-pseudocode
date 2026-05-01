/*
 * XREFs of ??1RoInitializeWrapper@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18055E6F4
 * Callers:
 *     __lambda_3e351382f4c08c633b195a0370cc279b_::operator()_::_1_::dtor$1 @ 0x180216DFC (__lambda_3e351382f4c08c633b195a0370cc279b_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper(
        Microsoft::WRL::Wrappers::RoInitializeWrapper *this)
{
  if ( *(int *)this >= 0 )
    RoUninitialize();
}
