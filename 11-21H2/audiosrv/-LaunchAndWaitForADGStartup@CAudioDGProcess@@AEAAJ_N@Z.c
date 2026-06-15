/*
 * XREFs of ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18003D660
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180019340 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x18003D740 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18003D7B0 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5553@Z @ 0x1801179F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U1@.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchAndWaitForADGStartup(CAudioDGProcess *this, bool a2)
{
  ULONGLONG TickCount64; // rax
  ULONGLONG v5; // r14
  unsigned int v6; // ebx
  int v7; // edi
  ULONGLONG v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  int v15; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v17; // [rsp+68h] [rbp-18h] BYREF
  int v18; // [rsp+6Ch] [rbp-14h] BYREF
  double v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h] BYREF
  double v21; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+48h] BYREF

  TickCount64 = GetTickCount64();
  v22 = 0;
  v5 = TickCount64;
  v6 = 0;
  v7 = CAudioDGProcess::LaunchADGProcess(this, a2);
  if ( v7 >= 0 )
    v6 = CAudioDGProcess::WaitForADGStartup(this, &v22);
  v8 = GetTickCount64();
  v9 = v8 - v5;
  if ( (__int64)(v8 - v5) < 0 )
  {
    v9 &= 1u;
    v10 = (double)(int)(v9 | ((v8 - v5) >> 1)) + (double)(int)(v9 | ((v8 - v5) >> 1));
  }
  else
  {
    v10 = (double)(int)v9;
  }
  v21 = v10 / 1000.0;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v9,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v11 > 4u
    && (*(_QWORD *)(v11 + 16) & 0x200000000080LL) != 0
    && (*(_QWORD *)(v11 + 24) & 0x200000000080LL) == *(_QWORD *)(v11 + 24) )
  {
    v19 = v21;
    v15 = *((_DWORD *)this + 24);
    v16 = v22;
    v17 = v6;
    v18 = v7;
    LOBYTE(v21) = a2;
    v20 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_18018B726,
      v12,
      v13,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v19);
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v6;
}
