/*
 * XREFs of ?HampPdcDamControlCallback@@YAJPEAXK@Z @ 0x18007EB00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F434 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

__int64 __fastcall HampPdcDamControlCallback(struct _HAM_PDC_CONTEXT *a1, int a2)
{
  int v5; // [rsp+30h] [rbp-E8h] BYREF
  char v6[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+D0h] [rbp-48h] BYREF
  int *v8; // [rsp+F0h] [rbp-28h]
  int v9; // [rsp+F8h] [rbp-20h]
  int v10; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C1A9E,
      0LL,
      0LL,
      2u,
      &v7);
  if ( a2 < 0 )
    HampPdcExitDamPhase(a1, 0);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v10 = 0;
    v8 = &v5;
    v5 = a2;
    v9 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C1927,
      0LL,
      0LL,
      3u,
      &v7);
  }
  return 0LL;
}
