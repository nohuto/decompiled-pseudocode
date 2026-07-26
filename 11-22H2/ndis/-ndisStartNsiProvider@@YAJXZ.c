/*
 * XREFs of ?ndisStartNsiProvider@@YAJXZ @ 0x1C011B5A0
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C011B540 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 */

__int64 ndisStartNsiProvider(void)
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  char v3[4]; // [rsp+28h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &NmrProviderHandle);
  v1 = v0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v0;
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      *(_DWORD *)v3);
  }
  return v1;
}
