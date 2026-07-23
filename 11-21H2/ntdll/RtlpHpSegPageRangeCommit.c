/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180023E30
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x18001816C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x1800184F8 (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x180023D10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x18002EEE0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpMetadataCommit @ 0x180056AF0 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegPageRangeHandleCommit @ 0x180022624 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180116DB8 (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogMemStats @ 0x180118400 (RtlpHpTlLogMemStats.c)
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
  unsigned int v16; // r14d
  int v17; // ebx
  char v18; // cl
  unsigned __int64 v19; // r10
  unsigned int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  int v24; // edx
  unsigned __int64 v25; // r11
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r11
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  int v31; // edx
  unsigned int v32; // r11d
  __int64 result; // rax
  int v34; // eax
  unsigned __int64 v35; // r14
  int v36; // ecx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // r8d
  unsigned int v46; // edx
  int v47; // ebx
  int v48; // r8d
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // [rsp+40h] [rbp-58h]
  unsigned int v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+44h] [rbp-54h]
  int v55; // [rsp+48h] [rbp-50h]
  int v56; // [rsp+A0h] [rbp+8h]
  int v57; // [rsp+A8h] [rbp+10h]
  unsigned int v58; // [rsp+B0h] [rbp+18h] BYREF
  int v59; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a3;
  v56 = 0;
  if ( (a5 & 0x800000) != 0 )
    v56 = 2;
  v10 = a4 + a3;
  v11 = 0x7FFF;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
    v11 = 511;
  v55 = v11;
  v12 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v10 = a3 - a4;
  v13 = 0;
  v57 = 0;
  if ( a3 >= v10 )
    goto LABEL_18;
  while ( 1 )
  {
    v14 = *(_BYTE *)(a1 + 9);
    v15 = v10 - v7;
    if ( v11 - (v11 & (v7 + v12)) + 1 < v10 - v7 )
      v15 = v11 - (v11 & (v7 + v12)) + 1;
    v16 = 1 << v14;
    v17 = 0;
    v18 = *(_BYTE *)(a1 + 9);
    v54 = v15;
    v19 = (unsigned __int64)v7 >> v14;
    v20 = -1;
    v59 = -1;
    v21 = a2 + 32 * v19;
    v22 = v19 << v18;
    v58 = v7 & (v16 - 1);
    v23 = v15 + v58 - 1;
    v24 = (v16 - 1) & v23;
    v25 = v23 >> v18;
    v26 = v24 + 1;
    v27 = v58;
    v28 = v21 + 32 * v25;
    v52 = v26;
    if ( v58 )
    {
      v45 = v16;
      if ( v21 == v28 )
        v45 = v26;
      v46 = *(unsigned __int8 *)(v21 + 25);
      if ( a4 <= 0 )
      {
        if ( v46 > v58 )
        {
          v47 = v7 & (v16 - 1);
          v45 = *(unsigned __int8 *)(v21 + 25);
          goto LABEL_63;
        }
      }
      else if ( v46 < v45 )
      {
        v47 = v45;
        v27 = *(unsigned __int8 *)(v21 + 25);
LABEL_63:
        v48 = v22 + v45;
        v17 = v47 - v46;
        v59 = v48;
        v20 = v22 + v27;
        if ( v17 )
        {
          v59 = v48;
          if ( a4 <= 0 )
          {
            v59 = v48;
            *(_BYTE *)(v21 + 25) = v17 + v46;
          }
        }
      }
      v21 += 32LL;
      LODWORD(v22) = v16 + v22;
    }
    for ( ; v21 < v28; LODWORD(v22) = v16 + v22 )
    {
      v38 = *(unsigned __int8 *)(v21 + 25);
      v39 = 0;
      v40 = v20;
      if ( a4 > 0 )
      {
        if ( v38 < v16 )
        {
          v20 = v38 + v22;
          v39 = v16 - v38;
          if ( v40 != -1 )
            v20 = v40;
          v41 = v16;
          goto LABEL_45;
        }
      }
      else if ( *(_BYTE *)(v21 + 25) )
      {
        v42 = v22;
        v39 = -v38;
        if ( v20 != -1 )
          v42 = v20;
        v20 = v42;
        v41 = *(unsigned __int8 *)(v21 + 25);
LABEL_45:
        v43 = v22 + v41;
        v59 = v43;
        if ( v39 )
        {
          v59 = v43;
          if ( a4 <= 0 )
          {
            v59 = v43;
            *(_BYTE *)(v21 + 25) = v39 + v38;
          }
        }
      }
      v17 += v39;
      v21 += 32LL;
    }
    v29 = v20;
    if ( v21 != v28 )
      goto LABEL_16;
    v30 = *(unsigned __int8 *)(v21 + 25);
    v31 = 0;
    if ( a4 <= 0 )
    {
      if ( !*(_BYTE *)(v21 + 25) )
        goto LABEL_15;
      v44 = v22;
      v31 = -v30;
      v32 = *(unsigned __int8 *)(v21 + 25);
      if ( v20 != -1 )
        v44 = v20;
      v20 = v44;
LABEL_50:
      v59 = v32 + v22;
      if ( v31 )
      {
        v59 = v32 + v22;
        if ( a4 <= 0 )
        {
          v59 = v32 + v22;
          *(_BYTE *)(v21 + 25) = v31 + v30;
        }
      }
      goto LABEL_15;
    }
    v32 = v52;
    if ( v30 < v52 )
    {
      v20 = v30 + v22;
      v31 = v52 - v30;
      if ( v29 != -1 )
        v20 = v29;
      goto LABEL_50;
    }
LABEL_15:
    v17 += v31;
LABEL_16:
    if ( !v17 )
      goto LABEL_17;
    v34 = v59 - v20;
    v35 = a2 & *(_QWORD *)a1;
    v58 = v20;
    v59 -= v20;
    v53 = v20 + v12;
    if ( v17 <= 0 )
    {
      v36 = 0x4000;
    }
    else
    {
      v36 = 4096;
      if ( (a5 & 2) != 0 )
        v36 = 1073745920;
    }
    result = RtlpHpSegMgrCommit((int *)a1, v35, v20 + v12, v34, v17, v36, v56);
    if ( (int)result < 0 )
      return result;
    if ( v17 > 0 )
      RtlpHpSegPageRangeHandleCommit(a1, a2, (int *)&v58, &v59, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v17);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    *(_WORD *)(a2 + 28) = ~(v17 + ~*(_WORD *)(a2 + 28));
    if ( RtlGetCurrentServiceSessionId() )
      v37 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v37 = 2147353472LL;
    if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v49 = *(_QWORD *)(a1 + 56);
      v50 = v35 + (v53 << 12);
      v51 = (unsigned int)(v59 << 12);
      if ( v17 <= 0 )
        RtlpLogHeapDecommit(v49, v50, v51, 13LL);
      else
        RtlpLogHeapCommit(v49, v50, v51, 10LL);
    }
LABEL_17:
    v7 += v54;
    v13 = v17 + v57;
    v57 += v17;
    if ( v7 >= v10 )
    {
LABEL_18:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    v11 = v55;
  }
}
