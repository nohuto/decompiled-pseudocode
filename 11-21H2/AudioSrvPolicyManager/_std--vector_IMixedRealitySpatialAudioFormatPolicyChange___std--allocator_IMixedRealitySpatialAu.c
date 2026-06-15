/*
 * XREFs of _std::vector_IMixedRealitySpatialAudioFormatPolicyChange___std::allocator_IMixedRealitySpatialAudioFormatPolicyChange_____::_Emplace_reallocate_IMixedRealitySpatialAudioFormatPolicyChange___const_&__::_1_::catch$0 @ 0x18004514A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@QEAAXQEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@_K@Z @ 0x18001DE40 (-deallocate@-$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@QEAAXQEAPEAUIMixe.c)
 *     _CxxThrowException_0 @ 0x180044437 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IMixedRealitySpatialAudioFormatPolicyChange___std::allocator_IMixedRealitySpatialAudioFormatPolicyChange_____::_Emplace_reallocate_IMixedRealitySpatialAudioFormatPolicyChange___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<IMixedRealitySpatialAudioFormatPolicyChange *>::deallocate(
    a1,
    *(char **)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
