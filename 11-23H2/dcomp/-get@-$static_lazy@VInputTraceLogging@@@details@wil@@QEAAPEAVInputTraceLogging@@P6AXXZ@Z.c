/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180084734
 * Callers:
 *     _lambda_056f8fc17ddf877fd0b445b7a631ca98_::_lambda_invoker_cdecl_ @ 0x180084660 (_lambda_056f8fc17ddf877fd0b445b7a631ca98_--_lambda_invoker_cdecl_.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEAX0@Z @ 0x1800846C8 (-Duplicate@InputSink@InputTraceLogging@@SAXPEAX0@Z.c)
 *     ?ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z @ 0x1800F8F68 (-ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z.c)
 *     ?TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z @ 0x180153FDC (-TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x1800847D4 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1800961FC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7) && (_DWORD)v6 )
  {
    v4 = &`InputTraceLogging::Instance'::`2'::wrapper;
    v7 = &qword_18021D030;
    qword_18021D030 = (__int64)&wil::details::FeatureLogging::`vftable';
    qword_18021D048 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v4);
  }
  return v7;
}
