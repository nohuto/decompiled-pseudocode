/*
 * XREFs of ??$MakeAndInitialize@V?$EventInvocationContextProvider@$00@details@wil@@UIEventInvocationContextProvider@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContextProvider@details@wil@@@Z @ 0x1801986DC
 * Callers:
 *     ??0HolographicPositioner@@QEAA@XZ @ 0x1800FEBAC (--0HolographicPositioner@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003F080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??0?$EventInvocationContextProvider@$00@details@wil@@QEAA@XZ @ 0x1801987A4 (--0-$EventInvocationContextProvider@$00@details@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802CF162 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefe_ea_1802CF162.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContextProvider<1>,wil::details::IEventInvocationContextProvider,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rdx
  int CanCastTo; // edi

  *a1 = 0LL;
  v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = wil::details::EventInvocationContextProvider<1>::EventInvocationContextProvider<1>(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_135f9b01_31e9_4797_9f9a_d6be38d3e800, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v5, v6) )
    {
      *a1 = v3;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  v3 + 8,
                  v7,
                  a1);
    if ( CanCastTo >= 0 )
      goto LABEL_6;
  }
LABEL_7:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v3);
  return (unsigned int)CanCastTo;
}
