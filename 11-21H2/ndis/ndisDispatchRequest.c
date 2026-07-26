/*
 * XREFs of ndisDispatchRequest @ 0x1C0005B98
 * Callers:
 *     ndisDriverDispatch @ 0x1C0005B70 (ndisDriverDispatch.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x1C0027C78 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ndisDriverSystemDispatch @ 0x1C002D5A0 (ndisDriverSystemDispatch.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00526A0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0054740 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C0055F0C (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B3B78 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v4; // ebx
  unsigned int v6; // eax
  __int64 Pool2; // rax
  _BYTE *v9; // rdi
  void *v10; // r8
  char *FsContext; // rdi
  struct _NDIS_MINIPORT_BLOCK *v12; // rsi
  void *v13; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v15; // al
  KIRQL v16; // r12
  char **v17; // rdx
  void **v18; // rcx
  int v19; // edx
  int v20; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 259;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0u:
      Pool2 = ExAllocatePool2(64LL, 56LL, 1668236366LL);
      v9 = (_BYTE *)Pool2;
      if ( Pool2 )
      {
        v10 = ndisSecurityDescriptor;
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)Pool2 = ndisCheckAccess(a2, CurrentStackLocation, v10);
        v9[1] = ndisCheckAccess(a2, CurrentStackLocation, &unk_1C00D0EA0);
        v9[2] = ndisCheckAccess(a2, CurrentStackLocation, &unk_1C00ECD20);
        CurrentStackLocation->FileObject->FsContext = v9;
        _InterlockedIncrement(&dword_1C00ECC08);
      }
      else
      {
        v4 = -1073741670;
      }
      goto LABEL_6;
    case 2u:
      goto LABEL_6;
    case 0xEu:
      v6 = ndisHandlePnPRequest(a2);
      break;
    case 0xFu:
      goto LABEL_6;
    case 0x12u:
      FsContext = (char *)CurrentStackLocation->FileObject->FsContext;
      v12 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)FsContext + 4);
      if ( *((_DWORD *)FsContext + 6)
        && v12
        && ndisReferenceMiniportByHandle(*((struct _NDIS_MINIPORT_BLOCK **)FsContext + 4), 0, MPREF_AOAC_CLEANUP) )
      {
        AoAc = v12->AoAc;
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
        v16 = v15;
        if ( *((_QWORD *)FsContext + 4) )
        {
          v17 = (char **)*((_QWORD *)FsContext + 1);
          if ( v17[1] != FsContext + 8 || (v18 = (void **)*((_QWORD *)FsContext + 2), *v18 != FsContext + 8) )
            __fastfail(3u);
          *v18 = v17;
          v17[1] = (char *)v18;
          --*((_DWORD *)AoAc + 6);
          if ( *((int *)FsContext + 7) > 0 )
          {
            ndisAoAcActiveRefSubtract(AoAc, *((unsigned int *)FsContext + 6));
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qDL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v19,
                14,
                40,
                (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
                (char)v12,
                *((_DWORD *)FsContext + 6),
                *((_DWORD *)AoAc + 13));
            if ( (byte_1C00EE583 & 4) != 0 )
              McTemplateK0xqqq_EtwWriteTransfer(
                v20,
                (unsigned int)&NicActiveReleased,
                (_DWORD)v12 + 4008,
                v12->NetLuid.Value,
                *((_DWORD *)FsContext + 6),
                0,
                *((_DWORD *)AoAc + 13));
          }
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v16);
          ndisNicQuietCheckRef(v12);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v15);
        }
        ndisDereferenceMiniport(v12, MPREF_AOAC_CLEANUP);
      }
      v13 = (void *)*((_QWORD *)FsContext + 6);
      if ( v13 )
      {
        ndisIfDereferenceCompartmentForUser(v13);
        *((_QWORD *)FsContext + 6) = 0LL;
      }
      CurrentStackLocation->FileObject->FsContext = 0LL;
      ExFreePoolWithTag(FsContext, 0);
      _InterlockedDecrement(&dword_1C00ECC08);
      goto LABEL_6;
    case 0x17u:
      v6 = ndisDriverSystemDispatch(a1, a2);
      break;
    default:
      v4 = -1073741822;
      goto LABEL_6;
  }
  v4 = v6;
  if ( v6 != 259 )
  {
LABEL_6:
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 2);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
