/*
 * XREFs of ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F61C
 * Callers:
 *     __lambda_1638cd6ed2d4615662b3f222b9161cb6_::operator()_::_1_::dtor$1 @ 0x180044C5B (__lambda_1638cd6ed2d4615662b3f222b9161cb6_--operator()_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$2 @ 0x180046518 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$2.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$4 @ 0x18004652A (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$4.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$5 @ 0x18004653C (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

__int64 __fastcall wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(
             v2,
             a2);
  return result;
}
