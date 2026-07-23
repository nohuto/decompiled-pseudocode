/*
 * XREFs of sub_140609258 @ 0x140609258
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD150 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 *     ExInitLicenseData @ 0x1408114F8 (ExInitLicenseData.c)
 *     ExpInitLicensing @ 0x140864904 (ExpInitLicensing.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140609258(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *Pool2; // r14
  NTSTATUS v5; // edi
  struct _LIST_ENTRY *v6; // rax
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rbx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  __int64 v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  __int64 v16; // [rsp+98h] [rbp+47h]
  int v17; // [rsp+A0h] [rbp+4Fh]

  Flink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  if ( a1 )
    Flink = a1[93].Flink;
  v3 = 0LL;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 81928LL, 1767066707LL);
  if ( Pool2 && (v6 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 47040LL, 1767066707LL), (v3 = v6) != 0LL) )
  {
    HIDWORD(Pool2[5120].Flink) = 0;
    QueryTable.DefaultData = 0LL;
    v11 = 0LL;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    LODWORD(Pool2[5120].Flink) = 81920;
    HIDWORD(v6[2939].Blink) = -1;
    v6->Flink = Pool2;
    Flink[56].Blink = v6;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ExpQueryRegistryRoutine;
    QueryTable.DefaultLength = 81920;
    QueryTable.Name = L"ProductPolicy";
    QueryTable.Flags = 256;
    QueryTable.DefaultType = 50331651;
    QueryTable.EntryContext = v6;
    ExpInitLicensing(Flink);
    CurrentThread = KeGetCurrentThread();
    Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
    CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
    v5 = RtlQueryRegistryValuesEx(2u, L"ProductOptions", &QueryTable, 0LL, 0LL);
    ExInitLicenseData();
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  else
  {
    v5 = -1073741801;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x69534C53u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x69534C53u);
  return (unsigned int)v5;
}
