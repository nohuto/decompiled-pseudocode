/*
 * XREFs of RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00184B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 */

void __fastcall RaidAdapterSetDevicePowerCompletionRoutine(__int64 a1, __int64 a2, int a3, IRP *a4, unsigned int *a5)
{
  __int64 v5; // rbx
  int v7; // esi

  v5 = *(_QWORD *)(a1 + 64);
  if ( a3 == 1 )
  {
    *(_BYTE *)(v5 + 107) &= ~2u;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 41LL, &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids, v5, a4);
    }
    *(_BYTE *)(v5 + 107) &= ~4u;
    v7 = RaidCompleteRequestEx(a4, 0, *a5);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 296));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 42LL, &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids, v5, a4, v7);
    }
  }
}
