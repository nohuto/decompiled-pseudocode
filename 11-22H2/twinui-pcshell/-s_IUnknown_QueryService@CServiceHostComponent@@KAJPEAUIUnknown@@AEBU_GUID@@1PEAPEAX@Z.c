/*
 * XREFs of ?s_IUnknown_QueryService@CServiceHostComponent@@KAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180640F80
 * Callers:
 *     ?v_DelegatingQueryService@CServiceHostComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1806410E0 (-v_DelegatingQueryService@CServiceHostComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CServiceHostComponent::s_IUnknown_QueryService(
        struct IUnknown *a1,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0LL;
  v7 = -2147467263;
  if ( a1
    && ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &v9) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v9 + 24LL))(
           v9,
           a2,
           a3,
           a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
