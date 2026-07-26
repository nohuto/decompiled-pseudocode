/*
 * XREFs of NdisLWMDeregisterMiniportDriver @ 0x1C005E9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C012BDA0 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisLWMDeregisterMiniportDriver(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x83u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      a1);
  if ( SLOBYTE(a1->Flags) >= 0 )
    ndisBugCheckEx(0x29uLL, 1uLL, (ULONG_PTR)a1, 0LL);
  ndisInternalDeregisterMiniportDriver(a1);
  ExFreePoolWithTag(a1, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x84u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids);
}
