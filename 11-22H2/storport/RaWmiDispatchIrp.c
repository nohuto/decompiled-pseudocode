/*
 * XREFs of RaWmiDispatchIrp @ 0x1C00A28B4
 * Callers:
 *     RaDriverSystemControlIrp @ 0x1C00A2820 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteWmiIrp @ 0x1C0020024 (RaidCompleteWmiIrp.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C0024872 (RaidReleaseAdapterRemoveLock.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     RaWmiIrpRegisterRequest @ 0x1C00A2A48 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C00AAB20 (RaWmiIrpNormalRequest.c)
 */

NTSTATUS __fastcall RaWmiDispatchIrp(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int64 v4; // rbx
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
  unsigned int LowPart; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+34h] [rbp-24h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+38h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  v20 = 0;
  v5 = a2;
  v7 = 0LL;
  v8 = 0LL;
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
    return RaidCompleteWmiIrp(a1, a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
      CurrentStackLocation->MinorFunction);
  }
  v9 = **(_DWORD **)(a1 + 64);
  if ( v9 == 1094997074 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v10 = RaidAcquireAdapterRemoveLock(v8);
  }
  else
  {
    if ( v9 != 1431193940 )
      goto LABEL_8;
    LOBYTE(a3) = 1;
    v7 = *(_QWORD *)(a1 + 64);
    v10 = RaUnitAcquireRemoveLock(v7, (__int64)v5, a3);
  }
  if ( v10 < 0 )
  {
    v14 = v10;
    return RaidCompleteRequestEx(v5, 0, v14);
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
      v12 = RaWmiIrpRegisterRequest(a1, v18);
LABEL_13:
      v5->IoStatus.Status = v12;
      v13 = v12;
      if ( v12 >= 0 )
        v4 = LowPart;
      v5->IoStatus.Information = v4;
      if ( v9 == 1094997074 )
      {
        RaidReleaseAdapterRemoveLock(v8);
      }
      else if ( v9 == 1431193940 )
      {
        RaUnitReleaseRemoveLock(v7);
      }
      v14 = v13;
      return RaidCompleteRequestEx(v5, 0, v14);
    }
    v16 = (_DWORD)a2 == 1;
  }
  if ( v16 )
  {
LABEL_38:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    v12 = RaWmiIrpNormalRequest(a1, a2, v18);
    goto LABEL_13;
  }
  v17 = RaidCompleteWmiIrp(a1, v5);
  if ( v9 == 1094997074 )
  {
    RaidReleaseAdapterRemoveLock(v8);
  }
  else if ( v9 == 1431193940 )
  {
    RaUnitReleaseRemoveLock(v7);
  }
  return v17;
}
