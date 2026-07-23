/*
 * XREFs of IopGetSetSpecificExtension @ 0x1403017F8
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402118B0 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x1403019FC (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x140557D9C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140558B2C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x1407308F0 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767ED0 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x140947300 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140250E10 (IopAllocateFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140302AE0 (IopSetTypeSpecificFoExtension.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  void *FileObjectExtension; // r8
  __int64 Pool2; // r8

  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
    if ( !FileObjectExtension && a4 )
    {
      Pool2 = ExAllocatePool2(64LL, v7, 1162243913LL);
      if ( !Pool2 )
        return 3221225626LL;
      if ( (int)IopSetTypeSpecificFoExtension(0LL, a2, Pool2) < 0 )
      {
        ExFreePoolWithTag(FileObjectExtension, 0);
        FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
      }
    }
    if ( a5 )
      *a5 = FileObjectExtension;
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  return result;
}
