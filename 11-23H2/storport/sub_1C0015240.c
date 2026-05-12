/*
 * XREFs of sub_1C0015240 @ 0x1C0015240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 *     sub_1C004BEC8 @ 0x1C004BEC8 (sub_1C004BEC8.c)
 */

void __fastcall sub_1C0015240(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, __int64 PowerState, _BYTE *Context)
{
  __int64 v4; // rdx
  int v6; // ecx
  int v7; // r8d

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 612);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      sub_1C0008BB4((__int64)Context, 0LL, 0LL);
    sub_1C004BEC8(Context, v4, PowerState);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 612));
  if ( byte_1C0093BE8 )
  {
    if ( (byte_1C0093A02 & 0x10) != 0 )
      sub_1C00441C8(v6, (unsigned int)&unk_1C00890C8, v7, **((_QWORD **)Context + 612), *((_DWORD *)Context + 14), 1);
  }
}
