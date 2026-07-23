/*
 * XREFs of CmpTransWriteLog @ 0x140708280
 * Callers:
 *     CmLogTmRmAction @ 0x14069824C (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmpDoTransWriteLogRecord @ 0x14070837C (CmpDoTransWriteLogRecord.c)
 *     CmpComputeLogFillLevel @ 0x14070841C (CmpComputeLogFillLevel.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1EB00 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r14d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v15; // rdx
  int v16; // r14d
  int v17; // edx
  int v18; // r9d
  unsigned int v19; // [rsp+30h] [rbp-91h] BYREF
  int v20; // [rsp+34h] [rbp-8Dh] BYREF
  int v21; // [rsp+38h] [rbp-89h] BYREF
  int v22; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-81h] BYREF
  int *v24; // [rsp+60h] [rbp-61h]
  int v25; // [rsp+68h] [rbp-59h]
  int v26; // [rsp+6Ch] [rbp-55h]
  int *v27; // [rsp+70h] [rbp-51h]
  int v28; // [rsp+78h] [rbp-49h]
  int v29; // [rsp+7Ch] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+80h] [rbp-41h] BYREF
  int *v31; // [rsp+A0h] [rbp-21h]
  int v32; // [rsp+A8h] [rbp-19h]
  int v33; // [rsp+ACh] [rbp-15h]
  int *v34; // [rsp+B0h] [rbp-11h]
  int v35; // [rsp+B8h] [rbp-9h]
  int v36; // [rsp+BCh] [rbp-5h]

  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  v8 = a4;
  v21 = a4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = v19;
  while ( 1 )
  {
    v11 = CmpDoTransWriteLogRecord(a1, a2, a3, v8, plsnFinish);
    v13 = v11;
    if ( v11 != -1072037859 )
      break;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_6;
LABEL_11:
      v19 = ++v10;
      v16 = CmpAddRemoveRMLogContainer(a1);
      if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
      {
        v26 = 0;
        v29 = 0;
        v24 = &v22;
        v22 = v15;
        v27 = &v20;
        v25 = v15 + 3;
        v28 = v15 + 3;
        v20 = v16;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04390,
          (unsigned __int8 *)byte_140037C65,
          0LL,
          0LL,
          v15 + 3,
          &v23);
      }
      if ( v16 < 0 )
        goto LABEL_6;
      CmpLogCheckpoint(a1, v15, 1);
      v8 = v21;
    }
    else
    {
      v10 = 1;
      v19 = 1;
      if ( (int)CmpLogCheckpoint(a1, v12, 1) < 0 )
        goto LABEL_11;
    }
  }
  if ( v11 >= 0
    && (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v19) >= 0
    && v19 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
    if ( (unsigned int)dword_140C04390 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
      {
        v33 = 0;
        v36 = 0;
        v31 = &v21;
        v32 = v17 + 3;
        v34 = &v20;
        v20 = v18;
        v35 = v17 + 3;
        v21 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04390,
          (unsigned __int8 *)qword_140037C98,
          0LL,
          0LL,
          v17 + 3,
          &v30);
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return v13;
}
