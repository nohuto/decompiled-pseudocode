/*
 * XREFs of RaidCompleteWmiIrp @ 0x1C0020024
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 */

NTSTATUS __fastcall RaidCompleteWmiIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // r8
  NTSTATUS result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  v2 = *(_QWORD *)(a1 + 64);
  result = -1073741811;
  if ( *(_DWORD *)v2 == 1094997074 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 24), a2);
  }
  else if ( *(_DWORD *)v2 == 1431193940 )
  {
    return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
  }
  return result;
}
