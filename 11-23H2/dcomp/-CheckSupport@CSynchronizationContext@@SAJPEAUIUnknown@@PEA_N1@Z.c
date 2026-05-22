/*
 * XREFs of ?CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z @ 0x1801AEAF4
 * Callers:
 *     ?CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A0810 (-CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?Create@CPresentationFactory@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEE60 (-Create@CPresentationFactory@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckSupport@CSynchronizationContext11@@SAJPEAUID3D11Device@@PEA_N1@Z @ 0x1801B1468 (-CheckSupport@CSynchronizationContext11@@SAJPEAUID3D11Device@@PEA_N1@Z.c)
 */

__int64 __fastcall CSynchronizationContext::CheckSupport(struct IUnknown *a1, bool *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct ID3D11Device *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct ID3D11Device **))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_db6f6ddb_ac77_4e88_8253_819df9bbf140,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 17;
    goto LABEL_5;
  }
  v5 = CSynchronizationContext11::CheckSupport(v9, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 18;
LABEL_5:
    DoStackCaptureDirect(v5, v7);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v9);
  return v6;
}
