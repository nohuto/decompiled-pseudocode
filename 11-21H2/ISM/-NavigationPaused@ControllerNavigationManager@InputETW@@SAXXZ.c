/*
 * XREFs of ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180171D80
 * Callers:
 *     ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180172324 (-PauseNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::ControllerNavigationManager::NavigationPaused(char a1)
{
  __int64 v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF

  if ( InputETW::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v4.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v4.Size = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v4);
    }
    v1 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v1 > 5u && (*(_BYTE *)(v1 + 16) & 1) != 0 && (*(_QWORD *)(v1 + 24) & 1LL) == *(_QWORD *)(v1 + 24) )
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_180205C2A, 0LL, 0LL, 2u, &v4);
  }
}
