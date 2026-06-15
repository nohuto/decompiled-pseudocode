/*
 * XREFs of ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800F831C
 * Callers:
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18014EF90 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall ATL::CComAllocator::Allocate(unsigned __int64 a1)
{
  if ( a1 <= 0x7FFFFFFF )
    return CoTaskMemAlloc((unsigned int)a1);
  else
    return 0LL;
}
