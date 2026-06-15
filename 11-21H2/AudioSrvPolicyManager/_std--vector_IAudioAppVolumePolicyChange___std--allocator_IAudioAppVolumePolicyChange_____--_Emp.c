/*
 * XREFs of _std::vector_IAudioAppVolumePolicyChange___std::allocator_IAudioAppVolumePolicyChange_____::_Emplace_reallocate_IAudioAppVolumePolicyChange___const_&__::_1_::catch$0 @ 0x180045120
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@QEAAXQEAPEAUIAudioAppVolumePolicyChange@@_K@Z @ 0x18001DE28 (-deallocate@-$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@QEAAXQEAPEAUIAudioAppVolumePolicy.c)
 *     _CxxThrowException_0 @ 0x180044437 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IAudioAppVolumePolicyChange___std::allocator_IAudioAppVolumePolicyChange_____::_Emplace_reallocate_IAudioAppVolumePolicyChange___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<IAudioAppVolumePolicyChange *>::deallocate(a1, *(char **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
