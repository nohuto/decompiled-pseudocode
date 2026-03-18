/*
 * XREFs of Isoch_ProcessSegment @ 0x1C00428A4
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x1C0041BD0 (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x1C0043CD4 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C0043E08 (WPP_RECORDER_SF_DDL.c)
 */

bool __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 v13; // rax
  bool v14; // bp
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // r8d
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  unsigned __int64 v29; // rbx
  int v30; // edx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  __int64 v38; // [rsp+98h] [rbp+10h]
  __int64 v39; // [rsp+A8h] [rbp+20h]

  v7 = *a2;
  v9 = *(_QWORD *)(a4 + 16);
  v11 = *(_QWORD *)(a4 + 24);
  v38 = v7;
  v13 = *(unsigned int *)(a4 + 44);
  v14 = 0;
  v15 = 16LL * a5;
  v16 = (v13 & 0xFFFFFFFFFFFFFFF0uLL) + v9 - 16;
  v39 = v9;
  v17 = v15 + v11;
  v18 = v15 + v9;
  if ( v15 + v9 > v16 )
    return v14;
  while ( 1 )
  {
    v14 = v17 == *(_QWORD *)a3;
    v19 = (unsigned __int16)*(_DWORD *)(v18 + 12) >> 10;
    if ( v19 == 1 || v19 == 5 )
      break;
    if ( v19 == 6 )
      goto LABEL_53;
    if ( v19 == 7 )
    {
      if ( v17 == *(_QWORD *)a3 )
        goto LABEL_40;
      *a7 = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = *(unsigned __int8 *)(a1[6] + 135LL);
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v20, v19, 32);
      }
      if ( v14 )
        goto LABEL_40;
    }
LABEL_14:
    v18 += 16LL;
    v17 += 16LL;
    if ( v18 > v16 )
      return v14;
  }
  if ( v17 != *(_QWORD *)a3 )
  {
    *a7 += *(_DWORD *)(v18 + 8) & 0x1FFFF;
    goto LABEL_14;
  }
  v21 = *(unsigned __int8 *)(a3 + 11);
  if ( v21 > 0x1A )
  {
    if ( v21 == 27 )
      goto LABEL_40;
    if ( v21 == 28 )
    {
      *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
      goto LABEL_40;
    }
    if ( v21 != 31 && v21 != 36 )
      goto LABEL_32;
  }
  else if ( v21 != 26 )
  {
    if ( v21 < 2 )
      goto LABEL_32;
    if ( v21 > 4 && v21 != 6 )
    {
      if ( v21 == 20 )
        goto LABEL_40;
      if ( v21 == 23 )
      {
        if ( *(_BYTE *)(a1[5] + 319LL) )
        {
          v22 = *(_DWORD *)(a3 + 8);
          v23 = *(_DWORD *)(v18 + 8);
          if ( (v23 & 0x1FFFFu) < (v22 & 0xFFFFFFu) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_DDDD(
              *(_QWORD *)(a1[7] + 80LL),
              2u,
              0xEu,
              0x1Eu,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(unsigned __int8 *)(a1[6] + 135LL),
              *(_DWORD *)(a1[7] + 144LL),
              *(_DWORD *)(v18 + 8) & 0x1FFFF,
              *(_DWORD *)(a3 + 8) & 0xFFFFFF);
            v22 = *(_DWORD *)(a3 + 8);
            v23 = *(_DWORD *)(v18 + 8);
          }
          v24 = v23 & 0x1FFFF;
          v25 = v22 & 0xFFFFFF;
          goto LABEL_38;
        }
        goto LABEL_40;
      }
LABEL_32:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = *(unsigned __int8 *)(a1[6] + 135LL);
        LOBYTE(v26) = 2;
        WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v26, v21, 31);
      }
      goto LABEL_40;
    }
  }
  v27 = *(_DWORD *)(a3 + 8);
  v28 = *(_DWORD *)(v18 + 8);
  if ( (v28 & 0x1FFFFu) < (v27 & 0xFFFFFFu) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDDDL(*(_QWORD *)(a1[7] + 80LL), *(unsigned __int8 *)(a1[6] + 135LL), v21, v27 & 0xFFFFFF);
    v27 = *(_DWORD *)(a3 + 8);
    v28 = *(_DWORD *)(v18 + 8);
  }
  v25 = v27 & 0xFFFFFF;
  v24 = v28 & 0x1FFFF;
LABEL_38:
  *a7 += v24 - v25;
LABEL_40:
  v29 = v18;
  if ( v18 >= v16 )
    goto LABEL_53;
  while ( 2 )
  {
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 == 1
      || (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 == 5 )
    {
LABEL_47:
      v29 += 16LL;
      if ( v29 >= v16 )
        goto LABEL_53;
      continue;
    }
    break;
  }
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 == 6 )
    goto LABEL_53;
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 != 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v30, (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2, 34);
    }
    goto LABEL_47;
  }
  v31 = *(unsigned __int16 *)(v29 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v32 = a1[7];
    LODWORD(v37) = v31 + 1;
    LODWORD(v36) = *((_DWORD *)a2 + 12);
    LODWORD(v35) = *(_DWORD *)(v32 + 144);
    LODWORD(v34) = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v32 + 80),
      5u,
      0xEu,
      0x21u,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      v34,
      v35,
      v36,
      v37);
  }
  *(_DWORD *)(v38 + 100) = v31 + 1;
  *((_DWORD *)a2 + 12) = v31 + 1;
LABEL_53:
  if ( v14 )
    *a6 = (__int64)(v18 - v39) >> 4;
  return v14;
}
