/*
 * XREFs of ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x18062B4D0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180629ABC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@PEAU8@@Z @ 0x18062C978 (-TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x18062CF54 (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

HWND __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetInitialTargetWindowFromPoint(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        const struct tagPOINT *a2,
        HWND a3,
        HWND a4)
{
  HWND result; // rax
  const char *v7; // r9
  HWND v8; // rax
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct tagPOINT Point; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  Point = (struct tagPOINT)this;
  if ( a4 )
    return a4;
  while ( 1 )
  {
    Point = *a2;
    if ( !ScreenToClient(a3, &Point) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xFD,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        v7);
    v8 = ChildWindowFromPointEx(a3, Point, 5u);
    if ( a3 == v8 || !v8 )
      break;
    a3 = v8;
  }
  result = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::TryToGetInputSiteWindow(
             v9,
             a3);
  if ( !result )
  {
    result = a3;
    if ( !a3 )
    {
      v11 = *(_DWORD **)(wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
                           v10,
                           _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v11 > 5u )
      {
        if ( tlgKeywordOn((__int64)v11, 0x400000000000LL) )
        {
          v18 = 0x2000000LL;
          v15 = (__int64)"GetInitialTargetWindowFromPoint: no window";
          Point.x = -2147467259;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v12,
            byte_18086F910,
            v13,
            v14,
            (const wchar_t **)&v15,
            (__int64)&Point,
            (__int64)&v18);
        }
      }
      return 0LL;
    }
  }
  return result;
}
