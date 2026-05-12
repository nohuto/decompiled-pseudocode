/*
 * XREFs of RaidAdapterStorageTcgQueryCapability @ 0x1C0051624
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgConfigInformation @ 0x1C00597C4 (RaidGetTcgConfigInformation.c)
 */

__int64 __fastcall RaidAdapterStorageTcgQueryCapability(__int64 a1, IRP *a2)
{
  bool v2; // zf
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // r8d
  _IRP *MasterIrp; // rdi
  int TcgConfigInformation; // eax
  unsigned int v9; // edi
  const wchar_t *v10; // rcx
  __int128 v12; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v13; // [rsp+C8h] [rbp-50h] BYREF
  char v14[32]; // [rsp+D8h] [rbp-40h] BYREF

  a2->IoStatus.Information = 0LL;
  v2 = a2->AssociatedIrp.MasterIrp == 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v13 = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( v2 )
  {
    v6 = -1073741811;
  }
  else if ( CurrentStackLocation->Parameters.Read.Length >= 0x34 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
    {
      v6 = -2147483631;
    }
    else
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      TcgConfigInformation = RaidGetTcgConfigInformation(a1, MasterIrp, v14);
      v6 = TcgConfigInformation;
      if ( TcgConfigInformation >= 0 )
        a2->IoStatus.Information = 52LL;
      *(_DWORD *)(a1 + 136) &= ~1u;
      v9 = TcgConfigInformation;
      if ( TcgConfigInformation < 0 )
      {
        RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v12);
        v6 = v9;
        if ( (byte_1C0092A07 & 4) != 0 )
        {
          v10 = (const wchar_t *)&unk_1C0081788;
          if ( *(_QWORD *)(a1 + 5016) )
            v10 = *(const wchar_t **)(a1 + 5016);
          McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
            (__int64)v10,
            a1 + 5000,
            v9,
            *(_DWORD *)(a1 + 56),
            RaidNullAddress,
            SBYTE1(RaidNullAddress),
            SBYTE2(RaidNullAddress),
            (__int64)&v13,
            a1 + 5000,
            *((const wchar_t **)&v12 + 1),
            byte_1C0081FE6,
            byte_1C0081FE6,
            byte_1C0081FE6,
            v10,
            "TcgQueryCapabilityConfiguration",
            v14,
            v9,
            (*(_BYTE *)(a1 + 111) & 0x10) != 0,
            0,
            0,
            0);
          v6 = v9;
        }
      }
    }
  }
  else
  {
    v6 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v6);
}
