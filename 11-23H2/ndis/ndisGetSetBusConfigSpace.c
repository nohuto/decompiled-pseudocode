/*
 * XREFs of ndisGetSetBusConfigSpace @ 0x1C00C6710
 * Callers:
 *     NdisReadPciSlotInformation @ 0x1C00C6990 (NdisReadPciSlotInformation.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1C00C6A60 (NdisReadPcmciaAttributeMemory.c)
 *     NdisWritePciSlotInformation @ 0x1C00C6B40 (NdisWritePciSlotInformation.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C00C6C10 (NdisWritePcmciaAttributeMemory.c)
 *     NdisImmediateReadPciSlotInformation @ 0x1C0157570 (NdisImmediateReadPciSlotInformation.c)
 *     NdisImmediateWritePciSlotInformation @ 0x1C0157640 (NdisImmediateWritePciSlotInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisGetSetBusConfigSpace(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, _QWORD, int); // rax
  __int64 v13; // rcx

  v10 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0xAu,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      a1);
  if ( a6 && (*(_DWORD *)(a1 + 3688) & 0x40) != 0 || (*(_DWORD *)(a1 + 3688) & 0x80u) != 0 )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3696);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 3712);
    if ( v13 )
    {
      if ( a6 )
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3704);
      v10 = v12(v13, a5, a3, a2, a4);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0xBu,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      a1);
  return v10;
}
