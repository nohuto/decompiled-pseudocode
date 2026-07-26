/*
 * XREFs of ?ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00B156C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0058374 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005B360 (McTemplateK0xqqq_EtwWriteTransfer.c)
 */

void __fastcall ndisWdfNicActiveReleaseSleepStudy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  __int64 v5; // rsi
  KIRQL v8; // al
  int v9; // edx
  __int64 v10; // r9
  KIRQL v11; // bp
  __int64 v13; // rcx
  int v14; // eax

  AoAc = a1->AoAc;
  v5 = *((int *)a3 + 4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v9 = *((_DWORD *)a2 + 7);
  v10 = 0LL;
  v11 = v8;
  if ( v9 )
  {
    *((_DWORD *)a2 + 7) = v9 - 1;
    if ( --*((_DWORD *)AoAc + 13) < 0 )
      NT_ASSERT("AoAc->ActiveRef >= 0");
    v13 = v5;
    v14 = *((_DWORD *)AoAc + v5 + 117) - 1;
    *((_DWORD *)AoAc + v5 + 117) = v14;
    if ( v14 < 0 )
      NT_ASSERT("AoAc->ComponentRefCounts[ComponentId] >= 0");
    if ( ndisCsResiliency && !v14 )
    {
      if ( *((_QWORD *)AoAc + 2 * v5 + 68) )
      {
        v13 = 2 * v5;
        *((_QWORD *)AoAc + 2 * v5 + 67) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 2 * v5 + 68);
        *((_QWORD *)AoAc + 2 * v5 + 68) = 0LL;
      }
      if ( (_DWORD)v5 == 6 )
        ndisAoAcStartRefTimeStats(AoAc);
    }
    if ( *((_DWORD *)AoAc + 13) == (_DWORD)v10 && *((_QWORD *)AoAc + 105) != v10 )
    {
      *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
      *((_QWORD *)AoAc + 105) = v10;
    }
    if ( (byte_1C00F7643 & 4) != 0 )
      McTemplateK0xqqq_EtwWriteTransfer(
        v13,
        &NicActiveReleased,
        &a1->InterfaceGuid,
        *((_QWORD *)a3 + 1),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)AoAc + 13));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
}
