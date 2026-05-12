/*
 * XREFs of RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C001DAB0
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C009F7B0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C001E134 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
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
  unsigned int v11; // edx
  size_t v12; // rbx
  signed int v13; // edi
  _LIST_ENTRY *v14; // xmm0_8
  unsigned int v15; // ecx
  unsigned int SystemBuffer_high; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v20; // [rsp+D8h] [rbp+10h] BYREF
  PVOID P; // [rsp+E0h] [rbp+18h] BYREF
  _LIST_ENTRY *Blink; // [rsp+E8h] [rbp+20h]

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v20 = 0;
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
      v13 = -1073741637;
LABEL_20:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v13);
    }
LABEL_24:
    v13 = 0;
    return RaidCompleteRequestEx(a2, 0, v13);
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x30 )
  {
LABEL_25:
    v13 = -1073741585;
    goto LABEL_20;
  }
  if ( !_mm_cvtsi128_si32(v8)
    || !v8.m128i_i32[1]
    || (v11 = _mm_cvtsi128_si32(v7)) != 0 && (v11 < 0x28 || !v7.m128i_i32[1]) )
  {
    v13 = -1073741585;
    goto LABEL_16;
  }
  if ( (unsigned int)Length < 0x30 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v13 = -1073741789;
      goto LABEL_20;
    }
    *(_DWORD *)&MasterIrp->Type = 48;
    *(_DWORD *)(&MasterIrp->Size + 1) = 48;
    a2->IoStatus.Information = 8LL;
    goto LABEL_24;
  }
  v12 = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < v11 + HIDWORD(v7.m128i_i64[0]) + 8 )
    goto LABEL_25;
  v13 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v20);
  if ( v13 < 0 )
  {
    v3 = (unsigned int *)P;
  }
  else
  {
    v3 = (unsigned int *)P;
    v13 = RaidUnitSendSrbIoControlSynchronously(a1, (_DWORD)a2, (_DWORD)P, v20, 0LL);
    if ( v13 >= 0 )
    {
      memset_0(MasterIrp, 0, v12);
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
LABEL_16:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( v13 < 0 )
    goto LABEL_20;
  return RaidCompleteRequestEx(a2, 0, v13);
}
