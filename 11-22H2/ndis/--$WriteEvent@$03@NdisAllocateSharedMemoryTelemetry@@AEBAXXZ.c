/*
 * XREFs of ??$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF3B0
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7C4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1C00CEC94 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U-$_tlgW.c)
 */

char __fastcall NdisAllocateSharedMemoryTelemetry::WriteEvent<4>(__int64 a1)
{
  int v1; // r11d
  unsigned __int16 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // r10
  int v15; // r11d
  int v17; // [rsp+50h] [rbp-9h] BYREF
  int v18; // [rsp+54h] [rbp-5h] BYREF
  int v19; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v20[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v21; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD *v22; // [rsp+70h] [rbp+17h] BYREF
  __int16 v23; // [rsp+78h] [rbp+1Fh]
  _DWORD *v24; // [rsp+80h] [rbp+27h] BYREF
  int v25; // [rsp+88h] [rbp+2Fh]
  _DWORD v26[4]; // [rsp+90h] [rbp+37h] BYREF

  v1 = *(_DWORD *)(a1 + 52);
  v3 = 0;
  if ( (v1 & 3) != 0 )
  {
    LODWORD(v4) = 0;
    if ( *(_BYTE *)(a1 + 88) )
      v4 = *(_QWORD *)(a1 + 96);
    v26[0] = v4;
    v3 = 1;
  }
  if ( (v1 & 0xC) != 0 )
  {
    if ( *(_BYTE *)(a1 + 136) )
      v5 = *(_QWORD *)(a1 + 144);
    else
      LODWORD(v5) = 0;
    v6 = v3++;
    v26[v6] = v5;
  }
  if ( (v1 & 0x30) != 0 )
  {
    LODWORD(v7) = 0;
    if ( *(_BYTE *)(a1 + 184) )
      v7 = *(_QWORD *)(a1 + 192);
    v8 = v3++;
    v26[v8] = v7;
  }
  if ( (v1 & 0xC0) != 0 )
  {
    LODWORD(v9) = 0;
    if ( *(_BYTE *)(a1 + 232) )
      v9 = *(_QWORD *)(a1 + 240);
    v26[v3] = v9;
  }
  v20[0] = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 44);
  v20[1] = v10;
  if ( (unsigned int)dword_1C00F41D8 > 4 )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)&dword_1C00F41D8, 64LL);
    if ( (_BYTE)v10 )
    {
      v23 = v14;
      v22 = v26;
      v17 = v15;
      v24 = v20;
      v18 = *(_DWORD *)(v13 + 32);
      v19 = *(_DWORD *)(v13 + 36);
      v21 = v13 + 16;
      v25 = 8;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperArray<4>>(
                      v11,
                      byte_1C00DF252,
                      v12,
                      v13,
                      &v21,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64 *)&v24,
                      (__int64)&v17,
                      (__int64 *)&v22);
    }
  }
  return v10;
}
