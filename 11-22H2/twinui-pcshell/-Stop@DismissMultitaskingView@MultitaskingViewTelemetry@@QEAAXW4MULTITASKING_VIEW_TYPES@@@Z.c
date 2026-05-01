/*
 * XREFs of ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18002D1BC
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18002D5C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802E0300 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180563110 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x180773D40 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18002CD64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D3B8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x1803C914C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1803C914C.c)
 */

__int64 __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Stop(__int64 a1, int a2)
{
  int *v2; // rax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  int v11; // eax
  int *v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  int v20; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+100h] [rbp-30h] BYREF
  __int64 v32[3]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v33; // [rsp+130h] [rbp+0h] BYREF
  __int64 v34; // [rsp+140h] [rbp+10h] BYREF
  __int64 v35; // [rsp+148h] [rbp+18h] BYREF

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v13 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v7 = wil::details::static_lazy<WindowManagementLogging>::get(
           v6,
           _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v8 = *(_DWORD **)(v7 + 8);
    if ( *v8 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x400000000000LL) )
    {
      LODWORD(v33) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v10 = *(_QWORD *)(a1 + 48);
      LODWORD(v34) = CurrentThreadId;
      v11 = *(_DWORD *)(v10 + 76);
      v23 = 0LL;
      LODWORD(v35) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v8,
        (int)&unk_18086649F,
        v10 + 8,
        0,
        (__int64)&v23,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v15 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                         v14,
                         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v15 > 5u && (unsigned __int8)tlgKeywordOn(v15, 0x400000000000LL) )
    {
      v17 = *(_QWORD *)(a1 + 48);
      v24 = *((_QWORD *)v13 + 15);
      v18 = *((_QWORD *)v13 + 14);
      v23 = 0LL;
      v25 = v18;
      LODWORD(v34) = v13[26];
      v26 = *((_QWORD *)v13 + 12);
      v27 = *((_QWORD *)v13 + 11);
      LODWORD(v35) = v13[20];
      v28 = *((_QWORD *)v13 + 9);
      v19 = v13[8];
      v29 = *((_QWORD *)v13 + 3);
      v20 = *v13;
      v30 = *((_QWORD *)v13 + 16);
      v21 = v13[16];
      v31 = *((_QWORD *)v13 + 7);
      v22 = v13[2];
      LODWORD(v33) = a2;
      v32[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v16,
        (int)&dword_1808661DF,
        v17 + 8,
        (__int64)&v23,
        (__int64)v32,
        (__int64)&v22,
        (__int64)&v31,
        (__int64)&v21,
        (__int64)&v30,
        (__int64)&v20,
        (__int64)&v29,
        (__int64)&v19,
        (__int64)&v28,
        (__int64)&v35,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v34,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v33);
    }
  }
  return wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
