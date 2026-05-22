/*
 * XREFs of ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x180040F88
 * Callers:
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z @ 0x180040FF8 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z.c)
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012FD20 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CPathData>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
