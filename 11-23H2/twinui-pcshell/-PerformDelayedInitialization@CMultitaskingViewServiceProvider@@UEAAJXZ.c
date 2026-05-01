/*
 * XREFs of ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x1801BCB80
 * Callers:
 *     <none>
 * Callees:
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800E1C6C (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800E8438 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    v4 = 187LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = CMultitaskingViewServiceProvider::_CreateHotKeyHandler(v1);
  if ( started < 0 )
  {
    v4 = 190LL;
    goto LABEL_6;
  }
  return (unsigned int)started;
}
