/*
 * XREFs of ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C0055C14
 * Callers:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0055B6C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

struct GdiHandleEntryTable::EntryDataLookupTable *__fastcall GdiHandleEntryTable::EntryDataLookupTable::Create(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi

  v2 = 8 * ((unsigned int)(a1 + 255) >> 8);
  if ( v2 >= 0xFFFFFFF0 )
    return 0LL;
  v3 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
         260LL,
         v2 + 16,
         1953260871);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = v3 + 16;
    *(_DWORD *)(v3 + 8) = a1;
    memset((void *)(v3 + 16), 0, v2);
  }
  return (struct GdiHandleEntryTable::EntryDataLookupTable *)v4;
}
