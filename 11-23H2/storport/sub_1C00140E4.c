/*
 * XREFs of sub_1C00140E4 @ 0x1C00140E4
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 *     sub_1C0011EE8 @ 0x1C0011EE8 (sub_1C0011EE8.c)
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     sub_1C003746C @ 0x1C003746C (sub_1C003746C.c)
 *     sub_1C0037500 @ 0x1C0037500 (sub_1C0037500.c)
 *     sub_1C00A127C @ 0x1C00A127C (sub_1C00A127C.c)
 *     sub_1C00A6450 @ 0x1C00A6450 (sub_1C00A6450.c)
 *     sub_1C00A7DD8 @ 0x1C00A7DD8 (sub_1C00A7DD8.c)
 *     sub_1C00A7E78 @ 0x1C00A7E78 (sub_1C00A7E78.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C00140E4(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}
