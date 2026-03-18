/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1403CC050
 * Callers:
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     KeFlushProcessTb @ 0x140292C60 (KeFlushProcessTb.c)
 *     KeFlushEntireTb @ 0x1403B2A40 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140346694 (KxSetTimeStampBusy.c)
 *     HvlFlushAddressSpaceTb @ 0x1403CBF98 (HvlFlushAddressSpaceTb.c)
 *     HvcallFastExtended @ 0x1403CC1B0 (HvcallFastExtended.c)
 *     HvlpPrepareFlushHeader @ 0x1403CC248 (HvlpPrepareFlushHeader.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140549BB4 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  _BYTE v14[32]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a3;
  if ( a1 || a2 || !a4 )
    return HvlFlushAddressSpaceTb(a1, a2, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v8) = 4096;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v8;
  }
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (HvlEnlightenments & 0x80u) == 0 )
    {
      HvlpSlowFlushAddressSpaceTb(0LL);
    }
    else
    {
      HvlpPrepareFlushHeader(v14, 0LL, 0LL, v4);
      HvcallFastExtended(65538, (unsigned int)v14, 24, 0, 0);
    }
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
