/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180046E10
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x1800347C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x180034EA8 (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180044FE0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180046CF0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpMetadataCommit @ 0x180065ABC (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrCommit @ 0x1800471E0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x18004771C (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x1801171A4 (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogMemStats @ 0x1801187FC (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  unsigned int v7; // esi
  unsigned int v10; // r12d
  int v11; // edx
  unsigned int v12; // ebp
  int v13; // eax
  char v14; // r9
  int v15; // r11d
  int v16; // ebx
  unsigned int v17; // r14d
  char v18; // cl
  unsigned __int64 v19; // r10
  int v20; // r9d
  __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned int v25; // edx
  unsigned __int64 v26; // r11
  bool v27; // zf
  unsigned int v28; // edx
  int v29; // ecx
  __int64 result; // rax
  int v31; // edx
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // r8d
  int v36; // edx
  int v37; // ecx
  unsigned int v38; // r8d
  unsigned int v39; // edx
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // [rsp+40h] [rbp-58h]
  unsigned int v45; // [rsp+40h] [rbp-58h]
  int v46; // [rsp+44h] [rbp-54h]
  int v47; // [rsp+48h] [rbp-50h]
  int v48; // [rsp+A0h] [rbp+8h]
  int v49; // [rsp+A8h] [rbp+10h]
  unsigned int v50; // [rsp+B0h] [rbp+18h] BYREF
  int v51; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a3;
  v48 = 0;
  if ( (a5 & 0x800000) != 0 )
    v48 = 2;
  v10 = a4 + a3;
  v11 = 0x7FFF;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
    v11 = 511;
  v47 = v11;
  v12 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v10 = a3 - a4;
  v13 = 0;
  v49 = 0;
  if ( a3 >= v10 )
    goto LABEL_22;
  while ( 1 )
  {
    v14 = *(_BYTE *)(a1 + 9);
    v50 = v7;
    v15 = v10 - v7;
    if ( v11 - (v11 & (v7 + v12)) + 1 < v10 - v7 )
      v15 = v11 - (v11 & (v7 + v12)) + 1;
    v16 = 0;
    v17 = 1 << v14;
    v18 = v14;
    v19 = (unsigned __int64)v7 >> v14;
    v20 = -1;
    v46 = v15;
    v21 = 32 * v19;
    v22 = v19 << v18;
    v23 = a2 + v21;
    v51 = -1;
    v50 = v7 & (v17 - 1);
    v24 = v15 + v50 - 1;
    v25 = ((v17 - 1) & v24) + 1;
    v26 = v23 + 32 * (v24 >> v18);
    v44 = v25;
    if ( v50 )
    {
      v38 = v17;
      if ( v23 == v26 )
        v38 = v25;
      v39 = *(unsigned __int8 *)(v23 + 25);
      if ( a4 <= 0 )
      {
        if ( v39 > v50 )
        {
          v51 = v39 + v22;
          v20 = v22 + v50;
          v40 = v7 & (v17 - 1);
          goto LABEL_65;
        }
      }
      else if ( v39 < v38 )
      {
        v51 = v22 + v38;
        v20 = v39 + v22;
        v40 = v38;
LABEL_65:
        v16 = v40 - v39;
        if ( v16 && a4 <= 0 )
          *(_BYTE *)(v23 + 25) = v16 + v39;
      }
      v23 += 32LL;
      LODWORD(v22) = v17 + v22;
    }
    v27 = v23 == v26;
    while ( v23 < v26 )
    {
      v35 = *(unsigned __int8 *)(v23 + 25);
      v36 = 0;
      if ( a4 > 0 )
      {
        if ( v35 < v17 )
        {
          if ( v20 == -1 )
            v20 = v35 + v22;
          v51 = v22 + v17;
          v36 = v17 - v35;
          goto LABEL_48;
        }
      }
      else if ( *(_BYTE *)(v23 + 25) )
      {
        v51 = v35 + v22;
        v36 = -v35;
        v37 = v22;
        if ( v20 != -1 )
          v37 = v20;
        v20 = v37;
LABEL_48:
        if ( v36 && a4 <= 0 )
          *(_BYTE *)(v23 + 25) = v36 + v35;
      }
      v16 += v36;
      v23 += 32LL;
      LODWORD(v22) = v17 + v22;
      v27 = v23 == v26;
    }
    if ( !v27 )
      goto LABEL_20;
    v28 = *(unsigned __int8 *)(v23 + 25);
    v29 = 0;
    if ( a4 <= 0 )
    {
      if ( *(_BYTE *)(v23 + 25) )
      {
        v51 = v28 + v22;
        v29 = -v28;
        if ( v20 != -1 )
          LODWORD(v22) = v20;
        v20 = v22;
        goto LABEL_18;
      }
    }
    else if ( v28 < v44 )
    {
      if ( v20 == -1 )
        v20 = v28 + v22;
      v51 = v44 + v22;
      v29 = v44 - v28;
LABEL_18:
      if ( v29 && a4 <= 0 )
        *(_BYTE *)(v23 + 25) = v29 + v28;
    }
    v16 += v29;
LABEL_20:
    if ( !v16 )
      goto LABEL_21;
    v31 = v51 - v20;
    v32 = a2 & *(_QWORD *)a1;
    v50 = v20;
    v51 -= v20;
    v45 = v20 + v12;
    if ( v16 <= 0 )
    {
      v33 = 0x4000;
    }
    else
    {
      v33 = 4096;
      if ( (a5 & 2) != 0 )
        v33 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(a1, v32, v20 + v12, v31, v16, v33, v48);
    if ( (int)result < 0 )
      return result;
    if ( v16 > 0 )
      RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v50, (unsigned int)&v51, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v16);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    *(_WORD *)(a2 + 28) = ~(v16 + ~*(_WORD *)(a2 + 28));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v34 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v34 = 2147353472LL;
    if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v41 = *(_QWORD *)(a1 + 56);
      v42 = v32 + (v45 << 12);
      v43 = (unsigned int)(v51 << 12);
      if ( v16 <= 0 )
        RtlpLogHeapDecommit(v41, v42, v43, 13LL);
      else
        RtlpLogHeapCommit(v41, v42, v43, 10LL);
    }
LABEL_21:
    v7 += v46;
    v13 = v16 + v49;
    v49 += v16;
    if ( v7 >= v10 )
    {
LABEL_22:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    v11 = v47;
  }
}
