/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14072A390
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_1406C0D00 @ 0x1406C0D00 (sub_1406C0D00.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140790C44 @ 0x140790C44 (sub_140790C44.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1407F4160 @ 0x1407F4160 (sub_1407F4160.c)
 *     sub_140A81DB4 @ 0x140A81DB4 (sub_140A81DB4.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // rbx
  _QWORD *v7; // rax
  struct _KTHREAD *CurrentThread; // r12
  void *v9; // r14

  SubjectContext->ProcessAuditId = (PVOID)*((_QWORD *)Process + 136);
  if ( Thread )
  {
    if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)Thread + 1360, 0LL);
      if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
      {
        v9 = (void *)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v9, 0x75536553u);
        SubjectContext->ImpersonationLevel = *((_DWORD *)Thread + 318) & 3;
      }
      else
      {
        v9 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Thread + 170, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Thread + 170);
      sub_1402AFC00((ULONG_PTR)Thread + 1360);
      sub_1402AC800((__int64)CurrentThread);
      v6 = v9;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  SubjectContext->ClientToken = v6;
  v7 = (_QWORD *)sub_140347920((__int64)Process, 0x75536553u);
  SubjectContext->PrimaryToken = v7;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)qword_140D04940 )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)qword_140D04940 )
        __debugbreak();
    }
  }
}
