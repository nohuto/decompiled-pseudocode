/*
 * XREFs of ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180015778
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAMAEA_J@Z @ 0x18003230C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPBMRelatedAudioStreamCategory(struct IAudioProcess *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0;
  if ( a2 >= 0x18 )
    return 2147942487LL;
  *a3 = a2;
  if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 96LL))(a1) && dword_180053FA0[*a3] )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 136LL))(a1)
      || (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 376LL))(a1) )
    {
      v3 = *a3;
    }
    *a3 = v3;
  }
  return 0LL;
}
