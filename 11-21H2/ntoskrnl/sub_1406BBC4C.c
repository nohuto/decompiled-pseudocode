/*
 * XREFs of sub_1406BBC4C @ 0x1406BBC4C
 * Callers:
 *     sub_1406BBC20 @ 0x1406BBC20 (sub_1406BBC20.c)
 *     sub_1409C5A90 @ 0x1409C5A90 (sub_1409C5A90.c)
 *     sub_140B290EC @ 0x140B290EC (sub_140B290EC.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406BBC4C(__int64 a1)
{
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v3; // rbx
  __int64 v4; // rcx
  ULONG_PTR *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  ULONG_PTR v8; // rdi
  void *CurrentServerSilo; // rsi

  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 192LL, 1934386515LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, 0xC0uLL);
  v3[1].Count = *(ULONG_PTR *)a1;
  v3[3].Count = 1LL;
  v3[18].Count = 0LL;
  v3[17].Count = (ULONG_PTR)&v3[16];
  v3[16].Count = (ULONG_PTR)&v3[16];
  ExInitializeRundownProtection(v3 + 19);
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    v3[23].Count = (ULONG_PTR)&v3[22];
    v3[22].Count = (ULONG_PTR)&v3[22];
  }
  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (ULONG_PTR *)(qword_140D3CA78 + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = &stru_140CF66C0 + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  v8 = *v5;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v8 )
  {
    if ( CurrentServerSilo == *(void **)(v8 + 160)
      && *(_DWORD *)a1 == *(_DWORD *)(v8 + 8)
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(v8 + 12) )
    {
      ExReleaseResourceLite(v7);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[20].Count = (ULONG_PTR)CurrentServerSilo;
  v3->Count = *v5;
  *v5 = (ULONG_PTR)v3;
  ExReleaseResourceLite(v7);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0LL;
}
