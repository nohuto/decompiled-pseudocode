/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801E0690
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004D3D4 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801E0110 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801E0374 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned int v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-24h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+44h] [rbp-14h]

  v16 = 0;
  if ( *(char *)a2 >= 0 )
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 3;
    v5 = *((unsigned int *)a2 + 16);
    if ( *((_BYTE *)a2 + 68) )
    {
      if ( *((_BYTE *)this + v5 + 48) )
      {
        v6 = 2;
      }
      else
      {
        v6 = 1;
        *((_BYTE *)this + v5 + 48) = 1;
      }
    }
    else
    {
      v6 = 0;
      if ( *((_BYTE *)this + v5 + 48) )
      {
        *((_BYTE *)this + v5 + 48) = 0;
        v6 = 4;
      }
    }
    v12 = *((_DWORD *)a2 + 16);
    v7 = *((_QWORD *)a2 + 4);
    v13 = v6;
    v8 = *((_QWORD *)this + 3);
    v14 = v7;
    v15 = *((_DWORD *)a2 + 2);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, unsigned int *, int))(*(_QWORD *)v8 + 176LL))(
           v8,
           *((_QWORD *)this + 5),
           4LL,
           &v12,
           24) < 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (wil::details **)this + 4,
        *((wil::details **)this + 4),
        v9);
      RawButtonProcessor::FindRemoteEndpoint(this);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, unsigned int *, int))(**((_QWORD **)this + 3) + 176LL))(
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 5),
             4LL,
             &v12,
             24) < 0 )
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          (wil::details **)this + 4,
          *((wil::details **)this + 4),
          v10);
    }
    InputETW::RawButtonProcessor::ButtonEvent(v12, v13, *((_DWORD *)this + 90));
  }
  return 0LL;
}
