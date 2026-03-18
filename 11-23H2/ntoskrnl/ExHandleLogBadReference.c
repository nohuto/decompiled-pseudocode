/*
 * XREFs of ExHandleLogBadReference @ 0x140606A28
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     ObpReferenceObjectByHandle @ 0x140749F3C (ObpReferenceObjectByHandle.c)
 *     ExMapHandleToPointerEx @ 0x1407C6238 (ExMapHandleToPointerEx.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A740 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140570E90 (KeRaiseUserException.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408834E0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExpUpdateDebugInfo @ 0x1409F9258 (ExpUpdateDebugInfo.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *BugCheckParameter4; // rsi
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // rdx

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    BugCheckParameter4 = KeGetCurrentThread();
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, BugCheckParameter4, BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].Affinity.StaticBitmap[28] )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 0x1000) != 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x200000000000LL) != 0 )
              KeBugCheckEx(
                0x1EDu,
                BugCheckParameter1,
                BugCheckParameter2,
                (ULONG_PTR)CurrentThread->ApcState.Process,
                (ULONG_PTR)BugCheckParameter4);
            DbgkWerCaptureLiveKernelDump(
              (unsigned int)L"BadHandleKmChk",
              492,
              -1073741816,
              (_DWORD)BugCheckParameter4,
              (__int64)CurrentThread->ApcState.Process,
              BugCheckParameter1,
              0LL,
              0LL,
              0);
          }
          return (struct _KTHREAD *)KeRaiseUserException(0xC0000008);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
