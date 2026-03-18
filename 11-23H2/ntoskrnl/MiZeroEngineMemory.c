/*
 * XREFs of MiZeroEngineMemory @ 0x1402D1280
 * Callers:
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408253A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     MiZeroMemory @ 0x14038DE4C (MiZeroMemory.c)
 *     KeZeroPages @ 0x140424640 (KeZeroPages.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiAllocateHardwareDescriptor @ 0x1406548E8 (MiAllocateHardwareDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x140654E9C (MiFreeHardwareDescriptor.c)
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
      ++dword_140C130B0;
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
