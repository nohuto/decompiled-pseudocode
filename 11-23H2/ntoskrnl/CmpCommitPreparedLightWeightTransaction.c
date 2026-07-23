/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x140A1C894
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140A1C71C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpProcessLightWeightUOW @ 0x140A1CB5C (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  if ( a1 )
  {
    v2 = 0;
    if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)&unk_140037500, 0LL, 0LL, 2u, v9);
    v8 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    v7 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v7, 0LL);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v8, 1LL, a2);
      ++v2;
    }
    if ( (unsigned int)dword_140C04390 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
      {
        v12 = 0;
        v10 = &v7;
        LODWORD(v7) = v2;
        v11 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04390,
          (unsigned __int8 *)byte_140037569,
          0LL,
          0LL,
          3u,
          v9);
      }
    }
  }
}
