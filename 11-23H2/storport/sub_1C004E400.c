/*
 * XREFs of sub_1C004E400 @ 0x1C004E400
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C003FFD8 @ 0x1C003FFD8 (sub_1C003FFD8.c)
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 *     sub_1C004BEC8 @ 0x1C004BEC8 (sub_1C004BEC8.c)
 */

void __fastcall sub_1C004E400(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, char *Context)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 612);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      sub_1C0008BB4((__int64)Context, 0LL, 0LL);
    sub_1C004BEC8((__int64)Context);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 612));
  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
  {
    v9 = 1;
    v8 = *((_DWORD *)Context + 14);
    sub_1C00441C8(v6, &stru_1C0089560, v7, **((_QWORD **)Context + 612), v8, v9);
  }
  if ( *((char **)Context + 707) == Context + 5656 )
    Context[109] &= ~0x40u;
  else
    sub_1C003FFD8(*((struct _DEVICE_OBJECT **)Context + 1));
}
