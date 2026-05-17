/*
 * XREFs of RtlpHpAllocVA @ 0x180047270
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180047080 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x18004AD68 (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapExtendContext @ 0x180063FE0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x1800663EC (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180047474 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004A750 (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x18008F720 (RtlHeapZero.c)
 *     RtlpHpTlLogVAChange @ 0x180119D88 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(__int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  int v9; // r10d
  __int64 v11; // r8
  char v12; // si
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // r8
  int v16; // r8d
  int v17; // edi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  __int128 v23; // [rsp+58h] [rbp-21h]
  int v24; // [rsp+68h] [rbp-11h] BYREF
  int v25; // [rsp+6Ch] [rbp-Dh]
  int v26; // [rsp+70h] [rbp-9h]
  int v27; // [rsp+74h] [rbp-5h]
  __int64 v28; // [rsp+78h] [rbp-1h]

  v24 = 4096;
  v25 = 4096;
  v26 = 0x200000;
  v7 = *a6;
  v27 = 0x200000;
  v28 = 0x100040000000LL;
  v8 = a4 & 0xFEFFFFFF;
  v9 = a3;
  v23 = v7;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v11 = *a2;
    v12 = BYTE1(v23);
    v13 = *a2 - 1;
    v14 = a4 & 0x2000;
    if ( (v8 & 0x2000) != 0 )
    {
      v21 = (unsigned int)*(&v24 + BYTE1(v23));
      v15 = v21 - ((v21 + v13) & (unsigned int)(v21 - 1)) + v11 - 1;
    }
    else
    {
      v15 = v11 - (v13 & 0xFFF) + 4095;
    }
    v22 = v15;
    if ( (v8 & 0x1000) != 0 && BYTE1(v23) == 4 )
    {
      *a2 = v15;
      if ( (v8 & 0x40000000) != 0 )
        RtlHeapZero(*a1, v15);
      goto LABEL_13;
    }
    v16 = 0;
    if ( BYTE1(v23) == 5 )
      v16 = v9;
    if ( v14 && (v23 & 8) != 0 )
      v8 |= 0x40000u;
    v17 = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&v22, v16, v8, a5);
    if ( v17 >= 0 )
    {
      if ( (v8 & 0x1000) != 0 && (unsigned __int8)(v12 - 2) <= 2u && (v8 & 0x40000000) != 0 )
        RtlHeapZero(*a1, v22);
      *a2 = v22;
      goto LABEL_13;
    }
  }
  else
  {
    v27 = 0;
    if ( BYTE3(v23) )
      v24 = BYTE3(v23) - 1;
    else
      v24 = -1;
    v25 = BYTE1(v23);
    v26 = BYTE2(v23);
    if ( (v23 & 8) != 0 )
      v27 = 1;
    v19 = *a2;
    v28 = *((_QWORD *)&v23 + 1);
    v22 = v19 - ((v19 - 1) & 0xFFFFF) + 0xFFFFF;
    v20 = RtlpHpVaMgrCtxAlloc(&unk_180188AD8, &v22, a3, &v24);
    if ( v20 )
    {
      *a2 = v22;
      *a1 = v20;
LABEL_13:
      v17 = 0;
      goto LABEL_14;
    }
    v17 = -1073741670;
  }
LABEL_14:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v8, *a2, *a1, (unsigned int)v17);
  return (unsigned int)v17;
}
