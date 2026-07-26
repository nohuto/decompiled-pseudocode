/*
 * XREFs of NdisCmRegisterAddressFamilyEx @ 0x1C00BD390
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00072AC (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F534 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C0156E30 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamilyEx(NDIS_HANDLE NdisBindingHandle, PCO_ADDRESS_FAMILY AddressFamily)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v5; // rbp
  NDIS_STATUS v6; // ebx
  _NDIS_AF_LIST *i; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *Pool2; // r14
  __int128 v10; // xmm1
  struct _NDIS_AF_NOTIFY *v11; // rcx
  KIRQL v12; // dl
  int v13; // edx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  struct _NDIS_AF_NOTIFY *v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v5 = *((_QWORD *)NdisBindingHandle + 3);
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)v3,
      v5,
      NdisBindingHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x20000u;
  if ( *(_BYTE *)(v5 + 632) == 0xA5 )
  {
    if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      v6 = -1073676286;
    }
    else
    {
      ndisMReferenceOpen((__int64)NdisBindingHandle, 0xDu);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      if ( (v3->Flags & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v5 + 56) >= 5u )
        {
          for ( i = v3->CallMgrAfList; i; i = i->NextAf )
          {
            v8 = *(_QWORD *)&i->AddressFamily.AddressFamily - *(_QWORD *)&AddressFamily->AddressFamily;
            if ( !v8 )
              v8 = i->AddressFamily.MinorVersion - (unsigned __int64)AddressFamily->MinorVersion;
            if ( !v8 )
            {
              v6 = -1073741823;
              goto LABEL_25;
            }
          }
          Pool2 = (_QWORD *)ExAllocatePool2(64LL, 320LL, 1868776526);
          if ( Pool2 )
          {
            v6 = ndisCreateNotifyQueue(v3, 0LL, (struct CO_ADDRESS_FAMILY *)AddressFamily, &v16);
            if ( v6 )
            {
              ExFreePoolWithTag(Pool2, 0);
            }
            else
            {
              Pool2[2] = *(_QWORD *)&AddressFamily->AddressFamily;
              *((_DWORD *)Pool2 + 6) = AddressFamily->MinorVersion;
              *(_OWORD *)(Pool2 + 21) = *(_OWORD *)(v5 + 632);
              *(_OWORD *)(Pool2 + 23) = *(_OWORD *)(v5 + 648);
              *(_OWORD *)(Pool2 + 25) = *(_OWORD *)(v5 + 664);
              *(_OWORD *)(Pool2 + 27) = *(_OWORD *)(v5 + 680);
              *(_OWORD *)(Pool2 + 29) = *(_OWORD *)(v5 + 696);
              *(_OWORD *)(Pool2 + 31) = *(_OWORD *)(v5 + 712);
              *(_OWORD *)(Pool2 + 33) = *(_OWORD *)(v5 + 728);
              *(_OWORD *)(Pool2 + 35) = *(_OWORD *)(v5 + 744);
              v10 = *(_OWORD *)(v5 + 760);
              Pool2[1] = NdisBindingHandle;
              *(_OWORD *)(Pool2 + 37) = v10;
              v11 = v16;
              *Pool2 = v3->CallMgrAfList;
              *((_DWORD *)Pool2 + 78) = 6;
              v3->CallMgrAfList = (_NDIS_AF_LIST *)Pool2;
              *((_QWORD *)NdisBindingHandle + 131) = *(_QWORD *)(v5 + 640);
              *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v5 + 648);
              *((_QWORD *)NdisBindingHandle + 133) = *(_QWORD *)(v5 + 728);
              *((_QWORD *)NdisBindingHandle + 134) = *(_QWORD *)(v5 + 736);
              *((_QWORD *)NdisBindingHandle + 144) = *(_QWORD *)(v5 + 760);
              *((_QWORD *)NdisBindingHandle + 145) = *(_QWORD *)(v5 + 752);
              if ( v11 )
                ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)v11 + 8), (WORK_QUEUE_TYPE)40);
            }
          }
          else
          {
            v6 = -1073741670;
          }
        }
        else
        {
          v6 = -1073676284;
        }
      }
      else
      {
        v6 = -1073676283;
      }
LABEL_25:
      ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xDu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    v6 = -1073676283;
  }
  v12 = NewIrql;
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v12);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0x13u,
      0x13u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)v3,
      v5,
      (char)NdisBindingHandle,
      v6);
  return v6;
}
