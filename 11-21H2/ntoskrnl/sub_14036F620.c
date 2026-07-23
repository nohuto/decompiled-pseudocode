/*
 * XREFs of sub_14036F620 @ 0x14036F620
 * Callers:
 *     sub_14036F5D4 @ 0x14036F5D4 (sub_14036F5D4.c)
 *     InitFn @ 0x1403DE6A0 (InitFn.c)
 * Callees:
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 *     sub_14036F8F8 @ 0x14036F8F8 (sub_14036F8F8.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_14036FAB0 @ 0x14036FAB0 (sub_14036FAB0.c)
 *     sub_14036FC3C @ 0x14036FC3C (sub_14036FC3C.c)
 *     sub_14036FF40 @ 0x14036FF40 (sub_14036FF40.c)
 *     sub_1403700FC @ 0x1403700FC (sub_1403700FC.c)
 *     sub_140371C50 @ 0x140371C50 (sub_140371C50.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 */

unsigned __int64 __fastcall sub_14036F620(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rsi
  unsigned int MaximumProcessorCount; // r15d
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // ebx
  unsigned int v13; // edx
  __int128 v14; // xmm0
  void *v15; // rbx
  unsigned __int8 v16; // r10
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall *v21)(int, int, char, int, __int64); // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall *v22)(__int64, __int64, __int64, char); // [rsp+70h] [rbp+Fh]
  __int64 (__fastcall *v23)(int); // [rsp+78h] [rbp+17h]
  __int64 (__fastcall *v24)(__int64, int, unsigned int); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v25)(__int64); // [rsp+88h] [rbp+27h]

  v6 = 0LL;
  if ( (int)sub_140371C50(a4, 1LL) >= 0 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( !MaximumProcessorCount )
      MaximumProcessorCount = 1;
    v20 = *a4;
    v8 = sub_1403700FC(a1, MaximumProcessorCount, &v20);
    v9 = v8;
    if ( v8 )
    {
      v10 = *a4;
      *(_DWORD *)(v8 + 16) = -571548178;
      v11 = 0;
      *(_DWORD *)(v8 + 20) = a1;
      *(_OWORD *)v8 = v10;
      if ( BYTE1(*(_QWORD *)a4) >= 2u )
      {
        v11 = 16;
        if ( (*(_BYTE *)(v8 + 30) & 1) == 0 )
        {
          v18 = *(_QWORD *)(v8 + 240);
          v19 = *(_QWORD *)(v8 + 248);
          if ( v18 > v19 && v18 - v19 >= 0x100000 && v19 - v9 <= 0x100000 )
            v11 = 48;
        }
      }
      v12 = v11 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v12 = v11;
      v20 = v10;
      sub_14036F8F8(v9 + 320, 0x100000, v9, v9 + 896, v9 + 704, v9 + 128, v9 + 160, (__int64)&v20, v12);
      v13 = v12 & 0xFFFFFFDF;
      v20 = *a4;
      if ( BYTE1(v20) < 2u )
        v13 = v12;
      sub_14036F8F8(v9 + 512, 0x1000000, v9, 0, 0LL, v9 + 128, v9 + 176, (__int64)&v20, v13);
      *(_QWORD *)(v9 + 64) = 0LL;
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_QWORD *)(v9 + 224) = 0LL;
      if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
        *(_DWORD *)(v9 + 24) = PsGetHostSilo == 0LL;
      v14 = *a4;
      v25 = 0LL;
      v21 = sub_140240050;
      v22 = sub_140364230;
      v23 = sub_140350700;
      v24 = sub_140365610;
      v20 = v14;
      v15 = sub_140362B58(&v20);
      sub_14036FF40(
        v9 + 704,
        v9 + 320,
        (unsigned int)&v21,
        v16 & (unsigned __int8)*(_DWORD *)a4,
        0,
        (__int64)v15 + 14556);
      v21 = sub_140240020;
      v22 = sub_140364230;
      v23 = sub_140350700;
      v24 = sub_140365610;
      v25 = sub_14036F030;
      sub_14036FC3C(
        v9 + 896,
        v9 + 320,
        MaximumProcessorCount,
        *(_DWORD *)a4 & 1,
        (__int64)&v21,
        v9 + 128,
        (__int64)v15 + 14552);
      RtlRunOnceInitialize((PRTL_RUN_ONCE)(v9 + 112));
      if ( (int)sub_14036FAB0(v9 + 320, 0LL, 0LL) < 0 )
        sub_14036EBE8(v9);
      else
        return v9;
    }
    else
    {
      sub_140371C50(a4, 0LL);
    }
  }
  return v6;
}
