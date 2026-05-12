/*
 * XREFs of RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003B210
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C001E134 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageAdapterProtocolSpecificProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IRP *MasterIrp; // rsi
  unsigned int *v4; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  unsigned __int64 Length; // r8
  int v12; // edi
  unsigned int v13; // edx
  size_t v14; // r15
  _LIST_ENTRY *v15; // xmm0_8
  unsigned int v16; // ecx
  unsigned int SystemBuffer_high; // eax
  unsigned int v18; // ebx
  int v19; // eax
  ULONG v21; // [rsp+D8h] [rbp+10h] BYREF
  PVOID P; // [rsp+E0h] [rbp+18h] BYREF
  _LIST_ENTRY *Blink; // [rsp+E8h] [rbp+20h]

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v21 = 0;
  P = 0LL;
  v9 = *(__m128i *)&MasterIrp->AssociatedIrp.MasterIrp;
  v10 = *(__m128i *)&MasterIrp->MdlAddress;
  Blink = MasterIrp->ThreadListEntry.Blink;
  *a3 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x30 )
    return (unsigned int)-1073741585;
  if ( _mm_cvtsi128_si32(v10)
    && v10.m128i_i32[1]
    && ((v13 = _mm_cvtsi128_si32(v9)) == 0 || v13 >= 0x28 && v9.m128i_i32[1]) )
  {
    if ( (unsigned int)Length < 0x30 )
    {
      if ( (unsigned int)Length < 8 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        *a3 = 8LL;
        v12 = 0;
        *(_DWORD *)&MasterIrp->Type = 48;
        *(_DWORD *)(&MasterIrp->Size + 1) = 48;
      }
      return (unsigned int)v12;
    }
    v14 = CurrentStackLocation->Parameters.Read.Length;
    if ( Length < v13 + HIDWORD(v9.m128i_i64[0]) + 8 )
      return (unsigned int)-1073741585;
    v12 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, &v21);
    if ( v12 < 0 )
    {
      v4 = (unsigned int *)P;
    }
    else
    {
      v4 = (unsigned int *)P;
      v12 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (unsigned int *)P, v21, 0LL, 0, 64);
      if ( v12 >= 0 )
      {
        memset_0(MasterIrp, 0, v14);
        *(_DWORD *)&MasterIrp->Type = 48;
        *(__m128i *)&MasterIrp->MdlAddress = v10;
        *(_DWORD *)(&MasterIrp->Size + 1) = 48;
        v15 = Blink;
        *(__m128i *)&MasterIrp->AssociatedIrp.MasterIrp = v9;
        MasterIrp->ThreadListEntry.Blink = v15;
        LODWORD(MasterIrp->ThreadListEntry.Flink) = v4[15];
        v16 = v4[14];
        if ( v16 )
        {
          SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
          if ( SystemBuffer_high >= v16 )
            SystemBuffer_high = v4[14];
          v18 = SystemBuffer_high;
          memmove(
            (char *)&MasterIrp->MdlAddress + (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
            (char *)v4 + v4[13] + 36,
            SystemBuffer_high);
          v19 = MasterIrp->AssociatedIrp.IrpCount + 8;
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v18;
          *a3 = v18 + v19;
        }
        else
        {
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 0;
          *a3 = 48LL;
        }
      }
    }
  }
  else
  {
    v12 = -1073741585;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  return (unsigned int)v12;
}
