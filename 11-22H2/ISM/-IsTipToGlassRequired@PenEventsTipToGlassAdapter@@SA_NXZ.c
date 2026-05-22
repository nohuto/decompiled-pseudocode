/*
 * XREFs of ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x1801E80EC
 * Callers:
 *     ?OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800172A0 (-OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x1801BCBD8 (-IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
char PenEventsTipToGlassAdapter::IsTipToGlassRequired(void)
{
  char IsTipToGlassRequired; // di
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v2; // rbx
  PenEventsDispatcherPrincipal *v3; // rax

  IsTipToGlassRequired = 0;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( BamoServerConnection )
  {
    v2 = (_QWORD *)*((_QWORD *)BamoServerConnection + 31);
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD *))*v2)(v2);
      v3 = (PenEventsDispatcherPrincipal *)(*(__int64 (__fastcall **)(_QWORD *))(v2[1] + 184LL))(v2 + 1);
      if ( v3 )
        IsTipToGlassRequired = PenEventsDispatcherPrincipal::IsTipToGlassRequired(v3);
    }
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  }
  return IsTipToGlassRequired;
}
