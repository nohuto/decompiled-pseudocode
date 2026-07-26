/*
 * XREFs of ?ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00ABB2C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052F68 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C0055F0C (McTemplateK0xqqq_EtwWriteTransfer.c)
 */

void __fastcall ndisWdfNicActiveReleaseSleepStudy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  __int64 v5; // rsi
  KIRQL v8; // al
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // r9
  KIRQL v12; // bp
  int v14; // eax

  AoAc = a1->AoAc;
  v5 = *((int *)a3 + 4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v10 = *((_DWORD *)a2 + 7);
  v11 = 0LL;
  v12 = v8;
  if ( v10 )
  {
    *((_DWORD *)a2 + 7) = v10 - 1;
    if ( --*((_DWORD *)AoAc + 13) < 0 )
      NT_ASSERT("AoAc->ActiveRef >= 0");
    v14 = *((_DWORD *)AoAc + v5 + 117) - 1;
    *((_DWORD *)AoAc + v5 + 117) = v14;
    if ( v14 < 0 )
      NT_ASSERT("AoAc->ComponentRefCounts[ComponentId] >= 0");
    if ( ndisCsResiliency && !v14 )
    {
      v9 = 2 * (v5 + 34);
      if ( *((_QWORD *)AoAc + 2 * v5 + 68) )
      {
        *((_QWORD *)AoAc + 2 * v5 + 67) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 2 * v5 + 68);
        *((_QWORD *)AoAc + 2 * v5 + 68) = 0LL;
      }
      if ( (_DWORD)v5 == 6 )
        ndisAoAcStartRefTimeStats(AoAc);
    }
    if ( *((_DWORD *)AoAc + 13) == (_DWORD)v11 && *((_QWORD *)AoAc + 105) != v11 )
    {
      *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
      *((_QWORD *)AoAc + 105) = v11;
    }
    if ( (byte_1C00EE583 & 4) != 0 )
      McTemplateK0xqqq_EtwWriteTransfer(
        v9,
        &NicActiveReleased,
        &a1->InterfaceGuid,
        *((_QWORD *)a3 + 1),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)AoAc + 13));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v12);
}
