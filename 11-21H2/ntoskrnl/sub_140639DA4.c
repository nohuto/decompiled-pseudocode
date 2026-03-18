/*
 * XREFs of sub_140639DA4 @ 0x140639DA4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 *     ExInitLicenseData @ 0x14082D3F8 (ExInitLicenseData.c)
 *     ExpInitLicensing @ 0x140863E64 (ExpInitLicensing.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140639DA4(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Pool2; // r14
  int v4; // edi
  struct _LIST_ENTRY *v5; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v7; // rbx
  void *v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+40h] [rbp-11h]
  const wchar_t *v11; // [rsp+48h] [rbp-9h]
  struct _LIST_ENTRY *v12; // [rsp+50h] [rbp-1h]
  int v13; // [rsp+58h] [rbp+7h]
  __int64 v14; // [rsp+60h] [rbp+Fh]
  int v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  __int64 v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  __int64 v21; // [rsp+98h] [rbp+47h]
  int v22; // [rsp+A0h] [rbp+4Fh]

  Blink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  if ( a1 )
    Blink = a1[91].Blink;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 81928LL, 1767066707LL);
  if ( Pool2 )
  {
    v5 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 47040LL, 1767066707LL);
    if ( v5 )
    {
      memset(Pool2, 0, 0x14000uLL);
      memset(&v5->Blink, 0, 0xB7B4uLL);
      HIDWORD(Pool2[5120].Flink) = 0;
      v14 = 0LL;
      v16 = 0LL;
      v17 = 0;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
      v22 = 0;
      LODWORD(Pool2[5120].Flink) = 81920;
      HIDWORD(v5[2939].Blink) = -1;
      v9 = &ExpQueryRegistryRoutine;
      v5->Flink = Pool2;
      v11 = L"ProductPolicy";
      Blink[56].Blink = v5;
      v10 = 256;
      v13 = 50331651;
      v15 = 81920;
      v12 = v5;
      ExpInitLicensing(Blink);
      CurrentThread = KeGetCurrentThread();
      v7 = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
      v4 = RtlQueryRegistryValuesEx(2LL, L"ProductOptions", &v9, 0LL, 0LL);
      ExInitLicenseData();
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = v7;
      if ( v4 >= 0 )
        return (unsigned int)v4;
    }
    else
    {
      v4 = -1073741801;
    }
    ExFreePoolWithTag(Pool2, 0x69534C53u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x69534C53u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
