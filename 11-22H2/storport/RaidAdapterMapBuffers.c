/*
 * XREFs of RaidAdapterMapBuffers @ 0x1C003677C
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1C0074478 (StorUnitExecuteNvmeSrb.c)
 * Callees:
 *     IsReadWriteRequest @ 0x1C00150E4 (IsReadWriteRequest.c)
 *     GetSrbScsiData @ 0x1C0017418 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004FE78 (RaidSrbExGetBidirectionalData.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0059738 (RaidGetSystemAddressForMdl.c)
 */

__int64 __fastcall RaidAdapterMapBuffers(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // rbx
  char v6; // al
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // r15d
  __int64 v10; // r14
  int v11; // eax
  char v12; // al
  __int64 BidirectionalData; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebp
  unsigned int v18; // ebp
  int SystemAddressForMdl; // edi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
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
      GetSrbScsiData(v5, 0LL, 0LL, 0LL, 0LL, 0LL);
      v2 = 0LL;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v5 + 12);
    v8 = *(unsigned __int8 *)(v5 + 2);
    v10 = *(_QWORD *)(v5 + 24);
  }
  if ( (v9 & 0xC0) == 0 || !v10 && !v7[13] )
    return 0LL;
  if ( v8 > 0x17 || (v11 = 8389124, !_bittest(&v11, v8)) )
  {
    v12 = *(_BYTE *)(a1 + 433);
    if ( v12 != 3 && ((unsigned __int8)(v12 - 1) > 1u || (unsigned int)IsReadWriteRequest()) )
    {
      if ( *(_BYTE *)(a1 + 4306) != (_BYTE)v2 )
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
          *(_QWORD *)(v5 + 24) = v2;
        }
      }
      return 0LL;
    }
  }
  v15 = v7[23];
  v16 = v7[13];
  v17 = -(*(_BYTE *)(a2 + 64) != 0);
  v22 = v2;
  v18 = v17 & 0xFFFFFFF0;
  SystemAddressForMdl = RaidGetSystemAddressForMdl(v16, v15, v18 + 32, &v22);
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
