/*
 * XREFs of CmpTransMgrCommit @ 0x140768E58
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x140A1C370 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x140A1F308 (CmpRmUnDoPhase.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C71C (CmpCommitLightWeightTransaction.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v4; // si
  __int64 QuadPart; // rbx
  int v6; // edi
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  __int128 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-19h]
  _OWORD v12[3]; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  DWORD1(v9) = 0;
  memset(v12, 0, sizeof(v12));
  Interval.LowPart = -1000000;
  if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)qword_140037BF0, 0LL, 0LL, 2u, v13);
  CmpAttachToRegistryProcess(v12);
  v4 = 1;
  v11 = 1LL;
  v10 = a2;
  QuadPart = Interval.QuadPart;
  v9 = 0LL;
  do
  {
    if ( v4 )
    {
      v4 = 0;
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
      QuadPart *= 2LL;
      Interval.QuadPart = QuadPart;
      if ( QuadPart > -300000000 )
      {
        QuadPart = -300000000LL;
        Interval.QuadPart = -300000000LL;
      }
    }
    LODWORD(v9) = 0;
    v6 = CmpCommitLightWeightTransaction(&v9);
  }
  while ( v6 < 0 );
  CmpDetachFromRegistryProcess(v12);
  if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)&word_140037BCE, 0LL, 0LL, 2u, v13);
  return (unsigned int)v6;
}
