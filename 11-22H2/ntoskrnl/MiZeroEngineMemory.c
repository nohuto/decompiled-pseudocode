/*
 * XREFs of MiZeroEngineMemory @ 0x1402D1280
 * Callers:
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140825F04 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     MiZeroMemory @ 0x14038B93C (MiZeroMemory.c)
 *     KeZeroPages @ 0x140423F80 (KeZeroPages.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiAllocateHardwareDescriptor @ 0x140654958 (MiAllocateHardwareDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x140654F0C (MiFreeHardwareDescriptor.c)
 */

__int64 __fastcall MiZeroEngineMemory(_DWORD *a1, unsigned int a2, void *a3, size_t a4)
{
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 HardwareDescriptor; // r12

  v8 = 0;
  if ( !*a1 )
  {
    HardwareDescriptor = MiAllocateHardwareDescriptor();
    if ( HardwareDescriptor )
    {
      ++dword_140C130D0;
      MiZeroMemory(v10, a3, a4, a2, HardwareDescriptor);
      MiFreeHardwareDescriptor(a1, HardwareDescriptor);
      return 0LL;
    }
    v8 = 1;
  }
  if ( a2 == 1 )
    KeZeroPages(a3, a4);
  else
    memset(a3, 0, a4);
  return v8;
}
