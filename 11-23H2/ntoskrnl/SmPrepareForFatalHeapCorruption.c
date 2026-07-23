/*
 * XREFs of SmPrepareForFatalHeapCorruption @ 0x1405CDC7C
 * Callers:
 *     SmHpBufferProtectEx @ 0x1405CA824 (SmHpBufferProtectEx.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028C170 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140354C10 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmPrepareForFatalHeapCorruption(
        void *Src,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        LONGLONG *a5)
{
  __int64 v5; // rbp
  __int64 v7; // r15
  __int64 Pool2; // rax
  unsigned int v9; // ebx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v10; // rdi
  _QWORD *v11; // rcx

  v5 = a4;
  v7 = a3;
  *a5 = MmGetPhysicalAddress(Src).QuadPart / 4096;
  Pool2 = ExAllocatePool2(64LL, 4192LL, 1348627827LL);
  v9 = 0;
  v10 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 44) = 0;
    v11 = (_QWORD *)((Pool2 + 55) & 0xFFFFFFFFFFFFFFF8uLL);
    *v11 = 1LL;
    v11[6] = 0LL;
    v11[5] = *a5;
    v11[1] = Src;
    v11[2] = 4096LL;
    v11[4] = v5;
    v11[3] = v7;
    memmove(v11 + 6, Src, 0x1000uLL);
    if ( !KeRegisterBugCheckReasonCallback(
            v10,
            (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalHeapCorruptionDumpCallback,
            KbCallbackSecondaryDumpData,
            (PUCHAR)"nt!store memory compression") )
    {
      v9 = -1073741670;
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
