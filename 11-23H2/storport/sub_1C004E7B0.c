/*
 * XREFs of sub_1C004E7B0 @ 0x1C004E7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 */

void __fastcall sub_1C004E7B0(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // ebx
  __int64 v6; // rcx

  Status = IoStatus->Status;
  *(_QWORD *)(Context[612] + 72LL) = 0LL;
  v6 = Context[612];
  if ( v6
    && (*((_DWORD *)Context + 77) != 1 || (*((_BYTE *)Context + 107) & 4) != 0)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 0) )
  {
    sub_1C0008BF0((__int64)Context, 0LL, 0LL);
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x43u, (__int64)&unk_1C008A080, Status);
  }
}
