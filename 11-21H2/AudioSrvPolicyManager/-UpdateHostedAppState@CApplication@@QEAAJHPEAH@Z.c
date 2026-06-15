/*
 * XREFs of ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x18001CC60
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180026B10 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1800018C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 */

__int64 __fastcall CApplication::UpdateHostedAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // edi
  unsigned int v5; // r9d
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v5 = v3 | 4;
  if ( !a2 )
    v5 = v3 & 0xFFFFFFFB;
  *((_DWORD *)this + 52) = v5;
  LOBYTE(v4) = (v5 & 6) != 0;
  if ( ((v3 & 6) != 0) == v4 )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 1;
    v7 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v7 > 4u )
    {
      LODWORD(v16) = v4;
      LODWORD(v14) = -1;
      LODWORD(v13) = -1;
      LODWORD(v15) = -1;
      v11 = *((_QWORD *)this + 87);
      v12 = *((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        (unsigned __int8 *)dword_180050FA1,
        v8,
        v9,
        (void **)&v12,
        (__int64)&v11,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v14);
    }
  }
  return 0LL;
}
