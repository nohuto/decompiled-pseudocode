/*
 * XREFs of ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18003FFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordSRUMFeatureUsage(wil::details *this, __int64 a2, __int64 a3)
{
  LODWORD(a2) = a2 | 0x40000000;
  if ( g_wil_details_internalRecordFeatureUsage )
  {
    ((void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))g_wil_details_internalRecordFeatureUsage)(
      this,
      a2,
      a3,
      0LL);
  }
  else if ( g_wil_details_apiRecordFeatureUsage )
  {
    g_wil_details_apiRecordFeatureUsage((unsigned int)this, a2, a3, 0LL);
  }
}
