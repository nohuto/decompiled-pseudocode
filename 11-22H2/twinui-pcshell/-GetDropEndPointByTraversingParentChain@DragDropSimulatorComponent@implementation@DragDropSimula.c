/*
 * XREFs of ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x18062B13C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180629ABC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$com_ptr_t@UIDragDropExtensionForOLE@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18062B080 (-GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ?TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z @ 0x18062C7D4 (-TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z.c)
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x18062CF54 (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

// Hidden C++ exception states: #wind=4
HWND *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDropEndPointByTraversingParentChain(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *a1,
        HWND *a2,
        HWND a3)
{
  __int64 v6; // rcx
  DWORD v7; // ebx
  HANDLE PropW; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  HWND Parent; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rcx
  _BYTE v19[4]; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  LPVOID v22[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h] BYREF
  DWORD dwProcessId; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF

  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionPoint(
    a1,
    v22);
  GetWindowThreadProcessId(a3, &dwProcessId);
  v7 = dwProcessId;
  if ( a3 )
  {
    while ( 1 )
    {
      DragDropSimulatorTelemetryProvider::TraceWindowInfo(a3);
      if ( !*((_WORD *)a1 + 52) )
        *((_WORD *)a1 + 52) = GlobalAddAtomW(L"OleEndPointID");
      PropW = GetPropW(a3, (LPCWSTR)*((unsigned __int16 *)a1 + 52));
      if ( PropW )
      {
        v21 = 0LL;
        if ( (int)InternalGetWindowPropInterface2(a3, PropW, 0LL, &GUID_00000160_0000_0000_c000_000000000046, &v21, v19) >= 0 )
        {
          v9 = v21;
          if ( v21 )
          {
            *a2 = a3;
            v26 = 0LL;
            a2[1] = 0LL;
            a2[2] = (HWND)v9;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
            goto LABEL_17;
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      }
      v20 = 0LL;
      v10 = *(_QWORD *)v22[0];
      v20 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, HWND, _QWORD, __int64 *))(v10 + 40))(v22[0], a3, 0LL, &v20) >= 0 )
      {
        v11 = v20;
        if ( v20 )
          break;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
      Parent = GetParent(a3);
      a3 = Parent;
      if ( Parent )
      {
        GetWindowThreadProcessId(Parent, (LPDWORD)&v26);
        if ( (_DWORD)v26 == v7 )
          continue;
      }
      goto LABEL_12;
    }
    *a2 = a3;
    a2[1] = (HWND)v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v26 = 0LL;
    a2[2] = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    v17 = &v20;
  }
  else
  {
LABEL_12:
    v13 = *(_DWORD **)(wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
                         v6,
                         _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v21 = 0x2000000LL;
      LODWORD(v26) = -2147467259;
      v20 = (__int64)"Appropriate window is not found";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v14,
        byte_18086F910,
        v15,
        v16,
        (const wchar_t **)&v20,
        (__int64)&v26,
        (__int64)&v21);
    }
    v22[1] = 0LL;
    v21 = 0LL;
    v26 = 0LL;
    *a2 = 0LL;
    v23 = 0LL;
    a2[1] = 0LL;
    v24 = 0LL;
    a2[2] = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    v17 = &v21;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v17);
LABEL_17:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
  return a2;
}
