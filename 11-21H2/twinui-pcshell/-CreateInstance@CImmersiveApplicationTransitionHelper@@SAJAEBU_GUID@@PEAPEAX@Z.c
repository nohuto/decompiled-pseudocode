/*
 * XREFs of ?CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801676E0
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800DCE30 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveApplicationTransitionHelper@@QEAA@XZ @ 0x18016777C (--0CImmersiveApplicationTransitionHelper@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApplicationTransitionHelper::CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveApplicationTransitionHelper *v3; // rax
  CImmersiveApplicationTransitionHelper *v4; // rax
  CImmersiveApplicationTransitionHelper *v5; // rbx
  unsigned int v6; // edi

  *a2 = 0LL;
  v3 = (CImmersiveApplicationTransitionHelper *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = CImmersiveApplicationTransitionHelper::CImmersiveApplicationTransitionHelper(v3);
    v5 = v4;
    if ( v4 )
    {
      v6 = (**(__int64 (__fastcall ***)(CImmersiveApplicationTransitionHelper *, GUID *, void **))v4)(
             v4,
             &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
             a2);
      goto LABEL_4;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = -2147024882;
LABEL_4:
  if ( v5 )
    (*(void (__fastcall **)(CImmersiveApplicationTransitionHelper *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
