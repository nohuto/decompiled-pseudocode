/*
 * XREFs of ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1805909C4
 * Callers:
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18058F308 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18001C4D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFE7C (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800F43D8 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x18058EA00 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18058EA00.c)
 */

void __fastcall MultitaskingViewTelemetry::DragSwitchItem::Stop(
        MultitaskingViewTelemetry::DragSwitchItem *this,
        int a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rsi
  enum _TABLETMODESTATE *v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rdi
  enum _TABLETMODESTATE *v17; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  int v20; // eax
  int v21; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v22; // [rsp+B4h] [rbp-7Ch] BYREF
  int v23; // [rsp+B8h] [rbp-78h] BYREF
  int v24; // [rsp+BCh] [rbp-74h] BYREF
  int v25; // [rsp+C0h] [rbp-70h] BYREF
  int v26; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v27; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+100h] [rbp-30h] BYREF
  __int64 v35[5]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v36; // [rsp+140h] [rbp+10h] BYREF
  __int64 v37; // [rsp+150h] [rbp+20h] BYREF
  __int64 v38; // [rsp+158h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = wil::details::static_lazy<WindowManagementLogging>::get(
            v14,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v16 = (_DWORD *)v15[1];
    if ( *v16 > 5u && tlgKeywordOn(v15[1], 0x200000000000LL) )
    {
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v36, v17);
      LODWORD(v37) = v36;
      LODWORD(v38) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v22 = CurrentThreadId;
      v20 = *(_DWORD *)(v19 + 76);
      v27 = 0LL;
      v21 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v16,
        (int)&unk_1808670F6,
        v19 + 8,
        0,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v38,
        (__int64)&v37);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = wil::details::static_lazy<WindowManagementLogging>::get(
           v7,
           (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v9 = (_DWORD *)v8[1];
    if ( *v9 > 5u && tlgKeywordOn(v8[1], 0x200000000000LL) )
    {
      TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v36, v10);
      LODWORD(v37) = v36;
      v36 = *((_QWORD *)v6 + 15);
      v11 = *((_QWORD *)this + 6);
      v28 = *((_QWORD *)v6 + 14);
      v12 = v6[26];
      v27 = 0LL;
      v23 = v12;
      v29 = *((_QWORD *)v6 + 12);
      v30 = *((_QWORD *)v6 + 11);
      v24 = v6[20];
      v31 = *((_QWORD *)v6 + 9);
      v25 = v6[8];
      v32 = *((_QWORD *)v6 + 3);
      v26 = *v6;
      v33 = *((_QWORD *)v6 + 16);
      v21 = v6[16];
      v34 = *((_QWORD *)v6 + 7);
      v22 = v6[2];
      LODWORD(v38) = a2;
      v35[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180866FB6,
        (const GUID *)(v11 + 8),
        v13,
        (__int64)&v27,
        (__int64)v35,
        (__int64)&v22,
        (const wchar_t **)&v34,
        (__int64)&v21,
        (const wchar_t **)&v33,
        (__int64)&v26,
        (const WCHAR **)&v32,
        (__int64)&v25,
        (const wchar_t **)&v31,
        (__int64)&v24,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v23,
        (const wchar_t **)&v28,
        (const WCHAR **)&v36,
        (__int64)&v38,
        (__int64)&v37);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
