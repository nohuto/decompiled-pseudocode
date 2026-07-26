/*
 * XREFs of ?ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00CBED8
 * Callers:
 *     ndisDriverDispatch @ 0x1C0002AE0 (ndisDriverDispatch.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ndisLwmCreateIrpHandler @ 0x1C00CBD40 (ndisLwmCreateIrpHandler.c)
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBF98 (ndisLwmIoctlIrpHandler.c)
 */

__int64 __fastcall ndisLwmDispatchIrp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v4; // ebx
  unsigned __int8 MajorFunction; // al
  unsigned int IrpHandler; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = -1073741637;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction )
  {
    if ( MajorFunction == 2 )
    {
      ExFreePoolWithTag(CurrentStackLocation->FileObject->FsContext, 0);
      goto LABEL_5;
    }
    if ( MajorFunction != 14 )
    {
      if ( MajorFunction != 18 )
      {
LABEL_10:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 0);
        goto LABEL_11;
      }
LABEL_5:
      v4 = 0;
      goto LABEL_10;
    }
    IrpHandler = ndisLwmIoctlIrpHandler(a2);
  }
  else
  {
    IrpHandler = ndisLwmCreateIrpHandler(a2, CurrentStackLocation);
  }
  v4 = IrpHandler;
  if ( IrpHandler != 259 )
    goto LABEL_10;
LABEL_11:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
