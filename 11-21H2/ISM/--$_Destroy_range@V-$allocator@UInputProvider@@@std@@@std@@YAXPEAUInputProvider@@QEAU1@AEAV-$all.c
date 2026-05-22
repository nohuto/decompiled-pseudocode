/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x18007F964
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$5 @ 0x180055F4A (_std--vector_InputProvider_std--allocator_InputProvider___--_Emplace_reallocate_InputProvider__-.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18007F9B0 (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x180080158 (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800B49E4 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<InputProvider>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)(v3 + 16));
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
