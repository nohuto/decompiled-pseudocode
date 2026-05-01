/*
 * XREFs of ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18016013C
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800DCE30 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRotationManagerSync@@QEAA@XZ @ 0x1801601C8 (--0CRotationManagerSync@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CRotationManagerSync *v3; // rax
  CRotationManagerSync *v4; // rcx
  const struct _GUID *v5; // rcx
  unsigned int v6; // ebx
  const struct _GUID *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *a2 = 0LL;
  v3 = (CRotationManagerSync *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = CRotationManagerSync::CRotationManagerSync(v3);
  else
    v4 = 0LL;
  v5 = (const struct _GUID *)(((unsigned __int64)v4 + 72) & -(__int64)(v4 != 0LL));
  v8 = v5;
  if ( v5 )
    v6 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v5->Data1)(
           v5,
           &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
           a2);
  else
    v6 = -2147024882;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return v6;
}
