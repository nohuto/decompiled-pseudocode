/*
 * XREFs of ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801AD49C
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800FA538 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800FF9E0 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRealmActivationHistory::s_CreateInstance(
        struct IImmersiveApplicationManagerInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  CRealmActivationHistory *v5; // rax
  CRealmActivationHistory *v6; // rax
  CRealmActivationHistory *v7; // rbx
  unsigned int v8; // edi

  *a3 = 0LL;
  v5 = (CRealmActivationHistory *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CRealmActivationHistory::CRealmActivationHistory(v5, a1);
    v7 = v6;
    if ( v6 )
    {
      v8 = (**(__int64 (__fastcall ***)(CRealmActivationHistory *, GUID *, void **))v6)(
             v6,
             &GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600,
             a3);
      goto LABEL_4;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = -2147024882;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(CRealmActivationHistory *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
