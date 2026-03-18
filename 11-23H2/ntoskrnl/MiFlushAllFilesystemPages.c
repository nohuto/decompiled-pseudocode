/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140629294
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14021B0F0 (MiInPageSingleKernelStack.c)
 *     MiGetNextPageTablePte @ 0x14025D0A0 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140310DCC (CcForEachPartition.c)
 *     MiIsWorkingSetTrimThread @ 0x1403537E0 (MiIsWorkingSetTrimThread.c)
 *     MiEmptyAllWorkingSets @ 0x1406346D8 (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140C67E48);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(MiSystemPartition);
          }
          _InterlockedAdd(&dword_140C6B77C, 1u);
          result = qword_140C6F900;
          if ( qword_140C6F900 != qword_140C6F9E0 )
          {
            v3 = dword_140C6B714;
LABEL_10:
            for ( i = 0; i < 0xFF; ++i )
            {
              KeSetEvent(&stru_140C6B780, 0, 0);
              CcForEachPartition(
                (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
                2LL,
                0,
                0);
              result = qword_140C6F900;
              if ( qword_140C6F900 == qword_140C6F9E0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C6B714;
              if ( v3 != dword_140C6B714 )
              {
                v3 = dword_140C6B714;
                goto LABEL_10;
              }
            }
          }
          _InterlockedDecrement(&dword_140C6B77C);
        }
      }
    }
  }
  return result;
}
