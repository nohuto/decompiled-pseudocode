/*
 * XREFs of ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x18002AC50
 * Callers:
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000FDE0 (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall CApplication::UpdateHostedAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // edi
  unsigned int v5; // r9d
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  void *v12; // [rsp+58h] [rbp-8h] BYREF
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+88h] [rbp+28h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF

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
    v7 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)this);
    if ( *(_DWORD *)v7 > 4u )
    {
      v16 = v4;
      v14 = -1;
      v13 = -1;
      v15 = -1;
      v11 = *((_QWORD *)this + 87);
      v12 = (void *)*((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        byte_1800567C5,
        v8,
        v9,
        &v12,
        (__int64)&v11,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v14);
    }
  }
  return 0LL;
}
