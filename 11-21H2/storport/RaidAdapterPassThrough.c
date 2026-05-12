/*
 * XREFs of RaidAdapterPassThrough @ 0x1C0088544
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidRecordPassthroughData @ 0x1C0022368 (RaidRecordPassthroughData.c)
 *     PortPassThroughExSendAsync @ 0x1C008860C (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C0088F60 (PortPassThroughGetAddress.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, IRP *a2, char a3)
{
  __int64 Unit; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v8; // r8d
  int v9; // r10d
  int v10; // r11d
  unsigned int v12; // r8d
  struct _MDL *v13; // [rsp+30h] [rbp-18h]
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  if ( (int)PortPassThroughGetAddress(a2, &v14, (char *)&v14 + 1, (char *)&v14 + 2) >= 0
    && (Unit = RaidAdapterFindUnit(a1, v14)) != 0 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(Unit + 448) & 1) == 0 )
    {
      CurrentStackLocation->Control |= 1u;
      RaidRecordPassthroughData((__int64)a2);
      LOBYTE(v8) = a3;
      PortPassThroughExSendAsync(*(_QWORD *)(Unit + 8), (int)a2, v8, v10, v9, v13, Unit);
      return 259LL;
    }
    v12 = -1073741808;
  }
  else
  {
    v12 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v12);
}
