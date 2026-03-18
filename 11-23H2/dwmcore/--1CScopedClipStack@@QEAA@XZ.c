/*
 * XREFs of ??1CScopedClipStack@@QEAA@XZ @ 0x1800A13FC
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A11C4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800A1488 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800A1574 (-clear@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeState@.c)
 *     ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800A15A0 (-clear@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CS.c)
 */

void __fastcall CScopedClipStack::~CScopedClipStack(void **this)
{
  CScopedClipStack *v2; // rcx
  void *v3; // rcx
  bool v4; // zf

  CScopedClipStack::Clear((CScopedClipStack *)this);
  operator delete(this[292]);
  operator delete(this[288]);
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear(this + 233);
  v2 = (CScopedClipStack *)this[233];
  this[233] = 0LL;
  if ( v2 == (CScopedClipStack *)(this + 236) )
    v2 = 0LL;
  operator delete(v2);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(this);
  v3 = *this;
  v4 = *this == this + 3;
  *this = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
