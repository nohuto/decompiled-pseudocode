/*
 * XREFs of sub_1C00119D8 @ 0x1C00119D8
 * Callers:
 *     sub_1C0011820 @ 0x1C0011820 (sub_1C0011820.c)
 *     sub_1C004BF10 @ 0x1C004BF10 (sub_1C004BF10.c)
 * Callees:
 *     sub_1C0011B08 @ 0x1C0011B08 (sub_1C0011B08.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0034B70 @ 0x1C0034B70 (sub_1C0034B70.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

NTSTATUS __fastcall sub_1C00119D8(PIRP Irp, __int64 a2)
{
  DWORD LowPart; // esi
  struct _DEVICE_OBJECT *v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 20LL, &unk_1C008A080, a2, Irp);
  }
  sub_1C0011B08(a2);
  v5 = *(struct _DEVICE_OBJECT **)(a2 + 8);
  *(_DWORD *)(a2 + 308) = LowPart;
  PoSetPowerState(v5, DevicePowerState, (POWER_STATE)LowPart);
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 4952) )
    sub_1C0012E40(a2);
  if ( *(_QWORD *)(a2 + 5544) && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength == 3 )
    sub_1C0034B70(a2);
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 740);
    v10 = *(_QWORD *)(a2 + 728);
    IoReportInterruptInactive(&v9);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v7 = Irp->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C0014D50;
  v7[-1].Context = 0LL;
  v7[-1].Control = -32;
  result = PoCallDriver(*(PDEVICE_OBJECT *)(a2 + 24), Irp);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    return sub_1C003F0C4(off_1C0093070->AttachedDevice, 21LL, &unk_1C008A080, a2, Irp, result);
  }
  return result;
}
