/*
 * XREFs of ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x1801BC54C
 * Callers:
 *     ?OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000C080 (-OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x1801909E8 (-IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ.c)
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
    v2 = (_QWORD *)*((_QWORD *)BamoServerConnection + 29);
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
