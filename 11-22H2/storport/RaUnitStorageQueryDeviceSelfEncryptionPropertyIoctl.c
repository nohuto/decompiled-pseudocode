/*
 * XREFs of RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C0060030
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C009F7B0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl(__int64 a1, IRP *a2)
{
  _DWORD *p_Type; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v6; // ecx
  size_t Length; // rbp
  unsigned int v8; // r8d
  char v9; // r14
  int v10; // eax
  int TcgProperties; // eax
  _OWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF

  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  memset(v13, 0, sizeof(v13));
  v6 = p_Type[1];
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !v6 )
  {
    memset_0(p_Type, 0, Length);
    if ( (unsigned int)Length < 8 )
    {
      v8 = -1073741789;
      goto LABEL_15;
    }
    if ( (unsigned int)Length < 0xC )
    {
      *p_Type = 16;
      p_Type[1] = 16;
      a2->IoStatus.Information = 8LL;
      goto LABEL_22;
    }
    v9 = 1;
    if ( (*(_BYTE *)(a1 + 128) & 1) != 0 )
    {
      v10 = (unsigned int)Length < 0x10 ? 12 : 16;
      *p_Type = v10;
      p_Type[1] = v10;
    }
    else
    {
      if ( (unsigned int)Length >= 0x10 )
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
        {
          v8 = -2147483631;
          goto LABEL_15;
        }
        TcgProperties = RaidGetTcgProperties((int *)a1, (char *)v13);
        *p_Type = 16;
        p_Type[1] = 16;
        if ( TcgProperties >= 0 && **(_DWORD **)(a1 + 3504) == 512 )
          p_Type[3] = 2;
        else
          v9 = 0;
        *((_BYTE *)p_Type + 8) = v9;
        *(_DWORD *)(a1 + 456) &= ~8u;
        goto LABEL_21;
      }
      *p_Type = 12;
      p_Type[1] = 12;
    }
    *((_BYTE *)p_Type + 8) = 0;
LABEL_21:
    a2->IoStatus.Information = (unsigned int)p_Type[1];
    goto LABEL_22;
  }
  if ( v6 == 1 )
  {
LABEL_22:
    v8 = 0;
    return RaidCompleteRequestEx(a2, 0, v8);
  }
  v8 = -1073741637;
LABEL_15:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v8);
}
