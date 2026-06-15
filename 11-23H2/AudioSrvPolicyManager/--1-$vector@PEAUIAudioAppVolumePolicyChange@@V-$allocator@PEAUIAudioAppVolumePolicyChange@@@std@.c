/*
 * XREFs of ??1?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@QEAA@XZ @ 0x180012254
 * Callers:
 *     _CApplication::NotifyVolumePolicyChange_::_1_::dtor$0 @ 0x180047DB0 (_CApplication--NotifyVolumePolicyChange_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<IAudioAppVolumePolicyChange *>::~vector<IAudioAppVolumePolicyChange *>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
