/*
 * XREFs of ?ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00B141C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0058140 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005B340 (McTemplateK0xqqq_EtwWriteTransfer.c)
 */

void __fastcall ndisWdfNicActiveAcquireSleepStudy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  __int64 v5; // rsi
  KIRQL v8; // al
  KIRQL v9; // bp
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax

  AoAc = a1->AoAc;
  v5 = *((int *)a3 + 4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  ++*((_DWORD *)a2 + 7);
  v9 = v8;
  v10 = *((_DWORD *)AoAc + 13) + 1;
  *((_DWORD *)AoAc + 13) = v10;
  if ( *((_BYTE *)AoAc + 1073) && v10 == 1 )
    *((_QWORD *)AoAc + 105) = MEMORY[0xFFFFF78000000008];
  v11 = v5;
  v12 = *((_DWORD *)AoAc + v5 + 117) + 1;
  *((_DWORD *)AoAc + v5 + 117) = v12;
  if ( *((_BYTE *)AoAc + 1073) && v12 == 1 )
  {
    if ( (_DWORD)v5 == 15 )
    {
      ndisAoAcPauseRefTimeStats(AoAc);
      *((_QWORD *)AoAc + 98) = MEMORY[0xFFFFF78000000008];
    }
    else if ( !*((_DWORD *)AoAc + 132) )
    {
      v11 = 2 * (v5 + 34);
      *((_QWORD *)AoAc + 2 * v5 + 68) = MEMORY[0xFFFFF78000000008];
    }
  }
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0xqqq_EtwWriteTransfer(
      v11,
      &NicActiveAcquired,
      &a1->InterfaceGuid,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)AoAc + 13));
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
}
