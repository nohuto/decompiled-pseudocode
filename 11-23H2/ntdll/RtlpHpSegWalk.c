/*
 * XREFs of RtlpHpSegWalk @ 0x180063BB0
 * Callers:
 *     RtlpHpHeapWalk @ 0x180063ABC (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpSegReportSegment @ 0x180063ED8 (RtlpHpSegReportSegment.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18008BDF4 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpVsSubsegmentWalk @ 0x18008CA34 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x18008CBFC (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportPageRange @ 0x180123EEC (RtlpHpSegReportPageRange.c)
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
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 **v18; // rax
  __int64 *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int16 v23; // cx
  __int64 v24; // rax
  _DWORD v25[4]; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+98h] [rbp+48h] BYREF
  int v27; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( !*a2 )
  {
    v18 = (__int64 **)(a1 + 9);
    if ( *v18 == (__int64 *)v18 )
      return (unsigned int)-2147483622;
    v19 = *v18;
LABEL_18:
    RtlpHpSegReportSegment(a1, a2, v19);
    return v3;
  }
  if ( (*((_BYTE *)a2 + 18) & 2) != 0 )
  {
    v7 = (__int64 **)*a2;
    if ( a3 )
    {
      v10 = (__int64)&v7[4 * *((unsigned __int8 *)a1 + 10)];
LABEL_7:
      while ( 1 )
      {
        v11 = *v5 & v10;
        v12 = (__int64)(v10 - v11) >> 5;
        if ( (unsigned int)v12 >= 0x100 )
          break;
        if ( (*(_BYTE *)(v10 + 24) & 0x11) != 1 || (v13 = *(_BYTE *)(v10 + 24) & 0xC, v13 == 4) )
        {
          v16 = v12 << *((_BYTE *)v5 + 8);
          *((_WORD *)v4 + 9) = 4096;
          *v4 = v11 + v16;
          v4[1] = (unsigned __int64)*(unsigned __int8 *)(v10 + 31) << *((_BYTE *)v5 + 8);
          *((_WORD *)v4 + 8) = 0;
          return v3;
        }
        v14 = v11 + (v12 << *((_BYTE *)v5 + 8));
        if ( v13 < 8u )
        {
          *v4 = v14;
          RtlpHpSegReportPageRange(v5, v4);
          return v3;
        }
        if ( v13 == 8 )
        {
          v15 = RtlpHpLfhSubsegmentWalk(
                  v5[3],
                  v14,
                  v14,
                  *(_DWORD *)(v5[7] + 20),
                  (__int64)v25,
                  (__int64)&v26,
                  (__int64)&v27);
          *v4 = v15;
          if ( v15 )
          {
            RtlpHpSegReportBusyBlock((_DWORD)v5, (_DWORD)v4, v25[0], v26, v27);
            v23 = 0x8000;
            goto LABEL_32;
          }
        }
        else
        {
          v24 = RtlpHpVsSubsegmentWalk(v5[4], v14, v14, (unsigned int)v25, (__int64)&v26, (__int64)&v27);
          *v4 = v24;
          if ( v24 )
          {
            RtlpHpSegReportBusyBlock((_DWORD)v5, (_DWORD)v4, v25[0], v26, v27);
            return v3;
          }
        }
        v10 += 32LL * *(unsigned __int8 *)(v10 + 31);
      }
      if ( *v7 == v5 + 9 )
        return (unsigned int)-2147483622;
      a1 = v5;
    }
    else if ( *v7 == a1 + 9 )
    {
      return (unsigned int)-2147483622;
    }
    v19 = *v7;
    a2 = v4;
    goto LABEL_18;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v6 = *a1;
  v7 = (__int64 **)(*a2 & *a1);
  v8 = *((_BYTE *)a1 + 8);
  v9 = (signed __int64)&v7[4 * ((unsigned __int64)((unsigned int)*a2 - (unsigned int)v7) >> v8)];
  if ( (*a2 & 0xFFF) == 0 )
  {
    if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
    {
LABEL_6:
      v10 = 32LL * *(unsigned __int8 *)(v9 + 31) + v9;
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  if ( (*(_BYTE *)(v9 + 24) & 2) == 0 )
LABEL_37:
    v9 += -32LL * *(unsigned __int8 *)(v9 + 31);
  v20 = (v9 & v6) + ((v9 - (v9 & v6)) >> 5 << v8);
  v21 = *v4;
  if ( (*(_BYTE *)(v9 + 24) & 0xC) == 8 )
    v22 = RtlpHpLfhSubsegmentWalk(v5[3], v20, v21, *(_DWORD *)(v5[7] + 20), (__int64)v25, (__int64)&v26, (__int64)&v27);
  else
    v22 = RtlpHpVsSubsegmentWalk(v5[4], v20, v21, (unsigned int)v25, (__int64)&v26, (__int64)&v27);
  *v4 = v22;
  if ( !v22 )
    goto LABEL_6;
  RtlpHpSegReportBusyBlock((_DWORD)v5, (_DWORD)v4, v25[0], v26, v27);
  v23 = 0x8000;
  if ( (*(_BYTE *)(v9 + 24) & 0xC) != 8 )
    v23 = 0;
LABEL_32:
  *((_WORD *)v4 + 9) |= v23;
  return v3;
}
