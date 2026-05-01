/*
 * XREFs of ??$_CreatePropertyBagBindCtx@K@@YAJPEAUIBindCtx@@PEBGKPEAPEAU0@@Z @ 0x1806C9980
 * Callers:
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1806CDD00 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _CreatePropertyBagBindCtx<unsigned long>(__int64 a1, void *a2, DWORD a3, LPBC *a4)
{
  HRESULT BindCtx; // ebx
  void *ppv; // [rsp+38h] [rbp+10h] BYREF

  ppv = a2;
  *a4 = 0LL;
  BindCtx = CreateBindCtx(0, a4);
  if ( BindCtx >= 0 )
  {
    ppv = 0LL;
    BindCtx = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( BindCtx < 0 )
      goto LABEL_6;
    BindCtx = PSPropertyBag_WriteDWORD((IPropertyBag *)ppv, L"SHCONTF", a3);
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
