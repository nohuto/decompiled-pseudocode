/*
 * XREFs of ?GetOutputEndpointBuffers@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400820E4
 * Callers:
 *     ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14001A0F0 (-Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioProcessor::GetOutputEndpointBuffers(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // rbx

  v3 = (_QWORD *)*a2;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    **(_QWORD **)(v5 + 104) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v5 + 128) + 24LL))(
                                *(_QWORD *)(v5 + 128),
                                *(unsigned int *)(*(_QWORD *)(v5 + 104) + 8LL),
                                a3);
  }
}
