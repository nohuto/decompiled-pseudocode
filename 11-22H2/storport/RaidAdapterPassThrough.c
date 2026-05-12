/*
 * XREFs of RaidAdapterPassThrough @ 0x1C00A1BB8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidRecordPassthroughData @ 0x1C000F76C (RaidRecordPassthroughData.c)
 *     PortPassThroughBasicValidation @ 0x1C001DED8 (PortPassThroughBasicValidation.c)
 *     IsScsiPassThroughEx @ 0x1C001E51C (IsScsiPassThroughEx.c)
 *     PortPassThroughExBasicValidation @ 0x1C0078628 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, IRP *a2, char a3)
{
  IRP *v6; // rdx
  bool v7; // di
  int v8; // eax
  _IRP *MasterIrp; // rdx
  char v10; // al
  _BYTE *v11; // rdx
  unsigned __int8 v12; // di
  char v13; // al
  __int64 Unit; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 v16; // r11
  int v17; // r8d
  int v18; // eax
  int v19; // r10d
  char *v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // [rsp+30h] [rbp-18h]
  unsigned int v24; // [rsp+68h] [rbp+20h]

  HIBYTE(v24) = 0;
  v7 = IsScsiPassThroughEx((__int64)a2);
  if ( v7 )
    v8 = PortPassThroughExBasicValidation(v6);
  else
    v8 = PortPassThroughBasicValidation(v6);
  if ( v8 < 0 )
    goto LABEL_23;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( v7 )
  {
    v21 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v21 != 1 || *((_DWORD *)v21 + 1) < 4u )
      goto LABEL_23;
    LOWORD(v24) = *((_WORD *)v21 + 4);
    v10 = v21[10];
  }
  else
  {
    LOWORD(v24) = *(unsigned __int16 *)((char *)&MasterIrp->Size + 1);
    v10 = *((_BYTE *)&MasterIrp->Size + 3);
  }
  BYTE2(v24) = v10;
  if ( IsScsiPassThroughEx((__int64)a2) )
  {
    v13 = v11[57];
    v12 = v11[56];
  }
  else
  {
    v12 = v11[36];
    v13 = v11[37];
  }
  if ( DisableIEEE1667 && (v12 == 0xA2 || v12 == 0xB5) && v13 == -18 )
  {
    v22 = -1073741637;
    return RaidCompleteRequestEx(a2, 0, v22);
  }
  Unit = RaidAdapterFindUnit(a1, v24);
  if ( !Unit )
  {
LABEL_23:
    v22 = -1073741810;
    return RaidCompleteRequestEx(a2, 0, v22);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(Unit + 448) & 1) == 0 )
  {
    CurrentStackLocation->Control |= 1u;
    RaidRecordPassthroughData(v12);
    LOBYTE(v17) = a3;
    PortPassThroughExSendAsync(*(_QWORD *)(v16 + 8), (int)a2, v17, v19, v18, v23, v16);
    return 259LL;
  }
  v22 = -1073741808;
  return RaidCompleteRequestEx(a2, 0, v22);
}
