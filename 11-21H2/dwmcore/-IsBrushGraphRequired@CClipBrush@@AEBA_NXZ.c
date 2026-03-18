/*
 * XREFs of ?IsBrushGraphRequired@CClipBrush@@AEBA_NXZ @ 0x18020B120
 * Callers:
 *     ?OnBrushChanged@CCompositionTextLine@@UEAAXXZ @ 0x180210440 (-OnBrushChanged@CCompositionTextLine@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CClipBrush::IsBrushGraphRequired(CClipBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 11);
  if ( v3
    && ((*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 55LL)
     || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 56LL))(
          *((_QWORD *)this + 11),
          135LL)) )
  {
    return 1;
  }
  return v2;
}
