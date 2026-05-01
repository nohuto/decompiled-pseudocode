/*
 * XREFs of ??$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@AEBW445@AEBW4Edge@5@AEBW465@@CSnapComponentTelemetry@@SAXAEAW4SnapRegion@@$$QEAPEBG$$QEAPEAUHWND__@@$$QEAW4SnapFillType@SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@4AEBW4Edge@6@5@Z @ 0x1806755E4
 * Callers:
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180676E98 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18066189C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapComponentTelemetry@@W4FillRule@SnapLayoutHelpers@@4W4Edge@7@5@Z @ 0x180677030 (-SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapCo.c)
 */

char __fastcall CSnapComponentTelemetry::SnapFillType<enum SnapRegion &,unsigned short const *,HWND__ *,enum SnapComponentTelemetry::SnapFillType,enum SnapLayoutHelpers::FillRule const &,enum SnapLayoutHelpers::FillRule const &,enum SnapLayoutHelpers::Edge const &,enum SnapLayoutHelpers::Edge const &>(
        unsigned int *a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  char result; // al
  WINBOOL fPending; // [rsp+50h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  result = CSnapComponentTelemetry::IsEnabled((char)a1);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v15 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EBC8;
        qword_18098EBC8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        v16 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v15);
      }
    }
    return CSnapComponentTelemetry::SnapFillType_(*a5, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
  }
  return result;
}
