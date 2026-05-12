/*
 * XREFs of sub_1C0020E24 @ 0x1C0020E24
 * Callers:
 *     sub_1C00A3A64 @ 0x1C00A3A64 (sub_1C00A3A64.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

NTSTATUS __fastcall sub_1C0020E24(__int64 a1, IRP *a2)
{
  __int64 v2; // r8
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

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
    return sub_1C0003440(a2, 0, a2->IoStatus.Status);
  }
  return result;
}
