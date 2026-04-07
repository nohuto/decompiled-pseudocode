/*
 * XREFs of ??$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800ADDAC
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A84D4 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180021FEC (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CRotateTransformProxy>(__int64 a1, CBaseObject **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = (CBaseObject *)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v6 = CResource::Create(0x20u, *(_QWORD *)(a1 + 24), (CBaseObject **)(v4 + 16));
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      v7 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x10u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x79u);
    }
  }
  else
  {
    v5 = 0LL;
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x77u);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
