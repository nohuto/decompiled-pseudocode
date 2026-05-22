/*
 * XREFs of ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D7E84
 * Callers:
 *     GetHolographicInputSession @ 0x1800D8CB8 (GetHolographicInputSession.c)
 *     _GetHolographicInputSession_::_1_::dtor$3 @ 0x1800D8F8D (_GetHolographicInputSession_--_1_--dtor$3.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA3C0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _SpatialRimDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800DA4B8 (_SpatialRimDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800DA590 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     _SpatialRimDeviceCollection::OnFinalRelease_::_1_::dtor$0 @ 0x1800DA6D0 (_SpatialRimDeviceCollection--OnFinalRelease_--_1_--dtor$0.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800DC010 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TraceSessionConfig::~TraceSessionConfig(TraceSessionConfig *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 15) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::wstring::_Tidy_deallocate((__int64)this + 48);
  std::wstring::_Tidy_deallocate((__int64)this);
}
