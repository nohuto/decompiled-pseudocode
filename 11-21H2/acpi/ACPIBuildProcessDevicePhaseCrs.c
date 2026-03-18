/*
 * XREFs of ACPIBuildProcessDevicePhaseCrs @ 0x1C0008460
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C00298D0 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     ACPIMatchKernelPorts @ 0x1C0059354 (ACPIMatchKernelPorts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCrs(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 760), 1397903455LL) != 0 ? 28 : 16;
  if ( *(_QWORD *)(a1 + 56) && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(v2 + 2) == 3 )
    {
      if ( (*(_DWORD *)(v1 + 8) & 0x4000000) != 0 )
        ACPIMatchKernelPorts(v1, v2);
      PnpBiosSetFlagsForNotableInterrupts(v1, *(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 24));
    }
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs(v2, 1LL);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C006FB8B;
  v6 = &unk_1C006FB8B;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(void **)(v1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      6,
      35,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      0,
      v1,
      (__int64)v5,
      v9);
  }
  v7 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v7);
  return 0LL;
}
