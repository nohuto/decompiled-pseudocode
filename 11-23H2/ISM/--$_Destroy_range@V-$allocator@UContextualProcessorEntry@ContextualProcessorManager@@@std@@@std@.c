/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1801BDDF4
 * Callers:
 *     _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$5 @ 0x18006F86F (_std--vector_ContextualProcessorManager--ContextualProcessorEntry_std--allocator_ContextualProce.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1801BDE2C (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCo.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801BDEC4 (--1ContextualProcessorManager@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
