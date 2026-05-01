/*
 * XREFs of ?GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1804D0D24
 * Callers:
 *     ?GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1804D0DB8 (-GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1804D1CE0 (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GridLayoutFactory::LayoutRow::GetMaxHeight(GridLayoutFactory::LayoutRow *this)
{
  int v1; // esi
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  v1 = 0;
  v2 = *(_QWORD **)this;
  v4 = *(_QWORD *)this + 16LL * *((_QWORD *)this + 1);
  while ( v2 != (_QWORD *)v4 )
  {
    if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 56LL))(*v2) > v1 )
      v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 56LL))(*v2);
    v2 += 2;
  }
  result = *((unsigned int *)this + 9);
  if ( (int)result >= v1 )
    return (unsigned int)v1;
  return result;
}
