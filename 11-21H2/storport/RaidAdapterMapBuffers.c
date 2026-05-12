/*
 * XREFs of RaidAdapterMapBuffers @ 0x1C00355B4
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1C00659C4 (StorUnitExecuteNvmeSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001BAA4 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004C4B8 (RaidSrbExGetBidirectionalData.c)
 *     RaidGetSystemAddressForMdl @ 0x1C004EC08 (RaidGetSystemAddressForMdl.c)
 */

__int64 __fastcall RaidAdapterMapBuffers(__int64 a1, __int64 a2)
{
  char v4; // bp
  __int64 v5; // rbx
  char v6; // al
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // r12d
  __int64 v10; // r15
  char *SrbScsiData; // rax
  int v12; // eax
  char v13; // al
  __int64 BidirectionalData; // rax
  __int64 v16; // rdx
  bool v17; // cf
  unsigned int v18; // ebp
  int SystemAddressForMdl; // edi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = v6 == 40 ? *(_QWORD **)(v5 + 96) : *(_QWORD **)(v5 + 48);
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    v9 = *(_DWORD *)(v5 + 24);
    v10 = *(_QWORD *)(v5 + 64);
    if ( !v8 )
    {
      SrbScsiData = (char *)GetSrbScsiData(v5, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( SrbScsiData )
        v4 = *SrbScsiData;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v5 + 12);
    v8 = *(unsigned __int8 *)(v5 + 2);
    v10 = *(_QWORD *)(v5 + 24);
    if ( !v6 )
      v4 = *(_BYTE *)(v5 + 72);
  }
  if ( (v9 & 0xC0) == 0 || !v10 && !v7[13] )
    return 0LL;
  if ( v8 > 0x17 || (v12 = 8389124, !_bittest(&v12, v8)) )
  {
    v13 = *(_BYTE *)(a1 + 433);
    if ( v13 != 3 && ((unsigned __int8)(v13 - 1) > 1u || !v8 && ((v4 - 8) & 0x5D) == 0) )
    {
      if ( *(_BYTE *)(a1 + 4242) )
      {
        if ( *(_BYTE *)(v5 + 2) == 40 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v5);
          *(_QWORD *)(v5 + 64) = 0LL;
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = 0LL;
        }
        else
        {
          *(_QWORD *)(v5 + 24) = 0LL;
        }
      }
      return 0LL;
    }
  }
  v16 = v7[23];
  v17 = *(_BYTE *)(a2 + 64) != 0;
  v22 = 0LL;
  v18 = v17 ? 0xFFFFFFF0 : 0;
  SystemAddressForMdl = RaidGetSystemAddressForMdl(v7[13], v16, v18 + 32, &v22);
  if ( SystemAddressForMdl >= 0 )
  {
    if ( *(_BYTE *)(v5 + 2) == 40 )
      *(_QWORD *)(v5 + 64) = v22;
    else
      *(_QWORD *)(v5 + 24) = v22;
    v20 = v7[17];
    if ( v20 )
    {
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v20, v7[24], v18 + 32, &v22);
      if ( SystemAddressForMdl >= 0 )
      {
        v21 = RaidSrbExGetBidirectionalData(v5);
        *(_QWORD *)(v21 + 16) = v22;
      }
    }
  }
  return (unsigned int)SystemAddressForMdl;
}
