/*
 * XREFs of ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18000EE9C
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18000F170 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180231AB0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1804A3EC0 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1804A5AC0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x180609870 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18000EC20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000F0C4 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x18030CC30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18030CC30.c)
 */

void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Stop(__int64 a1, int a2)
{
  int *v2; // rax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  int v11; // eax
  int *v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31[3]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+130h] [rbp+0h] BYREF
  __int64 v33; // [rsp+140h] [rbp+10h] BYREF
  __int64 v34; // [rsp+148h] [rbp+18h] BYREF

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v12 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v7 = wil::details::static_lazy<WindowManagementLogging>::get(
           v6,
           _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v8 = *(_DWORD **)(v7 + 8);
    if ( *v8 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x400000000000LL) )
    {
      LODWORD(v32) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v10 = *(_QWORD *)(a1 + 48);
      LODWORD(v33) = CurrentThreadId;
      v11 = *(_DWORD *)(v10 + 76);
      v22 = 0LL;
      LODWORD(v34) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v8,
        (int)&unk_1806B34D6,
        v10 + 8,
        0,
        (__int64)&v22,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v14 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                         v13,
                         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v14 > 5u && (unsigned __int8)tlgKeywordOn(v14, 0x400000000000LL) )
    {
      v16 = *(_QWORD *)(a1 + 48);
      v23 = *((_QWORD *)v12 + 15);
      v17 = *((_QWORD *)v12 + 14);
      v22 = 0LL;
      v24 = v17;
      LODWORD(v33) = v12[26];
      v25 = *((_QWORD *)v12 + 12);
      v26 = *((_QWORD *)v12 + 11);
      LODWORD(v34) = v12[20];
      v27 = *((_QWORD *)v12 + 9);
      v18 = v12[8];
      v28 = *((_QWORD *)v12 + 3);
      v19 = *v12;
      v29 = *((_QWORD *)v12 + 16);
      v20 = v12[16];
      v30 = *((_QWORD *)v12 + 7);
      v21 = v12[2];
      LODWORD(v32) = a2;
      v31[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v15,
        (int)&dword_1806B3538,
        v16 + 8,
        (__int64)&v22,
        (__int64)v31,
        (__int64)&v21,
        (__int64)&v30,
        (__int64)&v20,
        (__int64)&v29,
        (__int64)&v19,
        (__int64)&v28,
        (__int64)&v18,
        (__int64)&v27,
        (__int64)&v34,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v33,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v32);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
