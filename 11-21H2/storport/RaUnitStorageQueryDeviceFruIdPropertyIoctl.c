/*
 * XREFs of RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceFruIdPropertyIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rsi
  size_t Length; // r15
  signed int v7; // ebx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // edi
  _QWORD v14[20]; // [rsp+20h] [rbp-89h] BYREF
  __int128 v15; // [rsp+C0h] [rbp+17h] BYREF

  memset(v14, 0, 0x98uLL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v15 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !RaidIsUnitControlSupported(a1, 13) )
    goto LABEL_2;
  v9 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v9 )
  {
    if ( v9 != 1 )
    {
LABEL_2:
      v7 = -1073741637;
LABEL_3:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
LABEL_10:
    v7 = 0;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  memset(MasterIrp, 0, Length);
  if ( (unsigned int)Length < 0x10 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v7 = -1073741789;
      goto LABEL_3;
    }
    *(_DWORD *)&MasterIrp->Type = 16;
    *(_DWORD *)(&MasterIrp->Size + 1) = 16;
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(a1 + 24);
  LOWORD(v15) = 1;
  DWORD1(v15) = 4;
  WORD1(v15) = *(_WORD *)(v10 + 56);
  WORD4(v15) = *(_WORD *)(a1 + 96);
  BYTE10(v15) = *(_BYTE *)(a1 + 98);
  v14[0] = 0x9800000001LL;
  v14[1] = &v15;
  v7 = RaCallMiniportUnitControl(v10 + 336);
  if ( v7 < 0 )
    goto LABEL_3;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( *((_BYTE *)&v14[2] + v12) );
  v13 = v12 + 12;
  *(_DWORD *)&MasterIrp->Type = 16;
  *(_DWORD *)(&MasterIrp->Size + 1) = v13;
  if ( (unsigned int)Length < v13 )
  {
LABEL_9:
    a2->IoStatus.Information = 8LL;
    goto LABEL_10;
  }
  do
    ++v11;
  while ( *((_BYTE *)&v14[2] + v11) );
  LODWORD(MasterIrp->MdlAddress) = v11;
  memmove((char *)&MasterIrp->MdlAddress + 4, &v14[2], (unsigned int)v11);
  a2->IoStatus.Information = v13;
  return RaidCompleteRequestEx(a2, 0, v7);
}
