/*
 * XREFs of ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18017F580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800D8FCC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800FD160 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::PerformDelayedInitialization(IUnknown **this)
{
  CMultitaskingViewServiceProvider *v1; // rdi
  int started; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CMultitaskingViewServiceProvider *)(this - 3);
  started = CMultitaskingViewServiceProvider::_StartMTVThread(this - 3);
  if ( started < 0 )
  {
    v4 = 183LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = CMultitaskingViewServiceProvider::_CreateHotKeyHandler(v1);
  if ( started < 0 )
  {
    v4 = 186LL;
    goto LABEL_6;
  }
  return (unsigned int)started;
}
