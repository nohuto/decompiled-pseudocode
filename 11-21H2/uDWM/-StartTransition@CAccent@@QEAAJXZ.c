/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x180007F08
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180007F70 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000806C (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180047C2C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180099170 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(CAccent *this)
{
  int updated; // edi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  updated = CAccent::_UpdateResources(this);
  if ( updated < 0 )
  {
    v4 = 889;
    goto LABEL_14;
  }
  if ( !CAccent::s_IsPolicyActive((CAccent *)((char *)this + 304)) || !CAccent::_IsAnimationNeeded(this) )
  {
    updated = CAccent::EndTransition(this);
    if ( updated >= 0 )
      return (unsigned int)updated;
    v4 = 907;
    goto LABEL_14;
  }
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
    CBaseObject::Release((CBaseObject *)(v5 + 8));
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         40LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 1;
    *(_DWORD *)(v6 + 36) = -1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)v6 = &CAccentTransition::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v6 + 8) = &CAccentTransition::`vftable'{for `CBaseObject'};
  }
  *((_QWORD *)this + 49) = v6;
  updated = CAccentTransition::StartAnimation((CAccentTransition *)v6, (CAccent *)((char *)this + 304), this);
  if ( updated < 0 )
  {
    v4 = 902;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v4);
    v7 = *((_QWORD *)this + 49);
    if ( v7 )
    {
      CBaseObject::Release((CBaseObject *)(v7 + 8));
      *((_QWORD *)this + 49) = 0LL;
    }
  }
  return (unsigned int)updated;
}
