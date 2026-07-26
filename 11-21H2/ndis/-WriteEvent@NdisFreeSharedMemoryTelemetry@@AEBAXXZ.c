/*
 * XREFs of ?WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CAEBC
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAC20 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1C00C9FE8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U-$_tlgW.c)
 */

void __fastcall NdisFreeSharedMemoryTelemetry::WriteEvent(NdisFreeSharedMemoryTelemetry *this)
{
  int v1; // r11d
  unsigned __int16 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // r10
  int v12; // r11d
  int v13; // [rsp+50h] [rbp-9h] BYREF
  int v14; // [rsp+54h] [rbp-5h] BYREF
  int v15; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v16[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v17; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD *v18; // [rsp+70h] [rbp+17h] BYREF
  __int16 v19; // [rsp+78h] [rbp+1Fh]
  _DWORD *v20; // [rsp+80h] [rbp+27h] BYREF
  int v21; // [rsp+88h] [rbp+2Fh]
  _DWORD v22[4]; // [rsp+90h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 48);
  v16[0] = *((_DWORD *)this + 10);
  v3 = 0;
  v16[1] = *((_DWORD *)this + 11);
  if ( (v1 & 3) != 0 )
  {
    LODWORD(v4) = 0;
    if ( *((_BYTE *)this + 80) )
      v4 = *((_QWORD *)this + 11);
    v22[0] = v4;
    v3 = 1;
  }
  if ( (v1 & 0xC) != 0 )
  {
    if ( *((_BYTE *)this + 128) )
      v5 = *((_QWORD *)this + 17);
    else
      LODWORD(v5) = 0;
    v6 = v3++;
    v22[v6] = v5;
  }
  if ( (v1 & 0x30) != 0 )
  {
    LODWORD(v7) = 0;
    if ( *((_BYTE *)this + 176) )
      v7 = *((_QWORD *)this + 23);
    v22[v3] = v7;
  }
  if ( (unsigned int)dword_1C00EB5C8 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00EB5C8, 64LL) )
    {
      v19 = v11;
      v18 = v22;
      v13 = v12;
      v20 = v16;
      v14 = *(_DWORD *)(v10 + 32);
      v15 = *(_DWORD *)(v10 + 36);
      v17 = v10 + 16;
      v21 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperArray<4>>(
        v8,
        byte_1C00D7289,
        v9,
        v10,
        &v17,
        (__int64)&v15,
        (__int64)&v14,
        (__int64 *)&v20,
        (__int64)&v13,
        (__int64 *)&v18);
    }
  }
}
