/*
 * XREFs of ?deallocate@?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@QEAAXQEAPEAUIAudioAppVolumePolicyChange@@_K@Z @ 0x18001DE28
 * Callers:
 *     _std::vector_IAudioAppVolumePolicyChange___std::allocator_IAudioAppVolumePolicyChange_____::_Emplace_reallocate_IAudioAppVolumePolicyChange___const_&__::_1_::catch$0 @ 0x180045120 (_std--vector_IAudioAppVolumePolicyChange___std--allocator_IAudioAppVolumePolicyChange_____--_Emp.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<IAudioAppVolumePolicyChange *>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
