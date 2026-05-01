/*
 * XREFs of sub_180004410 @ 0x180004410
 * Callers:
 *     sub_180003834 @ 0x180003834 (sub_180003834.c)
 *     sub_180003BC8 @ 0x180003BC8 (sub_180003BC8.c)
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     sub_180004310 @ 0x180004310 (sub_180004310.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180004410(_QWORD *a1)
{
  __int64 v2; // rcx
  LPUNKNOWN v3; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v5; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp+8h] BYREF

  *a1 = &off_180020660;
  a1[3] = 0LL;
  ppunkMarshal = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v2 = a1[3];
    v3 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    if ( v2 )
    {
      a1[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    ((void (__fastcall *)(LPUNKNOWN, void *, _QWORD *))QueryInterface)(v3, &unk_1800261D0, a1 + 3);
  }
  v5 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v5->lpVtbl->Release)(v5);
  }
  return a1;
}
