/*
 * XREFs of sub_14074BBC4 @ 0x14074BBC4
 * Callers:
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402D2B6C @ 0x1402D2B6C (sub_1402D2B6C.c)
 *     sub_1402D2BA0 @ 0x1402D2BA0 (sub_1402D2BA0.c)
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 */

NTSTATUS __fastcall sub_14074BBC4(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, char *a3)
{
  BOOLEAN v6; // al
  char v7; // cl
  NTSTATUS v8; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rax

  v6 = sub_1402D2BA0((__int64)AdvancedHeader, *((_QWORD *)a3 + 6));
  v7 = *a3;
  v8 = 0;
  if ( v6 )
  {
    if ( (unsigned __int8)(v7 - 3) > 1u || *((_DWORD *)a3 + 2) )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a3;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *((_OWORD *)a3 + 1);
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *((_OWORD *)a3 + 2);
      *(_OWORD *)&CurrentStackLocation[-1].FileObject = *((_OWORD *)a3 + 3);
      CurrentStackLocation[-1].Context = (PVOID)*((_QWORD *)a3 + 8);
      CurrentStackLocation[-1].Flags |= 2u;
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1402D2AD0;
      v10[-1].Context = AdvancedHeader;
      v10[-1].Control = -32;
      return IofCallDriver((PDEVICE_OBJECT)AdvancedHeader[2].Resource, Irp);
    }
    sub_1402D2B6C((__int64)AdvancedHeader, *((_QWORD *)a3 + 6));
  }
  else
  {
    if ( v7 == 27 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].FilterContexts);
      --AdvancedHeader[1].FileSize.LowPart;
      if ( AdvancedHeader[1].AllocationSize.HighPart || !sub_1402D2BD8(AdvancedHeader, 0, 0) )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].FilterContexts);
    }
    v8 = -1073741202;
  }
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 1);
  return v8;
}
