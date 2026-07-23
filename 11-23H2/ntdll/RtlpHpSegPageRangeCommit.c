/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180046CB0
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x180034660 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x180034D48 (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180044E80 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180046B90 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpMetadataCommit @ 0x18006598C (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrCommit @ 0x180047080 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x1800475BC (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpLogHeapCommit @ 0x180118440 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180118624 (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogMemStats @ 0x180119C7C (RtlpHpTlLogMemStats.c)
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
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // r8d
  int v35; // edx
  int v36; // ecx
  unsigned int v37; // r8d
  unsigned int v38; // edx
  int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // [rsp+40h] [rbp-58h]
  unsigned int v44; // [rsp+40h] [rbp-58h]
  int v45; // [rsp+44h] [rbp-54h]
  int v46; // [rsp+48h] [rbp-50h]
  int v47; // [rsp+A0h] [rbp+8h]
  int v48; // [rsp+A8h] [rbp+10h]
  unsigned int v49; // [rsp+B0h] [rbp+18h] BYREF
  int v50; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a3;
  v47 = 0;
  if ( (a5 & 0x800000) != 0 )
    v47 = 2;
  v10 = a4 + a3;
  v11 = 0x7FFF;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
    v11 = 511;
  v46 = v11;
  v12 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v10 = a3 - a4;
  v13 = 0;
  v48 = 0;
  if ( a3 >= v10 )
    goto LABEL_22;
  while ( 1 )
  {
    v14 = *(_BYTE *)(a1 + 9);
    v49 = v7;
    v15 = v10 - v7;
    if ( v11 - (v11 & (v7 + v12)) + 1 < v10 - v7 )
      v15 = v11 - (v11 & (v7 + v12)) + 1;
    v16 = 0;
    v17 = 1 << v14;
    v18 = v14;
    v19 = (unsigned __int64)v7 >> v14;
    v20 = -1;
    v45 = v15;
    v21 = 32 * v19;
    v22 = v19 << v18;
    v23 = a2 + v21;
    v50 = -1;
    v49 = v7 & (v17 - 1);
    v24 = v15 + v49 - 1;
    v25 = ((v17 - 1) & v24) + 1;
    v26 = v23 + 32 * (v24 >> v18);
    v43 = v25;
    if ( v49 )
    {
      v37 = v17;
      if ( v23 == v26 )
        v37 = v25;
      v38 = *(unsigned __int8 *)(v23 + 25);
      if ( a4 <= 0 )
      {
        if ( v38 > v49 )
        {
          v50 = v38 + v22;
          v20 = v22 + v49;
          v39 = v7 & (v17 - 1);
          goto LABEL_65;
        }
      }
      else if ( v38 < v37 )
      {
        v50 = v22 + v37;
        v20 = v38 + v22;
        v39 = v37;
LABEL_65:
        v16 = v39 - v38;
        if ( v16 && a4 <= 0 )
          *(_BYTE *)(v23 + 25) = v16 + v38;
      }
      v23 += 32LL;
      LODWORD(v22) = v17 + v22;
    }
    v27 = v23 == v26;
    while ( v23 < v26 )
    {
      v34 = *(unsigned __int8 *)(v23 + 25);
      v35 = 0;
      if ( a4 > 0 )
      {
        if ( v34 < v17 )
        {
          if ( v20 == -1 )
            v20 = v34 + v22;
          v50 = v22 + v17;
          v35 = v17 - v34;
          goto LABEL_48;
        }
      }
      else if ( *(_BYTE *)(v23 + 25) )
      {
        v50 = v34 + v22;
        v35 = -v34;
        v36 = v22;
        if ( v20 != -1 )
          v36 = v20;
        v20 = v36;
LABEL_48:
        if ( v35 && a4 <= 0 )
          *(_BYTE *)(v23 + 25) = v35 + v34;
      }
      v16 += v35;
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
        v50 = v28 + v22;
        v29 = -v28;
        if ( v20 != -1 )
          LODWORD(v22) = v20;
        v20 = v22;
        goto LABEL_18;
      }
    }
    else if ( v28 < v43 )
    {
      if ( v20 == -1 )
        v20 = v28 + v22;
      v50 = v43 + v22;
      v29 = v43 - v28;
LABEL_18:
      if ( v29 && a4 <= 0 )
        *(_BYTE *)(v23 + 25) = v29 + v28;
    }
    v16 += v29;
LABEL_20:
    if ( !v16 )
      goto LABEL_21;
    v31 = a2 & *(_QWORD *)a1;
    v49 = v20;
    v50 -= v20;
    v44 = v20 + v12;
    if ( v16 <= 0 )
    {
      v32 = 0x4000;
    }
    else
    {
      v32 = 4096;
      if ( (a5 & 2) != 0 )
        v32 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(a1, v16, v32, v47);
    if ( (int)result < 0 )
      return result;
    if ( v16 > 0 )
      RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v49, (unsigned int)&v50, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v16);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    *(_WORD *)(a2 + 28) = ~(v16 + ~*(_WORD *)(a2 + 28));
    if ( RtlGetCurrentServiceSessionId() )
      v33 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v33 = 2147353472LL;
    if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v40 = *(_QWORD *)(a1 + 56);
      v41 = v31 + (v44 << 12);
      v42 = (unsigned int)(v50 << 12);
      if ( v16 <= 0 )
        RtlpLogHeapDecommit(v40, v41, v42, 13LL);
      else
        RtlpLogHeapCommit(v40, v41, v42, 10LL);
    }
LABEL_21:
    v7 += v45;
    v13 = v16 + v48;
    v48 += v16;
    if ( v7 >= v10 )
    {
LABEL_22:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    v11 = v46;
  }
}
