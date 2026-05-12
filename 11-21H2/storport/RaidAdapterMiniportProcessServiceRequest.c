/*
 * XREFs of RaidAdapterMiniportProcessServiceRequest @ 0x1C0035798
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C003C7C0 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaidAdapterMiniportProcessServiceRequest(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned int LowPart; // ebp

  v4 = a1 + 336;
  if ( v4
    && (v5 = *(_QWORD *)(v4 + 232)) != 0
    && !*(_BYTE *)(a1 + 4242)
    && (*(_BYTE *)(v4 + 248) & 4) != 0
    && *(_QWORD *)(v5 + 144) )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    (*(void (__fastcall **)(__int64))(v5 + 144))(*(_QWORD *)(v4 + 240) + 16LL);
    return 259;
  }
  else
  {
    LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v6 = RaidCompleteRequestEx(a2, 0, 0xC00000BB);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        32LL,
        &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
        a1,
        a2,
        LowPart,
        v6);
    }
  }
  return v6;
}
