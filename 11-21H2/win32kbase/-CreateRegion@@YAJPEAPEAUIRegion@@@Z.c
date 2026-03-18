/*
 * XREFs of ?CreateRegion@@YAJPEAPEAUIRegion@@@Z @ 0x1C0093B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall CreateRegion(struct IRegion **a1)
{
  __int64 v2; // rax
  struct IRegion *v3; // rdx

  v2 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
         260LL,
         0x18uLL,
         1852273223);
  v3 = (struct IRegion *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 12) = 0;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)v2 = &CRegion::`vftable';
    *(_DWORD *)(v2 + 8) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
