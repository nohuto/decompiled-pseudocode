/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140629304
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14021B110 (MiInPageSingleKernelStack.c)
 *     MiGetNextPageTablePte @ 0x14025CF80 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140310BEC (CcForEachPartition.c)
 *     MiIsWorkingSetTrimThread @ 0x1403531E0 (MiIsWorkingSetTrimThread.c)
 *     MiEmptyAllWorkingSets @ 0x140634748 (MiEmptyAllWorkingSets.c)
 */

__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // r8
  int v2; // r9d
  int v3; // edi
  unsigned int i; // ebx

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    if ( !(_DWORD)result )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)v1 != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( v1 != MiMappedPageWriter )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_140C67F48);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(MiSystemPartition);
          }
          _InterlockedAdd(&dword_140C6B83C, 1u);
          result = qword_140C6F9C0;
          if ( qword_140C6F9C0 != qword_140C6FAA0 )
          {
            v3 = dword_140C6B7D4;
LABEL_10:
            for ( i = 0; i < 0xFF; ++i )
            {
              KeSetEvent(&stru_140C6B840, 0, 0);
              CcForEachPartition(
                (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
                2LL,
                0,
                0);
              result = qword_140C6F9C0;
              if ( qword_140C6F9C0 == qword_140C6FAA0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C6B7D4;
              if ( v3 != dword_140C6B7D4 )
              {
                v3 = dword_140C6B7D4;
                goto LABEL_10;
              }
            }
          }
          _InterlockedDecrement(&dword_140C6B83C);
        }
      }
    }
  }
  return result;
}
