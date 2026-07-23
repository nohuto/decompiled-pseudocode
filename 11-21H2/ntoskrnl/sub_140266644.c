/*
 * XREFs of sub_140266644 @ 0x140266644
 * Callers:
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 * Callees:
 *     sub_140265A04 @ 0x140265A04 (sub_140265A04.c)
 *     sub_140266998 @ 0x140266998 (sub_140266998.c)
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     NaptrDnsRecordConvert @ 0x140267594 (NaptrDnsRecordConvert.c)
 *     sub_1405B8128 @ 0x1405B8128 (sub_1405B8128.c)
 */

__int64 __fastcall sub_140266644(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r14d
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  int v8; // r11d
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // r10
  int v23; // r11d
  int v24; // r15d
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // cl
  unsigned __int64 v28; // rdx
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // rax
  __int16 v32; // ax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // [rsp+60h] [rbp+8h]
  unsigned int v43; // [rsp+70h] [rbp+18h]
  unsigned __int64 v44; // [rsp+78h] [rbp+20h]

  v2 = a1[2075];
  v42 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  v6 = sub_140266B40(a1, 6LL);
  v7 = sub_140266998(a1, 1LL);
  v9 = *(_DWORD *)(v2 + 44);
  v10 = *(_QWORD *)(v2 + 2400);
  *(_DWORD *)(v2 + 44) = v7;
  v11 = v9 < v7 ? v7 - v9 : 0;
  v43 = v11;
  if ( v6 <= v10 )
    v12 = v10 - v6;
  else
    v12 = v6 - v10;
  v13 = *(_DWORD *)(v2 + 120) & 7;
  v14 = 0;
  v15 = 0LL;
  *(_QWORD *)(v2 + 2200) += (v12 >> 3) - (*(_QWORD *)(v2 + 8 * v13 + 2208) >> 3);
  *(_QWORD *)(v2 + 8 * v13 + 2208) = v12;
  if ( *(_DWORD *)(v2 + 80) == 4 && *(_WORD *)(v2 + 2348) && *(_BYTE *)(v2 + 2350) && *(_BYTE *)(v2 + 2351)
    || v6 <= 0x120 )
  {
    v16 = *(_QWORD *)(v2 + 2400);
    v17 = 0LL;
    v19 = v16;
    v18 = v16;
  }
  else
  {
    v16 = *(_QWORD *)(v2 + 2400);
    v17 = v6 - *(_QWORD *)(v2 + 2368);
    v18 = v16 >> 2;
    v19 = v16;
    v8 = 0;
  }
  if ( v6 < v18 )
  {
    v33 = v16 - v17;
  }
  else
  {
    if ( v6 >= 4 * v19 )
      goto LABEL_8;
    if ( v17 >= 0 )
      goto LABEL_8;
    v33 = v19 - v17;
    if ( v6 >= v33 )
      goto LABEL_8;
  }
  v15 = *(_QWORD *)(v2 + 2384);
  v34 = v33 - v6;
  v14 = 1;
  if ( v34 <= v15 )
    v15 = v34;
LABEL_8:
  v44 = v11;
  if ( v11 >= v6 >> 2 )
  {
    v35 = v11 - (v6 >> 2);
    if ( v35 > v15 && v15 < 0x2000 && !v8 )
    {
      v15 = v11 - (v6 >> 2);
      v14 = 3;
      if ( v35 > 0x2000 )
        v15 = 0x2000LL;
    }
  }
  v20 = sub_140266998(a1, 4LL);
  v24 = v20;
  if ( v15 )
  {
    if ( v15 < 0x1000 && !v23 )
      v15 = 4096LL;
  }
  else if ( !v23 )
  {
    v25 = v20 - *(_DWORD *)(v2 + 48);
    if ( v25 > 0x20000 )
    {
      v36 = a1[2112];
      if ( v36 >= 0x100000 || v36 >= a1[2090] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v20;
      }
      else
      {
        v15 = 0x8000LL;
        v14 = 2;
      }
    }
    else if ( v43 && v25 > 0x18000 && *(_QWORD *)(v2 + 2408) < 0x20000uLL )
    {
      v42 = 1;
    }
  }
  if ( v6 < 4 * v22 )
  {
    v37 = *(_QWORD *)(v2 + 2200);
    v38 = 4 * v37;
    if ( 4 * v37 >= v22 )
    {
      v40 = 2 * v37;
      if ( 2 * v37 <= v22 )
        goto LABEL_16;
      v39 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2400) = v40;
      if ( v40 <= v39 )
        goto LABEL_16;
    }
    else
    {
      v39 = *(_QWORD *)(v2 + 2376);
      *(_QWORD *)(v2 + 2400) = v38;
      if ( v38 >= v39 )
        goto LABEL_16;
    }
    *(_QWORD *)(v2 + 2400) = v39;
    goto LABEL_16;
  }
  if ( v6 > 16 * v22 )
    *(_QWORD *)(v2 + 2400) = *(_QWORD *)(v2 + 2392);
LABEL_16:
  *(_QWORD *)(v2 + 2368) = v6;
  if ( !v15 )
  {
    v26 = *(_QWORD *)(v2 + 2360);
    v27 = 0;
    if ( v26 )
    {
      if ( v26 > *(_QWORD *)(v2 + 2408) )
      {
        v28 = v44;
        v27 = 10;
        if ( *(_WORD *)(v2 + 2346) < 0xFAu )
          *(_WORD *)(v2 + 2346) = 250;
        goto LABEL_23;
      }
      *(_QWORD *)(v2 + 2360) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2408) < (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2384)) )
    {
      if ( !*(_WORD *)(v2 + 2346) || (v32 = sub_140265A04((__int64)a1, 1), (*(_WORD *)(v2 + 2346) = v32) == 0) )
      {
        v28 = v44;
        if ( v44 >= v6 >> 4 )
        {
          v27 = 9;
        }
        else
        {
          v27 = 0;
          if ( v42 )
            v27 = 8;
        }
        goto LABEL_23;
      }
      v27 = 11;
    }
    v28 = v44;
LABEL_23:
    v29 = *(_WORD *)(v2 + 2348);
    if ( v29 )
    {
      if ( *(_WORD *)(v2 + 2346) < v29 )
        *(_WORD *)(v2 + 2346) = v29;
      if ( !v27 )
      {
        v27 = 12;
        *(_WORD *)(v2 + 2346) = v29;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 72) = a1[2112];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_BYTE *)(a2 + 2) = v27;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 40) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    if ( v27 )
    {
      ++*(_DWORD *)(v2 + 4LL * v27 + 2488);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) )
    {
      v5 |= 0x40u;
      *(_WORD *)(v2 + 2346) = 10;
    }
    else if ( !v5 )
    {
      v5 = 32;
    }
    goto LABEL_30;
  }
  sub_1405B8128(a1, v21, 0LL);
  if ( (unsigned __int8)(v14 - 2) <= 1u )
    *(_QWORD *)(v2 + 2360) = v15;
  v28 = v44;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v5 |= 1u;
  *(_QWORD *)(a2 + 80) = v15;
  v41 = a1[2112];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v15 + v41;
  *(_BYTE *)(a2 + 2) = v14;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(v2 + 48) = v24;
  ++*(_DWORD *)(v2 + 4LL * v14 + 2488);
LABEL_30:
  if ( v6 && v28 < v6 )
    v30 = 100 * v43 / v6;
  else
    LOBYTE(v30) = 100;
  *(_BYTE *)(a2 + 3) = v30;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  if ( v14 )
    NaptrDnsRecordConvert(a1, 0LL);
  return v5;
}
