/*
 * XREFs of sub_1C0012408 @ 0x1C0012408
 * Callers:
 *     sub_1C0011EE8 @ 0x1C0011EE8 (sub_1C0011EE8.c)
 * Callees:
 *     sub_1C0012900 @ 0x1C0012900 (sub_1C0012900.c)
 *     sub_1C0050054 @ 0x1C0050054 (sub_1C0050054.c)
 *     sub_1C00500F4 @ 0x1C00500F4 (sub_1C00500F4.c)
 */

NTSTATUS __fastcall sub_1C0012408(__int64 a1, IRP *a2, int a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Options; // ebp
  const char *v7; // r14
  struct _IO_STACK_LOCATION *v8; // rax
  NTSTATUS v9; // eax
  int v10; // edi
  const char *v12; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart >= 6 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7 = "System";
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    v12 = "System";
    if ( Options )
      v12 = "Device";
    sub_1C0050054(off_1C0093070->AttachedDevice, 13, a3, a1, (char)a2, (__int64)v12);
  }
  if ( !Options )
  {
    v9 = sub_1C0012900(a1, a2);
    goto LABEL_7;
  }
  if ( Options == 1 )
  {
    v8 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
    *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
    v8[-1].FileObject = v8->FileObject;
    v8[-1].Control = 0;
    v9 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_7:
    v10 = v9;
    goto LABEL_8;
  }
  v10 = -1073741823;
LABEL_8:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    if ( Options )
      v7 = "Device";
    sub_1C00500F4(off_1C0093070->AttachedDevice, 14, a3, a1, (char)a2, (__int64)v7, v10);
  }
  return v10;
}
