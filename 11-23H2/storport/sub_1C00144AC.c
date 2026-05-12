/*
 * XREFs of sub_1C00144AC @ 0x1C00144AC
 * Callers:
 *     sub_1C00143F8 @ 0x1C00143F8 (sub_1C00143F8.c)
 *     sub_1C0039ED0 @ 0x1C0039ED0 (sub_1C0039ED0.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 * Callees:
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 */

__int64 __fastcall sub_1C00144AC(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = sub_1C0018124(a1, a2);
  if ( (int)result >= 0 )
    return (unsigned int)a2->IoStatus.Status;
  return result;
}
