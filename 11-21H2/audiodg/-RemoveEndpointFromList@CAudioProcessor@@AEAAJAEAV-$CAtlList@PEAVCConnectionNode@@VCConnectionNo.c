/*
 * XREFs of ?RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUIAudioEndpoint@@@Z @ 0x1400085DC
 * Callers:
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140008510 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x14000863C (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioProcessor::RemoveEndpointFromList(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rdx

  v3 = (_QWORD *)*a2;
  while ( v3 )
  {
    v5 = v3[2];
    v6 = v3;
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v5 + 112) == a3 )
    {
      ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(a2, v6);
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
      return 0LL;
    }
  }
  return 2289827866LL;
}
