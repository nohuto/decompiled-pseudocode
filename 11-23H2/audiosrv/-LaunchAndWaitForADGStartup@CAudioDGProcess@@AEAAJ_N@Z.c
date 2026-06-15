/*
 * XREFs of ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E4C0
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180047E74 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E5A4 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5553@Z @ 0x1800CDF0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U1@.c)
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
  _DWORD *v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  double v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h] BYREF
  double v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF

  TickCount64 = GetTickCount64();
  v23 = 0;
  v5 = TickCount64;
  v6 = 0;
  v7 = CAudioDGProcess::LaunchADGProcess(this, a2);
  if ( v7 >= 0 )
    v6 = CAudioDGProcess::WaitForADGStartup(this, &v23);
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
  v22 = v10 / 1000.0;
  v11 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v9,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v11 > 4u && tlgKeywordOn((__int64)v11, 0x200000000080LL) )
  {
    v20 = v22;
    v16 = *((_DWORD *)this + 24);
    v17 = v23;
    v18 = v6;
    v19 = v7;
    LOBYTE(v22) = a2;
    v21 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v12,
      (unsigned int)&unk_18018EE09,
      v13,
      v14,
      (__int64)&v21,
      (__int64)&v22,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v20);
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v6;
}
