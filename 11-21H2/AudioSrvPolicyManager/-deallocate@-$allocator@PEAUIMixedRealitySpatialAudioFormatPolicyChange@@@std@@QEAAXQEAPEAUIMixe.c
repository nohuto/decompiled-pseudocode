/*
 * XREFs of ?deallocate@?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@QEAAXQEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@_K@Z @ 0x18001DE40
 * Callers:
 *     _std::vector_IMixedRealitySpatialAudioFormatPolicyChange___std::allocator_IMixedRealitySpatialAudioFormatPolicyChange_____::_Emplace_reallocate_IMixedRealitySpatialAudioFormatPolicyChange___const_&__::_1_::catch$0 @ 0x18004514A (_std--vector_IMixedRealitySpatialAudioFormatPolicyChange___std--allocator_IMixedRealitySpatialAu.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<IMixedRealitySpatialAudioFormatPolicyChange *>::deallocate(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
