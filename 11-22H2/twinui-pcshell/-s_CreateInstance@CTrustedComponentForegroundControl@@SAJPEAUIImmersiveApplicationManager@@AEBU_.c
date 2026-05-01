/*
 * XREFs of ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18018A990
 * Callers:
 *     ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x180169130 (-InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIMultitaskingViewTaskCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180067970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIMul.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z @ 0x18018AA7C (--0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrustedComponentForegroundControl::s_CreateInstance(
        struct IImmersiveApplicationManager *a1,
        const struct _GUID *a2,
        void **a3)
{
  CTrustedComponentForegroundControl *v5; // rax
  CTrustedComponentForegroundControl *v6; // rbx
  const struct _GUID *v7; // r10
  int CanCastTo; // eax
  volatile int *v9; // rdx
  _DWORD *v10; // r10
  unsigned int v11; // edi
  void *v12; // r8

  *a3 = 0LL;
  v5 = (CTrustedComponentForegroundControl *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
    return (unsigned int)-2147024882;
  v6 = CTrustedComponentForegroundControl::CTrustedComponentForegroundControl(v5, a1);
  if ( !v6 )
    return (unsigned int)-2147024882;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_f76880f4_de44_4d29_802e_784369919a93, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = v6;
    (*(void (__fastcall **)(CTrustedComponentForegroundControl *))(*(_QWORD *)v6 + 8LL))(v6);
    v11 = 0;
    goto LABEL_8;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v6, v7, a3);
  v11 = -2147467262;
  if ( CanCastTo != -2147467262 )
  {
    v11 = CanCastTo;
    if ( CanCastTo < 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( InlineIsEqualGUID(v10, v9) )
  {
    *a3 = v12;
    v11 = 0;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
LABEL_8:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::Release(
    (__int64)v6,
    v9);
  return v11;
}
