/*
 * XREFs of ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x140050BB0
 * Callers:
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x140052430 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14005258C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

void __fastcall ATL::AtlCallTermFunc(struct ATL::_ATL_MODULE70 *a1, unsigned int a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  if ( !a1 )
  {
    ATL::_AtlRaiseException(0xC0000005, a2);
    __debugbreak();
  }
  v3 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    do
    {
      ((void (__fastcall *)(_QWORD))*v3)(v3[1]);
      v4 = (_QWORD *)v3[2];
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
