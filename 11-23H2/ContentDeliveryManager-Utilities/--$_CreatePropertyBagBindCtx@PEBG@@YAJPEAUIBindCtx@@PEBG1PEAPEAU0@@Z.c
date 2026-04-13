/*
 * XREFs of ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x18002966C
 * Callers:
 *     ??R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z @ 0x18002E308 (--R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _CreatePropertyBagBindCtx<unsigned short const *>(__int64 a1, __int64 a2, void *a3, LPBC *a4)
{
  HRESULT BindCtx; // ebx
  void *ppv; // [rsp+40h] [rbp+18h] BYREF

  ppv = a3;
  *a4 = 0LL;
  BindCtx = CreateBindCtx(0, a4);
  if ( BindCtx >= 0 )
  {
    ppv = 0LL;
    BindCtx = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( BindCtx < 0 )
      goto LABEL_6;
    BindCtx = PSPropertyBag_WriteStr((IPropertyBag *)ppv, L"ExplicitProgid", L"jpegFile");
    if ( BindCtx >= 0 )
      BindCtx = ((__int64 (__fastcall *)(LPBC, const wchar_t *, void *))(*a4)->lpVtbl->RegisterObjectParam)(
                  *a4,
                  L"SHBindCtxPropertyBag",
                  ppv);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( BindCtx < 0 )
    {
LABEL_6:
      ((void (__fastcall *)(LPBC))(*a4)->lpVtbl->Release)(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)BindCtx;
}
