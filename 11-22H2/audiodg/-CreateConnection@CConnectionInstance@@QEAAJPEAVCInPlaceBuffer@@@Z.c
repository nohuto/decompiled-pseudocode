/*
 * XREFs of ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x140011778
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14001118C (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CConnectionInstance::CreateConnection(CConnectionInstance *this, struct CInPlaceBuffer *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  __int64 v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  if ( !*(_DWORD *)this )
    return 0;
  v11 = *((_DWORD *)this + 10);
  v13 = 1094927443;
  v12 = 0LL;
  if ( a2 )
    v10 = *(_QWORD *)a2;
  else
    v10 = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v12);
  }
  else
  {
    v8 = *((_QWORD *)this + 4);
    if ( !v8 )
      goto LABEL_7;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, &v12);
  }
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_7:
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, char *))(**((_QWORD **)this + 6) + 56LL))(
           *((_QWORD *)this + 6),
           v9,
           (char *)this + 8);
    if ( v6 >= 0 && a2 )
    {
      *((_QWORD *)this + 7) = a2;
      ++*((_DWORD *)a2 + 4);
    }
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = 0LL;
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_5af45e929a4337b0b73e98b99732a783_Traceguids,
        (unsigned int)v6);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x62u, v6);
  }
  return (unsigned int)v6;
}
