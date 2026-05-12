/*
 * XREFs of RaidGetStorageAdapterTemperatureProperty @ 0x1C0039DBC
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004D658 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 */

__int64 __fastcall RaidGetStorageAdapterTemperatureProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r15
  size_t Length; // rbp
  unsigned int v9; // esi
  int v10; // eax
  _DWORD *v11; // r14
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v14 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    if ( (unsigned int)Length >= 0x28 )
    {
      v10 = RaBuildQueryTemperaturePropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v14);
      v11 = P;
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)P, v14, 0LL, 0, 64);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
        {
          v12 = v11[8];
          memset(MasterIrp, 0, Length);
          if ( (unsigned int)Length >= v12 )
            LODWORD(Length) = v12;
          memmove(MasterIrp, v11 + 7, (unsigned int)Length);
          *(_DWORD *)&MasterIrp->Type = 40;
          *a3 = (unsigned int)Length;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72536152u);
    }
    else if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v9 = 0;
      *(_DWORD *)&MasterIrp->Type = 40;
      *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v9;
}
