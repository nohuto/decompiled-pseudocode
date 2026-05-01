/*
 * XREFs of ??1?$ComPtr@VHolographicPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CCC9C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicPositioner_IHolographicPositioner__::_1_::dtor$2 @ 0x18021B34B (_Microsoft--WRL--Details--MakeAndInitialize_HolographicPositioner_IHolographicPositioner__--_1_-.c)
 * Callees:
 *     ?Release@CShellSnapComponent@@UEAAKXZ @ 0x18012FD00 (-Release@CShellSnapComponent@@UEAAKXZ.c)
 */

CShellSnapComponent *__fastcall Microsoft::WRL::ComPtr<HolographicPositioner>::~ComPtr<HolographicPositioner>(
        CShellSnapComponent **a1)
{
  CShellSnapComponent *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CShellSnapComponent *)CShellSnapComponent::Release(result);
  }
  return result;
}
