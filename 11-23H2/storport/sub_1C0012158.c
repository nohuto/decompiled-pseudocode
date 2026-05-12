/*
 * XREFs of sub_1C0012158 @ 0x1C0012158
 * Callers:
 *     sub_1C0011EE8 @ 0x1C0011EE8 (sub_1C0011EE8.c)
 * Callees:
 *     sub_1C0012228 @ 0x1C0012228 (sub_1C0012228.c)
 *     sub_1C0012300 @ 0x1C0012300 (sub_1C0012300.c)
 *     sub_1C0050054 @ 0x1C0050054 (sub_1C0050054.c)
 *     sub_1C00500F4 @ 0x1C00500F4 (sub_1C00500F4.c)
 */

NTSTATUS __fastcall sub_1C0012158(__int64 a1, IRP *a2, int a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int LowPart; // ebx
  ULONG Options; // ebp
  const char *v8; // r14
  int v9; // eax
  int v10; // ebx
  const char *v12; // rax
  struct _IO_STACK_LOCATION *v13; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = "System";
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    v12 = "System";
    if ( Options )
      v12 = "Device";
    sub_1C0050054(off_1C0093070->AttachedDevice, 15, a3, a1, (char)a2, (__int64)v12);
  }
  if ( !Options )
  {
    if ( LowPart > 6 )
    {
      v13 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v13[-1].MajorFunction = *(_OWORD *)&v13->MajorFunction;
      *(_OWORD *)&v13[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v13->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v13[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v13->Parameters.SetQuota + 6);
      v13[-1].FileObject = v13->FileObject;
      v13[-1].Control = 0;
      return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v9 = sub_1C0012228(a1, a2);
    goto LABEL_6;
  }
  if ( Options == 1 )
  {
    v9 = sub_1C0012300(a1, a2);
LABEL_6:
    v10 = v9;
    goto LABEL_7;
  }
  v10 = -1073741823;
LABEL_7:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    if ( Options )
      v8 = "Device";
    sub_1C00500F4(off_1C0093070->AttachedDevice, 16, a3, a1, (char)a2, (__int64)v8, v10);
  }
  return v10;
}
