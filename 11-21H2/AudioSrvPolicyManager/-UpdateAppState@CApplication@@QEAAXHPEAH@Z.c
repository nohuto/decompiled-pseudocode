/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18001CB5C
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180025570 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1800018C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // r14d
  int v5; // edi
  unsigned int v6; // r9d
  int v9; // edi
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h] BYREF
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF

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
    v10 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v10 > 4u )
    {
      LODWORD(v18) = v4;
      LODWORD(v16) = -1;
      LODWORD(v15) = -1;
      LODWORD(v17) = -1;
      v13 = *((_QWORD *)this + 87);
      v14 = *((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        (unsigned __int8 *)dword_180050FA1,
        v11,
        v12,
        (void **)&v14,
        (__int64)&v13,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
}
