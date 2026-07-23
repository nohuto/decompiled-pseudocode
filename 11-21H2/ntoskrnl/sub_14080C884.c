/*
 * XREFs of sub_14080C884 @ 0x14080C884
 * Callers:
 *     sub_140742980 @ 0x140742980 (sub_140742980.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     sub_140742D8C @ 0x140742D8C (sub_140742D8C.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14080CD20 @ 0x14080CD20 (sub_14080CD20.c)
 *     sub_14091C1BC @ 0x14091C1BC (sub_14091C1BC.c)
 *     sub_14091C3F0 @ 0x14091C3F0 (sub_14091C3F0.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14080C884(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  CLFS_INFORMATION *PoolWithTag; // r13
  bool v7; // zf
  int LogFileInformation; // ebx
  __int64 v9; // rax
  __int64 v10; // r12
  void *v11; // r14
  PVOID *v12; // r15
  int i; // eax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  FILE_OBJECT *v16; // rcx
  PVOID v17; // rcx
  NTSTATUS v18; // eax
  PVOID v20; // rcx
  NTSTATUS v21; // ecx
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v23; // rbx
  FILE_OBJECT *v24; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-99h]
  int ppvReadContexta; // [rsp+20h] [rbp-99h]
  CLFS_LSN plsn1; // [rsp+50h] [rbp-69h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-61h] BYREF
  ULONG pcbReadBuffer; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING v30; // [rsp+68h] [rbp-51h] BYREF
  ULONG pcbRestartBuffer; // [rsp+78h] [rbp-41h] BYREF
  PVOID pvReadContext; // [rsp+80h] [rbp-39h] BYREF
  PCUNICODE_STRING Source; // [rsp+88h] [rbp-31h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-29h] BYREF
  PVOID ppvRestartBuffer; // [rsp+A0h] [rbp-19h] BYREF
  CLFS_LSN plsn; // [rsp+A8h] [rbp-11h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+B0h] [rbp-9h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+B8h] [rbp-1h] BYREF
  PVOID ppvReadBuffer; // [rsp+C0h] [rbp+7h] BYREF
  CLFS_LSN plsnRecord; // [rsp+C8h] [rbp+Fh] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+D0h] [rbp+17h] BYREF
  CLFS_LSN plsnFirst; // [rsp+D8h] [rbp+1Fh] BYREF
  void *pcbInfoBuffer; // [rsp+120h] [rbp+67h] BYREF
  char v44; // [rsp+130h] [rbp+77h]
  ULONG pcbWritten; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0;
  v44 = 1;
  ppvRestartBuffer = 0LL;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn1.ullOffset = 0LL;
  pcbWritten = 0;
  pvRestartBuffer.ullOffset = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v30.Length = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v30.Buffer = 0LL;
  pcbInfoBuffer = 0LL;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)a1 + 16), 1u);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_47;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
LABEL_47:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KeLeaveCriticalRegion();
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v7 = a1 == RMKey;
  *((_QWORD *)a1 + 15) = 0xFFFFFFFF00000000uLL;
  if ( v7 )
  {
    Source = &stru_1400020D8;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140C02770 + 64) + 128LL) = *a2;
    LogFileInformation = sub_1407454A8((unsigned int *)(*(_QWORD *)(qword_140C02770 + 64) + 128LL), (__int64)&v30, 1);
    if ( LogFileInformation >= 0 )
    {
      v10 = (__int64)(a1 + 72);
      *((_QWORD *)a1 + 9) = 5242880LL;
      v9 = qword_140C02770;
LABEL_9:
      LogFileInformation = sub_140742D8C(*(HANDLE *)(v9 + 1544), &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = pcbInfoBuffer;
        v12 = (PVOID *)(a1 + 96);
        for ( i = sub_14080CD20(
                    Source,
                    &v30,
                    ppvReadContext,
                    v10,
                    (__int64)(a1 + 68),
                    (__int64)(a1 + 88),
                    (__int64)(a1 + 96));
              ;
              i = sub_14080CD20(
                    Source,
                    &v30,
                    ppvReadContexta,
                    v10,
                    (__int64)(a1 + 68),
                    (__int64)(a1 + 88),
                    (__int64)(a1 + 96)) )
        {
          LogFileInformation = i;
          if ( i < 0 )
            break;
          LODWORD(pcbInfoBuffer) = 120;
          v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
          v15 = v14;
          if ( v14 )
          {
            ClfsGetLogFileInformation(*((PLOG_FILE_OBJECT *)a1 + 11), v14, (PULONG)&pcbInfoBuffer);
            ExFreePoolWithTag(v15, 0);
          }
          v16 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
          pcbWritten = 120;
          LogFileInformation = ClfsGetLogFileInformation(v16, PoolWithTag, &pcbWritten);
          *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
          if ( LogFileInformation < 0 )
            break;
          if ( ClfsReadRestartArea(*v12, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
            || !ppvRestartBuffer )
          {
            plsn1 = PoolWithTag->BaseLsn;
          }
          else
          {
            plsn1 = *(CLFS_LSN *)ppvRestartBuffer;
            if ( ClfsLsnEqual(&plsn, &plsn1) )
            {
              v20 = *v12;
              plsnFirst = plsn1;
              pvReadContext = 0LL;
              ppvReadBuffer = 0LL;
              pcbReadBuffer = 0;
              plsnUndoNext.ullOffset = 0LL;
              plsnPrevious.ullOffset = 0LL;
              plsnRecord.ullOffset = 0LL;
              LOBYTE(pcbInfoBuffer) = 0;
              if ( ClfsReadLogRecord(
                     v20,
                     &plsnFirst,
                     ClfsContextForward,
                     &ppvReadBuffer,
                     &pcbReadBuffer,
                     (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
                     &plsnUndoNext,
                     &plsnPrevious,
                     &pvReadContext) >= 0 )
              {
                LOBYTE(pcbInfoBuffer) = 1;
                v21 = ClfsReadNextLogRecord(
                        pvReadContext,
                        &ppvReadBuffer,
                        &pcbReadBuffer,
                        (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
                        0LL,
                        &plsnUndoNext,
                        &plsnPrevious,
                        &plsnRecord);
                if ( v21 == -1073741807 )
                {
                  LastLsn = PoolWithTag->LastLsn;
                }
                else
                {
                  LastLsn = plsn1;
                  if ( v21 >= 0 )
                    LastLsn = plsnRecord;
                }
                plsn1 = LastLsn;
              }
              if ( pvReadContext )
                ClfsTerminateReadLog(pvReadContext);
            }
          }
          if ( pvCursorContext )
          {
            ClfsTerminateReadLog(pvCursorContext);
            pvCursorContext = 0LL;
          }
          if ( !ClfsLsnEqual(&plsn1, &PoolWithTag->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
          {
            v23 = plsn1;
            if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))sub_14091C1BC)(a1, (CLFS_LSN)plsn1.ullOffset) >= 0 )
            {
              ((void (__fastcall *)(_QWORD, _QWORD))sub_14091C3F0)(a1, (CLFS_LSN)v23.ullOffset);
              sub_14091C5C4(a1);
            }
            *((_DWORD *)a1 + 26) &= ~4u;
          }
          v17 = *v12;
          pvRestartBuffer = PoolWithTag->LastLsn;
          v18 = ClfsWriteRestartArea(v17, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
          LogFileInformation = v18;
          if ( !v44 || v18 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
            break;
          v44 = 0;
          if ( pvCursorContext )
          {
            ClfsTerminateReadLog(pvCursorContext);
            pvCursorContext = 0LL;
          }
          ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
          ClfsDeleteMarshallingArea(*v12);
          v24 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
          *v12 = 0LL;
          ClfsCloseLogFileObject(v24);
          *((_DWORD *)a1 + 17) = 0;
          *((_QWORD *)a1 + 11) = 0LL;
        }
        if ( pvCursorContext )
          ClfsTerminateReadLog(pvCursorContext);
        if ( LogFileInformation < 0 )
        {
          if ( *v12 )
            *v12 = 0LL;
        }
        else
        {
          *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
        }
      }
      goto LABEL_27;
    }
  }
  else
  {
    LogFileInformation = sub_140742C78(*(void **)(*((_QWORD *)a1 + 10) + 1544LL), &UnicodeString);
    if ( LogFileInformation >= 0 )
    {
      Source = &UnicodeString;
      if ( a2 )
        *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
      LogFileInformation = sub_1407454A8(
                             (unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL),
                             (__int64)&v30,
                             1);
      if ( LogFileInformation >= 0 )
      {
        v9 = *((_QWORD *)a1 + 10);
        v10 = (__int64)(a1 + 72);
        *((_QWORD *)a1 + 9) = 0x100000LL;
        goto LABEL_9;
      }
    }
  }
  v11 = pcbInfoBuffer;
LABEL_27:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KeLeaveCriticalRegion();
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v30.Buffer )
    RtlFreeUnicodeString(&v30);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)LogFileInformation;
}
