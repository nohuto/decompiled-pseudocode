/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180015830
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CPdcTimerActivation>::_Destroy(_QWORD *a1)
{
  int v1; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  char *v6; // r8
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-98h] BYREF
  int v14; // [rsp+34h] [rbp-94h] BYREF
  __int64 v15; // [rsp+38h] [rbp-90h] BYREF
  __int64 v16; // [rsp+40h] [rbp-88h] BYREF
  char v17[32]; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-58h]
  __int64 v19; // [rsp+78h] [rbp-50h]
  int *v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+88h] [rbp-40h]
  __int64 *v22; // [rsp+90h] [rbp-38h]
  __int64 v23; // [rsp+98h] [rbp-30h]
  int *v24; // [rsp+A0h] [rbp-28h]
  __int64 v25; // [rsp+A8h] [rbp-20h]

  v3 = a1[3];
  v4 = a1[4];
  v5 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
LABEL_12:
    v8 = *(_QWORD *)(v10 + 24) & 0x40LL;
    if ( v8 == *(_QWORD *)(v10 + 24) )
    {
      v13 = v1;
      v11 = a1[4];
      v15 = *(_QWORD *)(v11 + 560);
      v14 = *(_DWORD *)(v11 + 64);
      v16 = v11;
      v24 = &v13;
      v25 = 4LL;
      v22 = &v15;
      v23 = 8LL;
      v20 = &v14;
      v21 = 4LL;
      v18 = &v16;
      v19 = 8LL;
      LODWORD(v8) = tlgWriteTransfer_EtwEventWriteTransfer(v10, (unsigned int)&unk_18018ADE2, 0, 0, 6, (__int64)v17);
    }
    return v8;
  }
  v6 = *(char **)(v3 + 16);
  v7 = *(char **)(v3 + 8);
  if ( v7 != v6 )
  {
    while ( *(_QWORD *)v7 != v4 )
    {
      v7 += 8;
      if ( v7 == v6 )
        goto LABEL_5;
    }
    memmove_0(v7, v7 + 8, v6 - (v7 + 8));
    *(_QWORD *)(v3 + 16) -= 8LL;
  }
LABEL_5:
  LODWORD(v8) = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( a1[2] )
  {
    v1 = Pdcv2ActivationClientDeactivate();
    a1[2] = 0LL;
    v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v9,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v10 = *(_QWORD *)(v8 + 8);
    if ( *(_DWORD *)v10 > 4u && (*(_BYTE *)(v10 + 16) & 0x40) != 0 )
      goto LABEL_12;
  }
  return v8;
}
