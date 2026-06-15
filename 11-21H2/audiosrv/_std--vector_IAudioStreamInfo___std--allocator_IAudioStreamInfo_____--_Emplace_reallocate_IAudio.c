/*
 * XREFs of _std::vector_IAudioStreamInfo___std::allocator_IAudioStreamInfo_____::_Emplace_reallocate_IAudioStreamInfo___const_&__::_1_::catch$0 @ 0x18006D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IAudioStreamInfo___std::allocator_IAudioStreamInfo_____::_Emplace_reallocate_IAudioStreamInfo___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), 8LL * *(_QWORD *)(a2 + 96));
  throw;
}
