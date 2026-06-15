/*
 * XREFs of ??$emplace_back@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA?A_TAEBU_GUID@@@Z @ 0x1800EAFB8
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800EBDE4 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?UpdatePMPEffectToggle@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800EE410 (-UpdatePMPEffectToggle@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 *     ?CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105A60 (-CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeP.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<_GUID>::emplace_back<_GUID const &>(__int64 a1, _OWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<_GUID>::_Emplace_reallocate<_GUID const &>((const void **)a1, v3, a2);
  *(_OWORD *)v3 = *a2;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
