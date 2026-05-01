/*
 * XREFs of ?IUnknown_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800279EC
 * Callers:
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1800279B8 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IUnknown_QueryObject(struct IUnknown *a1, const struct _GUID *a2, const struct _GUID *a3, void **a4)
{
  int v5; // ebx
  const struct _GUID *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *a4 = 0LL;
  v5 = -2147467262;
  if ( a1 )
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, const struct _GUID **))a1->lpVtbl->QueryInterface)(
           a1,
           &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
           &v7);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(const struct _GUID *, GUID *, GUID *, void **))(*(_QWORD *)&v7->Data1 + 24LL))(
             v7,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             a4);
      (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v7->Data1 + 16LL))(v7);
    }
  }
  return (unsigned int)v5;
}
