/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18002A95C
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D32C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z @ 0x18002F6F8 (-UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // r14d
  int v5; // edi
  unsigned int v6; // r9d
  int v9; // edi
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  void *v14; // [rsp+58h] [rbp-8h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF
  int v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v5 = 0;
  v6 = v3 | 2;
  if ( !a2 )
    v6 = *((_DWORD *)this + 52) & 0xFFFFFFFD;
  *((_DWORD *)this + 52) = v6;
  LOBYTE(v4) = (v6 & 6) != 0;
  LOBYTE(v5) = (v3 & 6) != 0;
  v9 = v4 ^ v5;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v6) & 2) != 0 && !a2 )
    *((_QWORD *)this + 83) = GetTickCount64();
  if ( a3 )
    *a3 = v9;
  if ( v9 )
  {
    v10 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)this);
    if ( *(_DWORD *)v10 > 4u )
    {
      v18 = v4;
      v16 = -1;
      v15 = -1;
      v17 = -1;
      v13 = *((_QWORD *)this + 87);
      v14 = (void *)*((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        byte_1800556D5,
        v11,
        v12,
        &v14,
        (__int64)&v13,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
}
