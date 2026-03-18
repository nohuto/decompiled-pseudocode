/*
 * XREFs of ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800B97DC
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800B4D9C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800B96CC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800B96CC.c)
 */

_QWORD *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
        void **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  char *i; // rax
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*a3 - (_QWORD)*a1) >> 2);
  v7 = a4;
  for ( i = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
              a1,
              v6,
              a4); v7; --v7 )
  {
    *(_QWORD *)i = *(_QWORD *)a5;
    i += 12;
    *((_DWORD *)i - 1) = *(_DWORD *)(a5 + 8);
  }
  result = a2;
  *a2 = (char *)*a1 + 12 * v6;
  return result;
}
