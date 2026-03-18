/*
 * XREFs of ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0085628
 * Callers:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0085540 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Grow(
        __int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v2 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v3 = 0;
  if ( v2 <= *(_DWORD *)(a1 + 12) )
    return v3;
  if ( !is_mul_ok(v2, 8uLL) )
    return (unsigned int)-1073741675;
  v4 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                 260LL,
                 8LL * v2,
                 2003858261);
  v5 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v4, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      if ( *(_QWORD *)a1 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          *(void **)a1);
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
