/*
 * XREFs of sub_1403CD84C @ 0x1403CD84C
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     sub_14079D470 @ 0x14079D470 (sub_14079D470.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     sub_1409C750C @ 0x1409C750C (sub_1409C750C.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C7700 (SeAuditHardLinkCreationWithTransaction.c)
 *     sub_1409C7C84 @ 0x1409C7C84 (sub_1409C7C84.c)
 *     sub_1409C7E08 @ 0x1409C7E08 (sub_1409C7E08.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 *     sub_1409C89D0 @ 0x1409C89D0 (sub_1409C89D0.c)
 *     sub_1409C8AC4 @ 0x1409C8AC4 (sub_1409C8AC4.c)
 *     sub_1409C8CBC @ 0x1409C8CBC (sub_1409C8CBC.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C9784 @ 0x1409C9784 (sub_1409C9784.c)
 *     sub_1409C99C0 @ 0x1409C99C0 (sub_1409C99C0.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 * Callees:
 *     sub_1402037E8 @ 0x1402037E8 (sub_1402037E8.c)
 *     sub_140223644 @ 0x140223644 (sub_140223644.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1403CD9A0 @ 0x1403CD9A0 (sub_1403CD9A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405F5B3C @ 0x1405F5B3C (sub_1405F5B3C.c)
 *     sub_1409C8AC4 @ 0x1409C8AC4 (sub_1409C8AC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1403CD84C(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v3; // rcx
  __int64 Pool2; // rax
  __int64 v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  __int64 v9; // r9
  PVOID v10; // rcx
  unsigned int v11; // ecx
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v16[3]; // [rsp+28h] [rbp-50h] BYREF

  if ( !dword_140C1B314 && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 64LL;
  if ( CurrentIrql != 2 )
    v3 = 256LL;
  Pool2 = ExAllocatePool2(v3, 64LL, 1765893459LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_DWORD *)(Pool2 + 20) = 1;
    *(_DWORD *)(Pool2 + 32) = 1;
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    *(_QWORD *)(v5 + 56) = ThreadServerSilo;
    if ( ThreadServerSilo )
      ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = sub_1403CD9A0(Src);
    if ( v8 < 0 )
    {
      v14 = *(void **)(v5 + 56);
      if ( v14 )
        ObfDereferenceObjectWithTag(v14, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      dword_140C0D8A8 = v8;
      _InterlockedIncrement(&dword_140D0153C);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v13 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( dword_140C1B314 || (v10 = *v7, (*((_DWORD *)*v7 + 5) & 2) == 0) )
    {
      v11 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v11;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v11 <= 0x1D0 )
        {
          memset(v16, 0, sizeof(v16));
          sub_14030D5C0((ULONG_PTR)PROCESS, 0LL, (__int64)v16, v9);
          sub_1402037E8(v5);
          sub_1402D0930((__int64)v16, 0LL);
        }
        goto LABEL_13;
      }
      v15[0] = 0;
      if ( sub_140223644((__int64)&qword_140C5AFF0, v5, v15) )
        goto LABEL_13;
      v12 = *(void **)(v5 + 56);
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v15[0] )
        goto LABEL_13;
      v13 = 3221225473LL;
LABEL_31:
      sub_1405F5B3C(v13);
LABEL_13:
      if ( dword_140D0153C && CurrentIrql < 2u && Src[1] != 521 )
        sub_1409C8AC4((unsigned int)dword_140C0D8A8, 0LL);
      return;
    }
    if ( *(_QWORD *)(v5 + 56) )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
      v10 = *(PVOID *)(v5 + 24);
    }
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    sub_1405F5B3C(3221225626LL);
  }
}
