/*
 * XREFs of sub_1C00A3A64 @ 0x1C00A3A64
 * Callers:
 *     sub_1C00A39D0 @ 0x1C00A39D0 (sub_1C00A39D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0020E24 @ 0x1C0020E24 (sub_1C0020E24.c)
 *     sub_1C0025C32 @ 0x1C0025C32 (sub_1C0025C32.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C00A3BF8 @ 0x1C00A3BF8 (sub_1C00A3BF8.c)
 *     sub_1C00ABD20 @ 0x1C00ABD20 (sub_1C00ABD20.c)
 */

NTSTATUS __fastcall sub_1C00A3A64(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG_PTR v4; // rbx
  IRP *v5; // rdi
  __int64 v7; // r12
  __int64 v8; // r15
  int v9; // esi
  int v10; // eax
  unsigned int MinorFunction; // r9d
  int v12; // eax
  unsigned int v13; // ebp
  unsigned int v14; // r8d
  bool v16; // zf
  NTSTATUS v17; // ebx
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  DWORD LowPart; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+34h] [rbp-24h]
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // [rsp+38h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  v20 = 0;
  v5 = a2;
  v7 = 0LL;
  v8 = 0LL;
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
    return sub_1C0020E24(a1, a2);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x40) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EE1C(
      (__int64)off_1C0093070->AttachedDevice,
      0xAu,
      (__int64)&unk_1C008AB38,
      CurrentStackLocation->MinorFunction);
  }
  v9 = **(_DWORD **)(a1 + 64);
  if ( v9 == 1094997074 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v10 = sub_1C00076F4(v8);
  }
  else
  {
    if ( v9 != 1431193940 )
      goto LABEL_8;
    LOBYTE(a3) = 1;
    v7 = *(_QWORD *)(a1 + 64);
    v10 = sub_1C00071D4(v7, (__int64)v5, a3);
  }
  if ( v10 < 0 )
  {
    v14 = v10;
    return sub_1C0003440(v5, 0, v14);
  }
LABEL_8:
  v18[0] = CurrentStackLocation->Parameters.Create.SecurityContext;
  v18[1] = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5
      || !CurrentStackLocation->MinorFunction
      || MinorFunction == 1
      || MinorFunction == 2
      || MinorFunction == 3 )
    {
      goto LABEL_38;
    }
    v16 = MinorFunction == 4;
  }
  else
  {
    a2 = (IRP *)(MinorFunction - 6);
    if ( MinorFunction == 6 )
      goto LABEL_38;
    a2 = (IRP *)(MinorFunction - 7);
    if ( MinorFunction == 7 )
      goto LABEL_38;
    a2 = (IRP *)(MinorFunction - 8);
    if ( MinorFunction == 8 )
    {
      v12 = sub_1C00A3BF8(a1, v18);
LABEL_13:
      v5->IoStatus.Status = v12;
      v13 = v12;
      if ( v12 >= 0 )
        v4 = LowPart;
      v5->IoStatus.Information = v4;
      if ( v9 == 1094997074 )
      {
        sub_1C0025C32(v8);
      }
      else if ( v9 == 1431193940 )
      {
        sub_1C000729C(v7);
      }
      v14 = v13;
      return sub_1C0003440(v5, 0, v14);
    }
    v16 = (_DWORD)a2 == 1;
  }
  if ( v16 )
  {
LABEL_38:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    v12 = sub_1C00ABD20(a1, a2, v18);
    goto LABEL_13;
  }
  v17 = sub_1C0020E24(a1, v5);
  if ( v9 == 1094997074 )
  {
    sub_1C0025C32(v8);
  }
  else if ( v9 == 1431193940 )
  {
    sub_1C000729C(v7);
  }
  return v17;
}
