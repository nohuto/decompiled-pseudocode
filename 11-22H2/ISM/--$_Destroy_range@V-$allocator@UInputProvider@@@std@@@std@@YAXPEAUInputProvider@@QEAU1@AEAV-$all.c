/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A9184
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$5 @ 0x180081D95 (_std--vector_InputProvider_std--allocator_InputProvider___--_Emplace_reallocate_InputProvider__-.c)
 *     ??1InputProviderManager@@QEAA@XZ @ 0x1800A91DC (--1InputProviderManager@@QEAA@XZ.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A975C (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800DCD38 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
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
      result = Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)(v3 + 16));
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
