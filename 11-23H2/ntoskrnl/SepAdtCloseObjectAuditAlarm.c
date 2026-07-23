/*
 * XREFs of SepAdtCloseObjectAuditAlarm @ 0x1409CB9D8
 * Callers:
 *     NtCloseObjectAuditAlarm @ 0x1407C3B80 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CE1D0 (SeCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarmForNonObObject @ 0x1409CE240 (SeCloseObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x1402BEDE4 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406C32B8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3500 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtCloseObjectAuditAlarm(
        const UNICODE_STRING *a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        char a5)
{
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rsi
  int AllocatedFullProcessImageName; // eax
  const int *v11; // r8
  _QWORD **ClientToken; // rdx
  _QWORD **PrimaryToken; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax
  bool IsKernelHandle; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
  v23 = 0;
  if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(a4, a1, 1, 0, (__int64)a3, a5, &v23)
    && SepAdtAuditThisEventWithContext(124LL, 1u, 0, a3) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    }
    else
    {
      memset(Src, 0, 0x418uLL);
      v11 = &SeSubsystemName;
      ClientToken = (_QWORD **)a3->ClientToken;
      LOWORD(Src[2]) = v23;
      LODWORD(Src[0]) = 3;
      PrimaryToken = ClientToken;
      if ( a1 )
        v11 = (const int *)a1;
      HIDWORD(Src[0]) = 4658;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !ClientToken )
        PrimaryToken = (_QWORD **)a3->PrimaryToken;
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*PrimaryToken[19] + 1LL) + 8;
      v14 = ClientToken;
      if ( !ClientToken )
        v14 = a3->PrimaryToken;
      v15 = (_QWORD *)v14[19];
      LODWORD(Src[7]) = 1;
      Src[10] = v11;
      Src[11] = 0x800000005LL;
      Src[6] = *v15;
      v16 = *(unsigned __int16 *)v11 + 16;
      HIDWORD(Src[7]) = v16;
      if ( !ClientToken )
        ClientToken = (_QWORD **)a3->PrimaryToken;
      v17 = ClientToken[3];
      Src[18] = v11;
      HIDWORD(Src[15]) = v16;
      Src[19] = 0x80000000BLL;
      Src[12] = v17;
      LODWORD(Src[15]) = 1;
      IsKernelHandle = ObpIsKernelHandle(a2, 0);
      v20 = v19 ^ 0xFFFFFFFF80000000uLL;
      Src[23] = __PAIR64__(v22, v21);
      Src[24] = Flink;
      if ( !IsKernelHandle )
        v20 = a2;
      LODWORD(Src[27]) = 2;
      LODWORD(Src[1]) = 7;
      Src[20] = v20 & 0xFFFFFFFFFFFFFFFCuLL;
      Src[30] = P;
      HIDWORD(Src[27]) = *(unsigned __int16 *)P + 16;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
