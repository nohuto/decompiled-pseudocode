/*
 * XREFs of ?SetupInputConnectionsFromEndpoints@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEB_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039C8C
 * Callers:
 *     ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14000B010 (-Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioProcessor::SetupInputConnectionsFromEndpoints(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v7; // rbx
  __int64 result; // rax

  v4 = (_QWORD *)*a2;
  while ( v4 )
  {
    v7 = v4[2];
    v4 = (_QWORD *)*v4;
    *(_DWORD *)(*(_QWORD *)(v7 + 104) + 8LL) = (int)(*(float *)(v7 + 52) * (double)(int)*a3 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v7 + 120) + 24LL))(
      *(_QWORD *)(v7 + 120),
      *(_QWORD *)(v7 + 104),
      0LL);
    result = *(_QWORD *)(a4 + 24);
    *(_QWORD *)(*(_QWORD *)(v7 + 104) + 24LL) = result;
  }
  return result;
}
