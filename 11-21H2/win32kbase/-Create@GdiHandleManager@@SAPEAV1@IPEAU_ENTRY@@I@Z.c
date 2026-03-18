/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0055A2C
 * Callers:
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C0055ACC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(__int64 a1, struct _ENTRY *a2, unsigned int a3)
{
  struct _ENTRY *v3; // rbp
  unsigned int v5; // esi
  __int64 v6; // rax
  _QWORD *v7; // rbx
  struct GdiHandleEntryDirectory *v8; // rax

  v3 = (struct _ENTRY *)gpGdiSharedMemory;
  v5 = gMaxGdiHandleCount;
  if ( a3 < 0x10000 && a3 < gMaxGdiHandleCount )
    return 0LL;
  v6 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
         260LL,
         0x20uLL,
         1668114503);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_DWORD *)(v6 + 8) = v5;
  v8 = GdiHandleEntryDirectory::Create(v3, a3);
  v7[2] = v8;
  if ( !v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
    return 0LL;
  }
  return (struct GdiHandleManager *)v7;
}
