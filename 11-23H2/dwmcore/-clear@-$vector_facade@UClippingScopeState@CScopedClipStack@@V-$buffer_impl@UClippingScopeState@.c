/*
 * XREFs of ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800A1574
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x1800A13FC (--1CScopedClipStack@@QEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800A1488 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = 0xD37A6F4DE9BD37A7uLL;
  v2 = 0xD37A6F4DE9BD37A7uLL * ((a1[1] - *a1) >> 3);
  if ( v2 )
    return detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v2);
  return result;
}
