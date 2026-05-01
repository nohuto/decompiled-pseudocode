/*
 * XREFs of ?Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801B1380
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18045BB50 (-ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801799E4 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456@Z @ 0x180459174 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180459174.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180459BC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::Stop(
        TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *this,
        const unsigned __int16 *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  const struct _tlgProvider_t *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  const struct _tlgProvider_t *v15; // rax
  int v16; // edi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // ecx
  int v20; // [rsp+C0h] [rbp-80h] BYREF
  int v21; // [rsp+C4h] [rbp-7Ch] BYREF
  int v22; // [rsp+C8h] [rbp-78h] BYREF
  int v23; // [rsp+CCh] [rbp-74h] BYREF
  int v24; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+100h] [rbp-40h] BYREF
  __int64 v31; // [rsp+108h] [rbp-38h] BYREF
  __int64 v32; // [rsp+110h] [rbp-30h] BYREF
  __int64 v33; // [rsp+118h] [rbp-28h] BYREF
  __int64 v34; // [rsp+120h] [rbp-20h] BYREF
  __int64 v35; // [rsp+128h] [rbp-18h] BYREF
  __int64 v36; // [rsp+130h] [rbp-10h] BYREF
  __int64 v37; // [rsp+160h] [rbp+20h] BYREF
  __int64 v38; // [rsp+170h] [rbp+30h] BYREF
  __int64 v39; // [rsp+178h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = TouchKeyboardExperienceTraceLogging::Provider(v14);
    v16 = (int)v15;
    if ( *(_DWORD *)v15 > 5u )
    {
      v39 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      LODWORD(v37) = CurrentThreadId;
      v19 = *(_DWORD *)(v18 + 76);
      v25 = 0LL;
      LODWORD(v38) = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v16,
        (int)&dword_1806B8A92,
        (__int64)&v25,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v39);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = TouchKeyboardExperienceTraceLogging::Provider(v7);
    if ( *(_DWORD *)v10 > 5u )
    {
      v11 = *((_QWORD *)v6 + 6);
      v29 = *((_QWORD *)v6 + 14);
      LODWORD(v39) = v6[26];
      v12 = *((_QWORD *)v6 + 12);
      v25 = 0LL;
      v13 = *((_QWORD *)this + 6);
      v30 = v12;
      v31 = *((_QWORD *)v6 + 11);
      v20 = v6[20];
      v32 = *((_QWORD *)v6 + 9);
      v21 = v6[8];
      v33 = *((_QWORD *)v6 + 3);
      v22 = *v6;
      v34 = *((_QWORD *)v6 + 16);
      v23 = v6[16];
      v35 = *((_QWORD *)v6 + 7);
      v24 = v6[2];
      v27 = v11;
      LODWORD(v37) = v6[17];
      LODWORD(v38) = v6[4];
      v28 = *((_QWORD *)v6 + 15);
      v26 = (__int64)a2;
      v36 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (int)v10,
        (int)&dword_1806B8AEB,
        v13 + 8,
        (__int64)&v25,
        (__int64)&v36,
        (__int64)&v24,
        (__int64)&v35,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v39,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v27,
        (__int64)&v26);
    }
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
    this,
    v8,
    v9,
    v10);
}
