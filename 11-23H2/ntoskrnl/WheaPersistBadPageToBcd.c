/*
 * XREFs of WheaPersistBadPageToBcd @ 0x1406122E0
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B437C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     EmpRemoveBadS3PageWorker @ 0x14093CEE0 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0844C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     qsort_s @ 0x1403DA9F0 (qsort_s.c)
 *     BcdGetElementData @ 0x14080210C (BcdGetElementData.c)
 *     BcdCreateObject @ 0x14080302C (BcdCreateObject.c)
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     WheapCountBadPageExtents @ 0x140A0886C (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x140A088B8 (WheapIsPageInList.c)
 *     BcdSetElementData @ 0x140A5CAE4 (BcdSetElementData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(__int64 a1)
{
  _QWORD *v2; // rdi
  NTSTATUS v3; // ebx
  HANDLE v4; // rsi
  NTSTATUS ElementData; // eax
  ULONG v6; // r14d
  NTSTATUS v7; // ebx
  _QWORD *Pool2; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+88h] [rbp+48h] BYREF
  HANDLE BcdStoreHandle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+98h] [rbp+58h] BYREF

  Description = 0LL;
  BcdStoreHandle = 0LL;
  BcdObjectHandle = 0LL;
  v2 = 0LL;
  v3 = BcdOpenStore(0LL, BCD_OPEN_NONE, &BcdStoreHandle);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &BcdObjectHandle) < 0 )
  {
    Description.Version = 1;
    Description.Type = 537919488;
    v3 = BcdCreateObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &Description, &BcdObjectHandle);
    if ( v3 < 0 )
    {
      v4 = BcdObjectHandle;
      goto LABEL_18;
    }
  }
  v4 = BcdObjectHandle;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, 0x1700000Au, 0LL, &BufferSize);
  v6 = BufferSize;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  BufferSize = v6;
  Pool2 = (_QWORD *)ExAllocatePool2(258LL, v6 + 8LL, 1634035799LL);
  v2 = Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v2, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v2[v9] = a1;
      v10 = v9 + 1;
      qsort_s(v2, v10, 8uLL, WheapPfnComparisonHelper, 0LL);
      if ( (unsigned int)WheapCountBadPageExtents(v2, v10) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 0x1700000Au, v2, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 0x1700000Au, Pool2, &BufferSize);
  if ( v3 >= 0 )
  {
    v6 = BufferSize;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x61656857u);
  return (unsigned int)v3;
}
