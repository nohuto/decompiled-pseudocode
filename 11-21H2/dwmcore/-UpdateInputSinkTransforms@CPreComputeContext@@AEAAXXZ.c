/*
 * XREFs of ?UpdateInputSinkTransforms@CPreComputeContext@@AEAAXXZ @ 0x1800CFFF8
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPreComputeContext::UpdateInputSinkTransforms(CPreComputeContext *this)
{
  if ( *((_DWORD *)this + 456) )
    NtUpdateInputSinkTransforms(*((_QWORD *)this + 225));
  *((_DWORD *)this + 456) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1800, 72LL);
}
