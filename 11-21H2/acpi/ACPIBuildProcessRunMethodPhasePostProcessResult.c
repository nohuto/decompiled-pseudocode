/*
 * XREFs of ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004AA30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     PerformDLMObjectBindings @ 0x1C0066E9C (PerformDLMObjectBindings.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhasePostProcessResult(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  char v4; // r8
  void *v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx

  v1 = (*(_DWORD *)(a1 + 84) & 0x100) == 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v1 )
  {
    PerformDLMObjectBindings(a1 + 88, **(_QWORD **)(a1 + 56));
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs(a1 + 88, 1u);
  }
  v4 = 0;
  v5 = &unk_1C006FB8B;
  v6 = &unk_1C006FB8B;
  if ( v3 )
  {
    v7 = v3[1];
    v4 = (char)v3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v3[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (void *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x44u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      0,
      v4,
      (__int64)v5,
      (__int64)v6);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
