/*
 * XREFs of ?AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF9C0
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF8F4 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x1C00CF010 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-.c)
 */

void __fastcall NdisFreeSharedMemoryTelemetry::AggregateEvent(NdisFreeSharedMemoryTelemetry *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v8; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v9; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v10; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v11; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v13; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v16; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v17; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v19; // [rsp+100h] [rbp-20h] BYREF
  int *v20; // [rsp+108h] [rbp-18h] BYREF
  int v21; // [rsp+110h] [rbp-10h]
  int v22; // [rsp+140h] [rbp+20h] BYREF
  int v23; // [rsp+148h] [rbp+28h] BYREF
  int v24; // [rsp+150h] [rbp+30h] BYREF
  int v25; // [rsp+158h] [rbp+38h] BYREF
  int v26; // [rsp+15Ch] [rbp+3Ch]

  if ( *((_BYTE *)this + 176) )
    v1 = *((_QWORD *)this + 23);
  else
    v1 = 0LL;
  v25 = *((_DWORD *)this + 10);
  v26 = *((_DWORD *)this + 11);
  if ( (unsigned int)dword_1C00F41D8 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F41D8, 2048LL) )
    {
      v22 = *(_DWORD *)(v4 + 192);
      v20 = &v25;
      v23 = *(_DWORD *)(v4 + 32);
      v24 = *(_DWORD *)(v4 + 36);
      v7 = v4 + 16;
      v17 = *(_QWORD *)(v4 + 8);
      v18 = v17;
      v21 = 8;
      v8 = v1;
      v9 = v1;
      v10 = v1;
      v11 = v6;
      v12 = v6;
      v13 = v6;
      v14 = v5;
      v15 = v5;
      v16 = v5;
      v19 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
        v2,
        byte_1C00DF0C4,
        v3,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        &v7,
        (__int64)&v24,
        (__int64)&v23,
        (__int64 *)&v20,
        (__int64)&v22);
    }
  }
}
