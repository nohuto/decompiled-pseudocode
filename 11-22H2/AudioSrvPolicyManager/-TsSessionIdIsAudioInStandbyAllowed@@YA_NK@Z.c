/*
 * XREFs of ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18000E710
 * Callers:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180014AC0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1800011F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011580 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     wil::init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___ @ 0x180033760 (wil--init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall TsSessionIdIsAudioInStandbyAllowed(int a1)
{
  int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // r14
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  int *v10; // rsi
  int *v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // bl
  int v17; // [rsp+60h] [rbp-48h] BYREF
  int v18; // [rsp+64h] [rbp-44h] BYREF
  _DWORD v19[16]; // [rsp+68h] [rbp-40h] BYREF
  int v20; // [rsp+B0h] [rbp+8h] BYREF
  int v21; // [rsp+B8h] [rbp+10h] BYREF
  int v22; // [rsp+C0h] [rbp+18h] BYREF
  int v23; // [rsp+C8h] [rbp+20h] BYREF

  v20 = a1;
  v2 = 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&stru_1800636C8);
  v4 = *(_QWORD *)(qword_180063778
                 + 16
                 * (qword_180063790 & (0x100000001B3LL
                                     * (HIBYTE(v20) ^ (0x100000001B3LL
                                                     * (BYTE2(v20) ^ (0x100000001B3LL
                                                                    * (BYTE1(v20) ^ (0x100000001B3LL
                                                                                   * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v4 == qword_180063768 )
  {
LABEL_5:
    v4 = 0LL;
  }
  else
  {
    while ( a1 != *(_DWORD *)(v4 + 16) )
    {
      if ( v4 == *(_QWORD *)(qword_180063778
                           + 16
                           * (qword_180063790 & (0x100000001B3LL
                                               * (HIBYTE(v20) ^ (0x100000001B3LL
                                                               * (BYTE2(v20) ^ (0x100000001B3LL
                                                                              * (BYTE1(v20) ^ (0x100000001B3LL
                                                                                             * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_5;
      v4 = *(_QWORD *)(v4 + 8);
    }
  }
  v5 = qword_180063768;
  if ( v4 )
    v5 = v4;
  if ( v5 == qword_180063768 )
  {
    LeaveCriticalSection(&stru_1800636C8);
    goto LABEL_21;
  }
  v6 = *(_DWORD **)(v5 + 24);
  LeaveCriticalSection(&stru_1800636C8);
  wil::init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___(v7, 0LL);
  if ( !g_GlobalUserPresent )
    v2 = 0;
  v8 = v6[254];
  v9 = (unsigned int)g_bIsSystemAsleep;
  v10 = v6 + 253;
  if ( v8 == 1 || !*v10 )
  {
    v11 = v6 + 253;
    if ( g_bLowPowerEpoch == 1 )
    {
      v2 = 0;
LABEL_16:
      v10 = v11;
      if ( !v8 )
        v9 = 0LL;
      g_bIsSystemAsleep = v9;
      goto LABEL_19;
    }
  }
  if ( (v8 == 1 || !*v10) && g_bApmSuspended == 1 )
  {
    v2 = 0;
    v11 = v6 + 253;
    goto LABEL_16;
  }
  v11 = v6 + 253;
  if ( v8 != 1 || g_bIsSystemAsleep != 1 )
    goto LABEL_16;
  v2 = 0;
LABEL_19:
  v12 = *(_DWORD **)(wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
                       v9,
                       _lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v12 > 4u )
  {
    v20 = g_bIsSystemAsleep;
    v21 = g_bApmSuspended;
    v22 = g_bLowPowerEpoch;
    v23 = g_GlobalUserPresent;
    v17 = *v10;
    v18 = v6[254];
    v19[0] = *v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v12,
      byte_180056B40,
      v13,
      v14,
      (__int64)v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20);
  }
LABEL_21:
  v15 = v2 != 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v15;
}
