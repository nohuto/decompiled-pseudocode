/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewGestureStateInternal@@@Z @ 0x1800FDB14
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800FDA34 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExper.c)
 *     ??0MultitaskingViewGestureState@@QEAA@XZ @ 0x1800FDC98 (--0MultitaskingViewGestureState@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,>(
        void **a1)
{
  MultitaskingViewGestureState *v2; // rax
  MultitaskingViewGestureState *v3; // rdi
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // r9
  const struct _GUID *v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  volatile int *v10; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v2 = (MultitaskingViewGestureState *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = MultitaskingViewGestureState::MultitaskingViewGestureState(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2e123451_6a45_4fbf_bcb0_36d47e161041, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(MultitaskingViewGestureState *))(*(_QWORD *)v3 + 8LL))(v3);
    v9 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, &GUID_4639c886_cffe_492c_915a_1e3f02d22434) )
    {
      *a1 = v3;
      goto LABEL_6;
    }
    if ( InlineIsEqualGUID(v5, v6) )
    {
      *a1 = (void *)v8;
LABEL_6:
      v9 = 0;
LABEL_7:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_8;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v7, a1);
    v9 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v9 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_7;
    }
  }
LABEL_8:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
      (__int64)v3,
      v10);
  return v9;
}
