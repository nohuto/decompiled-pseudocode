/*
 * XREFs of ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800208A8
 * Callers:
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x1800512C0 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7018 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A84D4 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CEffectGroupProxy>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  CBaseObject *v8; // r14
  int v9; // edi
  unsigned int v10; // ebp
  int v12; // r15d
  unsigned int v13; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &CEffectGroupProxy::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x77u, 0LL);
    goto LABEL_9;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v5 + 16) = 0LL;
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v8 = (CBaseObject *)v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, 0LL);
    v10 = -2147024882;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x10u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x79u, 0LL);
    goto LABEL_9;
  }
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)v7 = &CResource::`vftable';
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 16) = v6;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, 11LL, v7 + 24);
  if ( v9 < 0 )
  {
    v13 = 68;
LABEL_13:
    v12 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v13, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x29u, 0LL);
    CBaseObject::Release(v8);
    v10 = v9;
    goto LABEL_19;
  }
  if ( !*((_DWORD *)v8 + 6) )
  {
    v9 = -2147024882;
    v13 = 69;
    goto LABEL_13;
  }
  *(_QWORD *)(v5 + 16) = v8;
  *a2 = v5;
  v10 = 0;
LABEL_9:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  return v10;
}
