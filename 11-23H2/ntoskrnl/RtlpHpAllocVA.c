/*
 * XREFs of RtlpHpAllocVA @ 0x140286D50
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14024F150 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x140314E44 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x14032432C (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x14036483C (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x140389308 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402868B0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403100EC (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1403D8A70 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(unsigned __int64 *a1, __int64 *a2, unsigned __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edi
  unsigned __int64 v8; // r11
  __int128 v9; // xmm0
  __int64 v12; // rdx
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // r8
  __int64 v18; // rsi
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+28h] [rbp-51h]
  unsigned __int64 v24; // [rsp+38h] [rbp-41h]
  __int64 v25; // [rsp+50h] [rbp-29h] BYREF
  __int128 v26; // [rsp+58h] [rbp-21h]
  int v27; // [rsp+68h] [rbp-11h] BYREF
  int v28; // [rsp+6Ch] [rbp-Dh]
  int v29; // [rsp+70h] [rbp-9h]
  int v30; // [rsp+74h] [rbp-5h]
  __int64 v31; // [rsp+78h] [rbp-1h]

  v6 = 0LL;
  v27 = 4096;
  v7 = a4 & 0xFEFFFFFF;
  v28 = 4096;
  v8 = a3;
  v29 = 0x200000;
  v9 = *a6;
  v30 = 0x200000;
  v31 = 0x100040000000LL;
  v26 = v9;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v19 = 0;
    v30 = 0;
    if ( BYTE3(v26) )
      v27 = BYTE3(v26) - 1;
    else
      v27 = -1;
    v28 = BYTE1(v26);
    v29 = BYTE2(v26);
    if ( (v26 & 8) != 0 )
      v19 = 1;
    v20 = *a2;
    v31 = *((_QWORD *)&v26 + 1);
    v30 = v19;
    v25 = v20 - (((_DWORD)v20 - 1) & 0xFFFFF) + 0xFFFFF;
    v21 = RtlpHpVaMgrCtxAlloc(&unk_140C71158, &v25, a3, &v27);
    if ( !v21 )
      return 3221225626LL;
    *a2 = v25;
    *a1 = v21;
    return 0LL;
  }
  v12 = *a2;
  v13 = BYTE1(v26);
  v14 = v12 - 1;
  if ( (a4 & 0x2000) != 0 )
  {
    v22 = (unsigned int)*(&v27 + BYTE1(v26));
    a3 = v22 - ((v22 + v14) & (unsigned int)(v22 - 1));
    v15 = a3 + v12 - 1;
  }
  else
  {
    v15 = v12 - (v14 & 0xFFF) + 4095;
  }
  v25 = v15;
  if ( (a4 & 0x1000) != 0 && BYTE1(v26) == 4 )
  {
    *a2 = v15;
    if ( (a4 & 0x40000000) != 0 )
      RtlHeapZero(*a1, v15, a3);
    return 0LL;
  }
  if ( BYTE1(v26) == 5 )
    v6 = v8;
  if ( (a4 & 0x2000) != 0 && (v26 & 8) != 0 )
    v7 = a4 & 0xFEFBFFFF | 0x40000;
  result = RtlpHpEnvAllocVA(a1, &v25, v6, v7, a5, v23, BYTE1(v26), v24, BYTE2(v26));
  if ( (int)result >= 0 )
  {
    v18 = v25;
    if ( (v7 & 0x1000) != 0 && (unsigned __int8)(v13 - 2) <= 2u && (v7 & 0x40000000) != 0 )
      RtlHeapZero(*a1, v25, v17);
    *a2 = v18;
    return 0LL;
  }
  return result;
}
