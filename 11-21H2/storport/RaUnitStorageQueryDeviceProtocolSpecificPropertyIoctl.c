/*
 * XREFs of RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C004D4DC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rsi
  unsigned int *v3; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __m128i v7; // xmm2
  __m128i v8; // xmm1
  int v9; // ecx
  unsigned __int64 Length; // r8
  signed int v11; // edi
  unsigned int v12; // edx
  size_t v13; // rbx
  _LIST_ENTRY *v14; // xmm0_8
  unsigned int v15; // ecx
  unsigned int SystemBuffer_high; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v20; // [rsp+28h] [rbp-A0h]
  int v21; // [rsp+D8h] [rbp+10h] BYREF
  PVOID P; // [rsp+E0h] [rbp+18h] BYREF
  _LIST_ENTRY *Blink; // [rsp+E8h] [rbp+20h]

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v21 = 0;
  P = 0LL;
  v7 = *(__m128i *)&MasterIrp->AssociatedIrp.MasterIrp;
  v8 = *(__m128i *)&MasterIrp->MdlAddress;
  Blink = MasterIrp->ThreadListEntry.Blink;
  v9 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      v11 = -1073741637;
LABEL_29:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v11);
    }
    goto LABEL_14;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x30 )
  {
LABEL_5:
    v11 = -1073741585;
    goto LABEL_29;
  }
  if ( _mm_cvtsi128_si32(v8)
    && v8.m128i_i32[1]
    && ((v12 = _mm_cvtsi128_si32(v7)) == 0 || v12 >= 0x28 && v7.m128i_i32[1]) )
  {
    if ( (unsigned int)Length < 0x30 )
    {
      if ( (unsigned int)Length < 8 )
      {
        v11 = -1073741789;
        goto LABEL_29;
      }
      *(_DWORD *)&MasterIrp->Type = 48;
      *(_DWORD *)(&MasterIrp->Size + 1) = 48;
      a2->IoStatus.Information = 8LL;
LABEL_14:
      v11 = 0;
      return RaidCompleteRequestEx(a2, 0, v11);
    }
    v13 = CurrentStackLocation->Parameters.Read.Length;
    if ( Length < v12 + HIDWORD(v7.m128i_i64[0]) + 8 )
      goto LABEL_5;
    v11 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, (ULONG *)&v21);
    if ( v11 < 0 )
    {
      v3 = (unsigned int *)P;
    }
    else
    {
      v3 = (unsigned int *)P;
      v11 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v21, 0LL, v20, 64);
      if ( v11 >= 0 )
      {
        memset(MasterIrp, 0, v13);
        *(_DWORD *)&MasterIrp->Type = 48;
        *(_DWORD *)(&MasterIrp->Size + 1) = 48;
        *(__m128i *)&MasterIrp->MdlAddress = v8;
        v14 = Blink;
        *(__m128i *)&MasterIrp->AssociatedIrp.MasterIrp = v7;
        MasterIrp->ThreadListEntry.Blink = v14;
        LODWORD(MasterIrp->ThreadListEntry.Flink) = v3[15];
        v15 = v3[14];
        if ( v15 )
        {
          SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
          if ( SystemBuffer_high >= v15 )
            SystemBuffer_high = v3[14];
          v17 = SystemBuffer_high;
          memmove(
            (char *)&MasterIrp->MdlAddress + (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
            (char *)v3 + v3[13] + 36,
            SystemBuffer_high);
          v18 = MasterIrp->AssociatedIrp.IrpCount + 8;
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v17;
          a2->IoStatus.Information = v17 + v18;
        }
        else
        {
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 0;
          a2->IoStatus.Information = 48LL;
        }
      }
    }
  }
  else
  {
    v11 = -1073741585;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( v11 < 0 )
    goto LABEL_29;
  return RaidCompleteRequestEx(a2, 0, v11);
}
