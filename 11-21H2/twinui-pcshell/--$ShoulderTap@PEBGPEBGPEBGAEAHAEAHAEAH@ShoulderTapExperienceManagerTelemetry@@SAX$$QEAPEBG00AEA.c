/*
 * XREFs of ??$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEAH11@Z @ 0x18036C2A0
 * Callers:
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x18036DC30 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18036C794 (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18036CBC8 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x18036DDA0 (-ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::ShoulderTap<unsigned short const *,unsigned short const *,unsigned short const *,int &,int &,int &>(
        const unsigned __int16 **a1,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        int *a4,
        int *a5,
        int *a6)
{
  WINBOOL fPending; // [rsp+40h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp-10h]

  if ( ShoulderTapExperienceManagerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v12 = &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4E58;
        qword_1807B4E58 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
        v13 = 0;
        wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::Completer::~Completer(&v12);
      }
    }
    ShoulderTapExperienceManagerTelemetry::ShoulderTap_(
      (ShoulderTapExperienceManagerTelemetry *)(unsigned int)*a5,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6);
  }
}
