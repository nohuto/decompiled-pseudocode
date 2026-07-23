/*
 * XREFs of sub_14054B14C @ 0x14054B14C
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeRegisterNmiCallback @ 0x14056A870 (KeRegisterNmiCallback.c)
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 *     sub_140829AB0 @ 0x140829AB0 (sub_140829AB0.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 */

__int64 __fastcall sub_14054B14C(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  void *v4; // rax

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140C4891C = *(_DWORD *)a1;
  qword_140C48920 = *(_QWORD *)(a1 + 8);
  dword_140C48918 = v1;
  qword_140C48910 = v3;
  if ( !v1 || (qword_140C48908 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
  {
    v4 = (void *)sub_140829AB0(4096LL, 0xFFFFFFFFLL);
    qword_140C48970 = v4;
    if ( v4 )
      memset(v4, 0, 0x1000uLL);
    if ( !byte_140D06888 )
    {
      stru_140C48848.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C48848,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_14054A890,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_140C48878.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C48878,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_14054A4B0,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&qword_140C48840 = KeRegisterNmiCallback((PNMI_CALLBACK)sub_14054AB60, 0LL);
      qword_140C48928 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C48928 )
        goto LABEL_16;
      if ( !byte_140D06888 )
        return 0;
    }
    stru_140C488A8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C488A8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_14054ACF0,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (dword_140D0688C & 2) == 0
        || (stru_140C48878.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C48878,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_14054A5C0,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C488D8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C488D8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_14054A840,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          *(_QWORD *)&qword_140C48840 = KeRegisterNmiCallback((PNMI_CALLBACK)sub_14054AD30, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( qword_140C48970 )
  {
    sub_14096ED20(qword_140C48970, 4096LL);
    qword_140C48970 = 0LL;
  }
  return v2;
}
