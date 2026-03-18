/*
 * XREFs of WheaPersistBadPageToBcd @ 0x140611D90
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B419C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     EmpRemoveBadS3PageWorker @ 0x14093CCE0 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0819C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     qsort_s @ 0x1403DA810 (qsort_s.c)
 *     BcdGetElementData @ 0x140801E3C (BcdGetElementData.c)
 *     BcdCreateObject @ 0x140802D5C (BcdCreateObject.c)
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803098 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     WheapCountBadPageExtents @ 0x140A085BC (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x140A08608 (WheapIsPageInList.c)
 *     BcdSetElementData @ 0x140A5C834 (BcdSetElementData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(__int64 a1)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int ElementData; // eax
  unsigned int v6; // r14d
  int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = 0LL;
  v3 = BcdOpenStore(0LL, 0LL, &v14);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v14, &GUID_BAD_MEMORY_GROUP, &v15) < 0 )
  {
    v12 = 0x2010000000000001LL;
    v3 = BcdCreateObject(v14, &GUID_BAD_MEMORY_GROUP, &v12, &v15);
    if ( v3 < 0 )
    {
      v4 = v15;
      goto LABEL_18;
    }
  }
  v4 = v15;
  v13 = 0;
  ElementData = BcdGetElementData(v15, 385875978LL, 0LL, &v13);
  v6 = v13;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  v13 = v6;
  Pool2 = ExAllocatePool2(258LL, v6 + 8LL, 1634035799LL);
  v2 = (_QWORD *)Pool2;
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
        v3 = BcdSetElementData(v4, 385875978LL, v2, v6 + 8);
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
  v3 = BcdGetElementData(v4, 385875978LL, Pool2, &v13);
  if ( v3 >= 0 )
  {
    v6 = v13;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( v14 )
    BcdCloseStore(v14);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x61656857u);
  return (unsigned int)v3;
}
