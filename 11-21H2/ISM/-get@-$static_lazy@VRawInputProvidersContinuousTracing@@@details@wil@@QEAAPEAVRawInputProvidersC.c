/*
 * XREFs of ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800C3B80
 * Callers:
 *     ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800BCEE0 (--$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersCont.c)
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800C0178 (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800C0490 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800C0508 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x1800C073C (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x1800C0814 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800C1AA0 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800C2310 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x1800BAD30 (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  LPINIT_ONCE v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper;
    v7 = &qword_180242CF8;
    qword_180242CF8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242D10 = (__int64)&`RawInputProvidersContinuousTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  return v7;
}
