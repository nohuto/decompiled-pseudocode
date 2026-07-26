/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C012BDA0
 * Callers:
 *     NdisLWMDeregisterMiniportDriver @ 0x1C005E9A0 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C005F940 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F1C4 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0024D14 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005D700 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r8
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Cu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      a1);
  MiniportQueue = a1->MiniportQueue;
  if ( MiniportQueue )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      a1,
      MiniportQueue);
    if ( SLOBYTE(a1->Flags) < 0 )
      ndisBugCheckEx(0x2BuLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  AssociatedProtocol = a1->AssociatedProtocol;
  if ( AssociatedProtocol )
  {
    AssociatedProtocol->AssociatedMiniDriver = 0LL;
    a1->AssociatedProtocol = 0LL;
  }
  if ( ndisCloseRef(&a1->Ref.SpinLock) )
  {
    ndisDereferenceDriver(a1, 0, 0xFFu);
    if ( (a1->Flags & 0xC0) != 0 )
    {
      ndisWaitForKernelObject(&a1->MiniportsRemovedEvent);
      KeClearEvent(&a1->MiniportsRemovedEvent);
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x6Du,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        a1);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(a1);
  }
}
