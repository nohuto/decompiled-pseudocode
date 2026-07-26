/*
 * XREFs of ndisDispatchRequest @ 0x1C0002B08
 * Callers:
 *     ndisDriverDispatch @ 0x1C0002AE0 (ndisDriverDispatch.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C001DB8C (WPP_RECORDER_SF_qLd.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001EA90 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x1C0027114 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ndisDriverSystemDispatch @ 0x1C0034C60 (ndisDriverSystemDispatch.c)
 *     Feature_3003324730__private_IsEnabledDeviceUsage @ 0x1C00373E8 (Feature_3003324730__private_IsEnabledDeviceUsage.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0057AA0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B6C (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005B360 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B8B6C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v4; // ebx
  unsigned int v6; // eax
  char *v7; // rdi
  struct _NDIS_MINIPORT_BLOCK *v8; // rsi
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v10; // al
  KIRQL v11; // r12
  char **v12; // rdx
  void **v13; // rcx
  int v14; // edx
  int v15; // ecx
  void *v16; // rcx
  void *FsContext; // rcx
  _FILE_OBJECT *v18; // rax
  __int64 Pool2; // rax
  __int64 v20; // rdi
  void *v21; // r8
  _FILE_OBJECT *FileObject; // rax
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 259;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0u:
      Pool2 = ExAllocatePool2(64LL, 56LL, 1668236366LL);
      v20 = Pool2;
      if ( Pool2 )
      {
        v21 = ndisSecurityDescriptor;
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)Pool2 = ndisCheckAccess(a2, CurrentStackLocation, v21);
        *(_BYTE *)(v20 + 1) = ndisCheckAccess(a2, CurrentStackLocation, &unk_1C00DADD0);
        *(_BYTE *)(v20 + 2) = ndisCheckAccess(a2, CurrentStackLocation, &unk_1C00F5D08);
        FileObject = CurrentStackLocation->FileObject;
        v24 = 0LL;
        FileObject->FsContext = (void *)v20;
        _InterlockedIncrement(&dword_1C00F5C28);
      }
      else
      {
        v24 = 0LL;
        v4 = -1073741670;
      }
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v24);
      goto LABEL_40;
    case 2u:
      if ( !(unsigned int)Feature_3003324730__private_IsEnabledDeviceUsage() )
        goto LABEL_40;
      v18 = CurrentStackLocation->FileObject;
      FsContext = v18->FsContext;
      v18->FsContext = 0LL;
      if ( !FsContext )
        goto LABEL_28;
      goto LABEL_27;
    case 0xEu:
      v6 = ndisHandlePnPRequest(a2);
      goto LABEL_31;
    case 0xFu:
LABEL_40:
      a2->IoStatus.Status = v4;
      IofCompleteRequest(a2, 2);
      goto LABEL_41;
    case 0x12u:
      v7 = (char *)CurrentStackLocation->FileObject->FsContext;
      v8 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 4);
      if ( *((_DWORD *)v7 + 6)
        && v8
        && ndisReferenceMiniportByHandle(*((struct _NDIS_MINIPORT_BLOCK **)v7 + 4), 0, MPREF_AOAC_CLEANUP) )
      {
        AoAc = v8->AoAc;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
        v11 = v10;
        if ( *((_QWORD *)v7 + 4) )
        {
          v12 = (char **)*((_QWORD *)v7 + 1);
          if ( v12[1] != v7 + 8 || (v13 = (void **)*((_QWORD *)v7 + 2), *v13 != v7 + 8) )
            __fastfail(3u);
          *v13 = v12;
          v12[1] = (char *)v13;
          --*((_DWORD *)AoAc + 6);
          if ( *((int *)v7 + 7) > 0 )
          {
            ndisAoAcActiveRefSubtract(AoAc, *((unsigned int *)v7 + 6));
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qLd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v14,
                14,
                40,
                (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
                (char)v8,
                *((_DWORD *)v7 + 6),
                *((_DWORD *)AoAc + 13));
            if ( (byte_1C00F7643 & 4) != 0 )
              McTemplateK0xqqq_EtwWriteTransfer(
                v15,
                (unsigned int)&NicActiveReleased,
                (_DWORD)v8 + 4008,
                v8->NetLuid.Value,
                *((_DWORD *)v7 + 6),
                0,
                *((_DWORD *)AoAc + 13));
          }
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
          ndisNicQuietCheckRef(v8);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
        }
        ndisDereferenceMiniport(v8, MPREF_AOAC_CLEANUP);
      }
      v16 = (void *)*((_QWORD *)v7 + 6);
      if ( v16 )
      {
        ndisIfDereferenceCompartmentForUser(v16);
        *((_QWORD *)v7 + 6) = 0LL;
      }
      if ( (unsigned int)Feature_3003324730__private_IsEnabledDeviceUsage() )
        goto LABEL_40;
      FsContext = v7;
      CurrentStackLocation->FileObject->FsContext = 0LL;
LABEL_27:
      ExFreePoolWithTag(FsContext, 0);
LABEL_28:
      _InterlockedDecrement(&dword_1C00F5C28);
      goto LABEL_40;
  }
  if ( CurrentStackLocation->MajorFunction != 23 )
  {
    v4 = -1073741822;
    goto LABEL_40;
  }
  v6 = ndisDriverSystemDispatch(a1, a2);
LABEL_31:
  v4 = v6;
  if ( v6 != 259 )
    goto LABEL_40;
LABEL_41:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
