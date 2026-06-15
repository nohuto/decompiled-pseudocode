/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800175E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18000A9C0 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180017850 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x1800F7D44 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // r8
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *, _QWORD); // rcx
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  _BYTE *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _BYTE *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, _BYTE *); // rcx
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _BYTE v20[56]; // [rsp+20h] [rbp-69h] BYREF
  _BYTE *v21; // [rsp+58h] [rbp-31h]
  __int64 v22; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v23[56]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+1Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v6 = 0LL;
  v21 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *, _QWORD))(a2 + 56);
  if ( v7 )
  {
    v6 = (_BYTE *)(**v7)(v7, v20, 0LL);
    v21 = v6;
  }
  v8 = *(_QWORD **)(a1 + 200);
  v9 = *(_QWORD **)(a1 + 192);
  if ( v9 != v8 )
  {
    do
      std::_Func_class<void,IAudioStreamInfo *>::operator()(v20, *v9++, v6);
    while ( v9 != v8 );
    v6 = v21;
  }
  v24 = 0LL;
  if ( v6 )
  {
    if ( v6 == v20 )
    {
      v24 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v23);
      if ( !v21 )
        goto LABEL_11;
      v10 = v20;
      if ( v21 == v20 )
        v10 = 0LL;
      else
        LOBYTE(v10) = 1;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v10);
    }
    else
    {
      v24 = (__int64)v6;
    }
    v21 = 0LL;
  }
LABEL_11:
  std::_Func_class<void,IAudioStreamInfo *>::_Tidy((__int64)v20, v5);
  std::_Func_class<void,IAudioStreamInfo *>::_Tidy((__int64)v23, v11);
  v13 = 0LL;
  v21 = 0LL;
  v14 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v14 )
  {
    v13 = (_BYTE *)(**v14)(v14, v20);
    v21 = v13;
  }
  v15 = *(__int64 **)(a1 + 224);
  v16 = *(__int64 **)(a1 + 216);
  if ( v16 != v15 )
  {
    do
    {
      v17 = *v16;
      v22 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      lambda_530575f8b419a08780554bb070101504_::operator()(v20, &v22);
      ++v16;
    }
    while ( v16 != v15 );
    v13 = v21;
  }
  v24 = 0LL;
  if ( v13 )
  {
    if ( v13 == v20 )
    {
      v24 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v13 + 8LL))(v13, v23);
      if ( v21 )
      {
        if ( v21 == v20 )
          v12 = 0LL;
        else
          LOBYTE(v12) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v21 + 32LL))(v21, v12);
        v21 = 0LL;
      }
    }
    else
    {
      v24 = (__int64)v13;
      v21 = 0LL;
    }
  }
  std::_Func_class<void,IAudioStreamInfo *>::_Tidy((__int64)v23, v12);
  if ( v4 )
    LeaveCriticalSection(v4);
  return std::_Func_class<void,IAudioStreamInfo *>::_Tidy(a2, v18);
}
