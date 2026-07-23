/*
 * XREFs of IopFreeIrp @ 0x1402AF4D0
 * Callers:
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140AC16C0 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x1402900A8 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x1402ACF70 (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x140555C6C (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter2)
{
  bool v2; // zf
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v5; // al
  __int16 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // al

  if ( *(_WORD *)BugCheckParameter2 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter2, 0x2758uLL, 0LL, 0LL);
  v2 = (*(_BYTE *)(BugCheckParameter2 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter2 = 0;
  if ( !v2 )
    IopFreeIrpExtension(BugCheckParameter2, -1, 1);
  if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter2);
  }
  else
  {
    v3 = *(unsigned __int16 *)(BugCheckParameter2 + 4);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    v5 = *(_BYTE *)(BugCheckParameter2 + 71);
    if ( (v5 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 71) = v5 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 4) != 0
      && ((IopIrpStackProfilerFlags & 3) == 0
       || (v6 = *(_WORD *)(BugCheckParameter2 + 2), v6 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v6 == 72 * (char)IopMediumIrpStackLocations + 208
       || v6 == 280) )
    {
      v7 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
      if ( (unsigned __int16)v7 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        if ( (unsigned __int16)v7 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v8 = 2048LL;
          v9 = 2056LL;
        }
        else
        {
          v8 = 2064LL;
          v9 = 2072LL;
        }
      }
      else
      {
        v8 = 2080LL;
        v9 = 2088LL;
      }
      *(_QWORD *)(BugCheckParameter2 + 56) = v7;
      v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v8);
      ++*(_DWORD *)(v10 + 28);
      if ( *(_WORD *)v10 < *(_WORD *)(v10 + 16)
        || (++*(_DWORD *)(v10 + 32),
            v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9),
            ++*(_DWORD *)(v10 + 28),
            *(_WORD *)v10 < *(_WORD *)(v10 + 16)) )
      {
        v11 = *(_BYTE *)(BugCheckParameter2 + 71);
        if ( (v11 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter2 + 71) = v11 ^ 1;
          ExReturnPoolQuota(BugCheckParameter2);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v10, (PSLIST_ENTRY)BugCheckParameter2);
      }
      else
      {
        ++*(_DWORD *)(v10 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
