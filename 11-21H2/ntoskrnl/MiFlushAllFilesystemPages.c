/*
 * XREFs of MiFlushAllFilesystemPages @ 0x14058DCA8
 * Callers:
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiInPageSingleKernelStack @ 0x14029A2A0 (MiInPageSingleKernelStack.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x14024C9A8 (MiIsWorkingSetTrimThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140363C8C (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14059673C (MiEmptyAllWorkingSets.c)
 */

__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // rdx
  int v2; // r8d
  unsigned int v3; // ebx
  int v4; // edi

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    v3 = 0;
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
            result = (unsigned int)_InterlockedIncrement(&dword_140C529C8);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_140C552AC);
          result = qword_140C59300;
          if ( qword_140C59300 != qword_140C593E0 )
          {
            v4 = dword_140C55244;
            do
            {
              KeSetEvent(&stru_140C552B0, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper, 2LL, 0, 0);
              result = qword_140C59300;
              if ( qword_140C59300 == qword_140C593E0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C55244;
              if ( v4 != dword_140C55244 )
              {
                v4 = dword_140C55244;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140C552AC);
        }
      }
    }
  }
  return result;
}
