/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18000D224
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180022FD0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18000D300 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CBaseGeometryProxy>(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3)
{
  __int64 v6; // rax
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v7 = (CBaseObject *)v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)v6 = &CAnimationProxy::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v8 = CResourceProxy::InitializeFromSharedHandle(v6, 14LL, *(_QWORD *)(a1 + 16), a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x7Du);
    }
    else
    {
      *a3 = v7;
      v9 = 0;
    }
  }
  else
  {
    v7 = 0LL;
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x77u);
  }
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
