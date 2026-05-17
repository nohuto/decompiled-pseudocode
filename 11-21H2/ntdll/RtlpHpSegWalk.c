/*
 * XREFs of RtlpHpSegWalk @ 0x1800575A8
 * Callers:
 *     RtlpHpHeapWalk @ 0x1800574B8 (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpVsSubsegmentWalk @ 0x180057878 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800579C4 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportSegment @ 0x180059188 (RtlpHpSegReportSegment.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800593B4 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportPageRange @ 0x180120A84 (RtlpHpSegReportPageRange.c)
 */

__int64 __fastcall RtlpHpSegWalk(__int64 *a1, __int64 *a2, char a3)
{
  unsigned int v3; // ebx
  __int64 *v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // r8
  __int64 **v7; // r15
  char v8; // cl
  signed __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int16 v13; // ax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 **v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // rax
  _DWORD v24[4]; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+88h] [rbp+38h] BYREF
  int v26; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( !*a2 )
  {
    v20 = (__int64 **)(a1 + 9);
    if ( *v20 != (__int64 *)v20 )
    {
      v22 = *v20;
      goto LABEL_32;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*((_BYTE *)a2 + 18) & 2) != 0 )
  {
    v7 = (__int64 **)*a2;
    if ( a3 )
    {
      v9 = (signed __int64)&v7[4 * *((unsigned __int8 *)a1 + 10)];
      goto LABEL_16;
    }
    if ( *v7 != a1 + 9 )
    {
LABEL_30:
      v22 = *v7;
      a2 = v4;
LABEL_32:
      RtlpHpSegReportSegment(a1, a2, v22);
      return v3;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v6 = *a1;
  v7 = (__int64 **)(*a2 & *a1);
  v8 = *((_BYTE *)a1 + 8);
  v9 = (signed __int64)&v7[4 * ((unsigned __int64)((unsigned int)*a2 - (unsigned int)v7) >> v8)];
  if ( (*a2 & 0xFFF) != 0 )
  {
    if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
  {
LABEL_15:
    while ( 1 )
    {
      v9 += 32LL * *(unsigned __int8 *)(v9 + 31);
LABEL_16:
      v15 = v9 & *v5;
      v16 = (__int64)(v9 - v15) >> 5;
      if ( (unsigned int)v16 >= 0x100 )
        break;
      if ( (*(_BYTE *)(v9 + 24) & 0x11) != 1 || (v17 = *(_BYTE *)(v9 + 24) & 0xC, v17 == 4) )
      {
        v21 = v16 << *((_BYTE *)v5 + 8);
        *((_WORD *)v4 + 9) = 4096;
        *v4 = v15 + v21;
        v4[1] = (unsigned __int64)*(unsigned __int8 *)(v9 + 31) << *((_BYTE *)v5 + 8);
        *((_WORD *)v4 + 8) = 0;
        return v3;
      }
      v18 = v15 + (v16 << *((_BYTE *)v5 + 8));
      if ( v17 < 8u )
      {
        *v4 = v18;
        RtlpHpSegReportPageRange(v5, v4);
        return v3;
      }
      if ( v17 == 8 )
      {
        v23 = RtlpHpLfhSubsegmentWalk(
                v5[3],
                v18,
                v18,
                *(_DWORD *)(v5[7] + 20),
                (__int64)v24,
                (__int64)&v25,
                (__int64)&v26);
        *v4 = v23;
        if ( v23 )
        {
          RtlpHpSegReportBusyBlock((_DWORD)v5, (_DWORD)v4, v24[0], v25, v26);
          v13 = 0x8000;
          goto LABEL_12;
        }
      }
      else
      {
        v19 = RtlpHpVsSubsegmentWalk(v5[4], v18, v18, (unsigned int)v24, (__int64)&v25, (__int64)&v26);
        *v4 = v19;
        if ( v19 )
        {
          RtlpHpSegReportBusyBlock((_DWORD)v5, (_DWORD)v4, v24[0], v25, v26);
          return v3;
        }
      }
    }
    if ( *v7 == v5 + 9 )
      return (unsigned int)-2147483622;
    a1 = v5;
    goto LABEL_30;
  }
LABEL_6:
  v9 += -32LL * *(unsigned __int8 *)(v9 + 31);
LABEL_7:
  v10 = (v9 & v6) + ((v9 - (v9 & v6)) >> 5 << v8);
  v11 = *v4;
  if ( (*(_BYTE *)(v9 + 24) & 0xC) == 8 )
    v12 = RtlpHpLfhSubsegmentWalk(v5[3], v10, v11, *(_DWORD *)(v5[7] + 20), (__int64)v24, (__int64)&v25, (__int64)&v26);
  else
    v12 = RtlpHpVsSubsegmentWalk(v5[4], v10, v11, (unsigned int)v24, (__int64)&v25, (__int64)&v26);
  *v4 = v12;
  if ( !v12 )
    goto LABEL_15;
  RtlpHpSegReportBusyBlock((_DWORD)v5, (_DWORD)v4, v24[0], v25, v26);
  v13 = 0x8000;
  if ( (*(_BYTE *)(v9 + 24) & 0xC) != 8 )
    v13 = 0;
LABEL_12:
  *((_WORD *)v4 + 9) |= v13;
  return v3;
}
