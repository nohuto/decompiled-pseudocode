/*
 * XREFs of ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x1800AF8CC
 * Callers:
 *     ??$MPCManager_OnMouseSnappedToGaze@$$V@ISMTracing@@SAXXZ @ 0x1800ADBFC (--$MPCManager_OnMouseSnappedToGaze@$$V@ISMTracing@@SAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_OnMouseSnappedToGaze_(ISMTracing *this)
{
  _DWORD *v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v4.Ptr = (ULONGLONG)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v4.Size = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v4);
  }
  v1 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v1 > 4u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_180221329, 0LL, 0LL, 2u, &v4);
}
