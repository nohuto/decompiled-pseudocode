/*
 * XREFs of ??$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CE8CC
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7C4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x1C00CED70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@.c)
 */

char __fastcall NdisAllocateSharedMemoryTelemetry::AggregateEvent<2>(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v10; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v11; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v12; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v13; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v18; // [rsp+100h] [rbp-40h] BYREF
  __int64 v19; // [rsp+108h] [rbp-38h] BYREF
  __int64 v20; // [rsp+110h] [rbp-30h] BYREF
  __int64 v21; // [rsp+118h] [rbp-28h] BYREF
  __int64 v22; // [rsp+120h] [rbp-20h] BYREF
  __int64 v23; // [rsp+128h] [rbp-18h] BYREF
  __int64 v24; // [rsp+130h] [rbp-10h] BYREF
  __int64 v25; // [rsp+138h] [rbp-8h] BYREF
  int *v26; // [rsp+140h] [rbp+0h] BYREF
  int v27; // [rsp+148h] [rbp+8h]
  int v28; // [rsp+170h] [rbp+30h] BYREF
  int v29; // [rsp+178h] [rbp+38h] BYREF
  int v30; // [rsp+180h] [rbp+40h] BYREF
  int v31; // [rsp+188h] [rbp+48h] BYREF
  int v32; // [rsp+18Ch] [rbp+4Ch]

  if ( *(_BYTE *)(a1 + 184) )
    v1 = *(_QWORD *)(a1 + 192);
  else
    v1 = 0LL;
  if ( *(_BYTE *)(a1 + 232) )
    v2 = *(_QWORD *)(a1 + 240);
  else
    v2 = 0LL;
  v31 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 44);
  v32 = v3;
  if ( (unsigned int)dword_1C00F41D8 > 2 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C00F41D8, 2048LL);
    if ( (_BYTE)v3 )
    {
      v28 = *(_DWORD *)(v6 + 52);
      v26 = &v31;
      v29 = *(_DWORD *)(v6 + 32);
      v30 = *(_DWORD *)(v6 + 36);
      v10 = v6 + 16;
      v23 = *(_QWORD *)(v6 + 8);
      v24 = v23;
      v27 = 8;
      v11 = v2;
      v12 = v2;
      v13 = v2;
      v14 = v1;
      v15 = v1;
      v16 = v1;
      v17 = v8;
      v18 = v8;
      v19 = v8;
      v20 = v7;
      v21 = v7;
      v22 = v7;
      v25 = 1LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
                     v4,
                     (unsigned int)&unk_1C00DF2AD,
                     v5,
                     (unsigned int)&v25,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
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
                     (__int64)&v30,
                     (__int64)&v29,
                     (__int64)&v26,
                     (__int64)&v28);
    }
  }
  return v3;
}
