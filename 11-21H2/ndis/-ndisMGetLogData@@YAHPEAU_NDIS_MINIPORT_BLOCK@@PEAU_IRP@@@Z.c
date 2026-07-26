/*
 * XREFs of ?ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006B944
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisMGetLogData(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  struct _NDIS_LOG *Log; // rbx
  KSPIN_LOCK *v5; // r15
  ULONG ByteCount; // edi
  _MDL *MdlAddress; // rcx
  char *MappedSystemVa; // rbp
  __int64 v9; // rcx
  char *v10; // rdx
  ULONG v11; // eax
  char *v12; // rcx
  size_t v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  KIRQL Irql; // [rsp+60h] [rbp+8h] BYREF

  Irql = 0;
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  Log = a1->Log;
  a1->MiniportThread = KeGetCurrentThread();
  if ( Log )
  {
    v5 = (KSPIN_LOCK *)((char *)Log + 8);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)Log + 1);
    ByteCount = *((_DWORD *)Log + 7);
    if ( ByteCount )
    {
      MdlAddress = a2->MdlAddress;
      if ( MdlAddress->ByteCount <= ByteCount )
        ByteCount = MdlAddress->ByteCount;
      if ( (MdlAddress->MdlFlags & 5) != 0 )
        MappedSystemVa = (char *)MdlAddress->MappedSystemVa;
      else
        MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( MappedSystemVa )
      {
        v9 = *((unsigned int *)Log + 9);
        v10 = (char *)Log + v9 + 40;
        v11 = *((_DWORD *)Log + 6) - v9;
        v12 = MappedSystemVa;
        if ( v11 < ByteCount )
        {
          memmove(MappedSystemVa, v10, v11);
          v10 = (char *)Log + 40;
          v14 = *((unsigned int *)Log + 6);
          v13 = ByteCount + *((_DWORD *)Log + 9) - (_DWORD)v14;
          v12 = &MappedSystemVa[v14 - *((unsigned int *)Log + 9)];
        }
        else
        {
          v13 = ByteCount;
        }
        memmove(v12, v10, v13);
        *((_DWORD *)Log + 9) += ByteCount;
        *((_DWORD *)Log + 7) -= ByteCount;
        v15 = *((_DWORD *)Log + 9);
        v16 = *((_DWORD *)Log + 6);
        if ( v15 >= v16 )
          *((_DWORD *)Log + 9) = v15 - v16;
        v17 = 0;
        a2->IoStatus.Information = ByteCount;
      }
      else
      {
        v17 = -1073741670;
      }
    }
    else if ( *((_QWORD *)Log + 2) )
    {
      v17 = -1073741823;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&a2->CancelRoutine, (__int64)ndisCancelLogIrp);
      *((_QWORD *)Log + 2) = a2;
      v17 = 259;
    }
    KeReleaseSpinLockFromDpcLevel(v5);
  }
  else
  {
    v17 = -1073741823;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  IoReleaseCancelSpinLock(Irql);
  return v17;
}
