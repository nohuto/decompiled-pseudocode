/*
 * XREFs of ??1CPdcTimerActivation@@QEAA@XZ @ 0x180045488
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x18004BB80 (-_Destroy@-$_Ref_count_obj2@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 */

void __fastcall CPdcTimerActivation::~CPdcTimerActivation(CPdcTimerActivation *this)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  int v4; // eax
  char *v5; // r8
  char *v6; // rcx
  char *v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 *v10; // rax
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rcx
  int v14; // [rsp+30h] [rbp-49h] BYREF
  int v15; // [rsp+34h] [rbp-45h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  char v18[32]; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  __int64 *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  int *v28; // [rsp+A0h] [rbp+27h]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]

  v2 = *((_QWORD *)this + 1);
  v3 = *((_QWORD *)this + 2);
  v4 = _Mtx_lock((_Mtx_t)(v2 + 32));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
    goto LABEL_10;
  }
  v5 = *(char **)(v2 + 16);
  v6 = *(char **)(v2 + 8);
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = v6 + 8;
      if ( *(_QWORD *)v6 == v3 )
        break;
LABEL_10:
      v6 = v7;
      if ( v7 == v5 )
        goto LABEL_5;
    }
    memmove_0(v6, v7, v5 - v7);
    *(_QWORD *)(v2 + 16) -= 8LL;
  }
LABEL_5:
  _Mtx_unlock((_Mtx_t)(v2 + 32));
  if ( *(_QWORD *)this )
  {
    v8 = Pdcv2ActivationClientDeactivate();
    *(_QWORD *)this = 0LL;
    v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
            v9,
            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v10[1] > 4u )
    {
      if ( tlgKeywordOn(v10[1], 64LL) )
      {
        v14 = v8;
        v13 = *((_QWORD *)this + 2);
        v16 = *(_QWORD *)(v13 + 552);
        v15 = *(_DWORD *)(v13 + 40);
        v17 = v13;
        v28 = &v14;
        v29 = v11;
        v30 = 0;
        v25 = &v16;
        v26 = 8;
        v27 = 0;
        v22 = &v15;
        v23 = v11;
        v24 = 0;
        v19 = &v17;
        v20 = 8;
        v21 = 0;
        tlgWriteTransfer_EtwEventWriteTransfer(v12, byte_18019382E, 0LL, 0LL, 6, (__int64)v18);
      }
    }
  }
}
