/*
 * XREFs of ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800763D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18007662C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 */

void __fastcall HampDepGroupStateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_DEPENDENCY_GROUP *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v8[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v10; // [rsp+F0h] [rbp-28h]
  int v11; // [rsp+F8h] [rbp-20h]
  int v12; // [rsp+FCh] [rbp-1Ch]

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C0132,
      0LL,
      0LL,
      2u,
      &v9);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  while ( 1 )
  {
    HampDepGroupAcquireLockExclusive(a2, v4);
    if ( *((_QWORD *)a2 + 14) == *((_QWORD *)a2 + 13) || !HampDepGroupTryEnterStateChange(a2, 0LL) )
      break;
    HampDepGroupReleaseLockExclusive(a2);
    HampDepGroupRunStateChangeWorker(a2);
  }
  *((_DWORD *)a2 + 33) &= ~1u;
  HampDepGroupReleaseLockExclusive(a2);
  v5 = *(_QWORD *)a2;
  HampDepGroupDereference(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    {
      v12 = 0;
      v10 = &v7;
      v11 = v6;
      v7 = v5;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC218,
        (unsigned __int8 *)dword_1800C0107,
        0LL,
        0LL,
        3u,
        &v9);
    }
  }
}
