/*
 * XREFs of sub_1402F3C40 @ 0x1402F3C40
 * Callers:
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 * Callees:
 *     sub_14021C750 @ 0x14021C750 (sub_14021C750.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402F3FE0 @ 0x1402F3FE0 (sub_1402F3FE0.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 *     sub_14039E48C @ 0x14039E48C (sub_14039E48C.c)
 *     sub_14039E55C @ 0x14039E55C (sub_14039E55C.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_1403A22F0 @ 0x1403A22F0 (sub_1403A22F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F6DE @ 0x14045F6DE (sub_14045F6DE.c)
 *     sub_14063F75C @ 0x14063F75C (sub_14063F75C.c)
 */

unsigned __int64 __fastcall sub_1402F3C40(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  __int64 v6; // rdi
  char v9; // bl
  unsigned __int64 result; // rax
  unsigned __int8 v11; // r12
  struct _KPRCB *v12; // rbp
  _WORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rbx
  unsigned __int8 v26; // bl
  int v27; // eax
  unsigned __int8 v28; // r11
  char v29; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  int v38; // eax
  unsigned __int8 v39; // bl
  __int64 v40; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  __int64 v43; // r8
  int v44; // eax
  signed __int32 v45[8]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v46[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v47; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v48; // [rsp+50h] [rbp-48h] BYREF
  int v49; // [rsp+58h] [rbp-40h]
  unsigned int v50; // [rsp+5Ch] [rbp-3Ch]
  char v52; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v53; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  v6 = a1;
  v47 = 0LL;
  v52 = 0;
  v46[0] = 0;
  v53 = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_1402F3FE0(0, a3, a4, (unsigned int)&v52, (__int64)&v53) )
  {
    if ( (_DWORD)v6 )
    {
      v25 = a2;
      do
      {
        sub_1403A22F0(*v25++, a3);
        --v6;
      }
      while ( v6 );
      LODWORD(v6) = a1;
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v26 = v53;
      if ( v53 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = *((_QWORD *)CurrentPrcb + 4375);
        v26 = v53;
        v33 = ~(unsigned __int16)(-1LL << (v53 + 1));
        v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
        *(_DWORD *)(v32 + 20) &= v33;
        if ( v34 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v26 = v53;
    }
    __writecr8(v26);
    v9 = 1;
  }
  result = *a2;
  if ( a3 == 1
    && result <= 0x7FFFFFFEFFFFLL
    && (result = (unsigned __int64)KeGetCurrentThread(), *(_QWORD *)(*(_QWORD *)(result + 184) + 992LL))
    || v52 )
  {
    sub_14039E48C(a3, &v47, v46);
    v27 = sub_14039E55C(a4);
    result = sub_14039DB1C(v47, v27, v46[0], v28, v29, v6, (__int64)a2);
    v9 |= result;
  }
  if ( !v9 )
  {
    v48 = a2;
    v49 = v6;
    v50 = a3;
    v11 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v11 <= 0xFu )
    {
      v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v19 + 20) |= (-1 << (v11 + 1)) & 0x1FFC;
    }
    v12 = KeGetCurrentPrcb();
    if ( a4 )
    {
      if ( (unsigned int)dword_140D06884 > 1 )
      {
        v20 = 2147483652LL;
        if ( a4 != 1 )
          v20 = 4LL;
        sub_1402FFB70((_DWORD)v12, 1, 0, (unsigned int)&v48, v20);
LABEL_32:
        sub_14021C750((__int64)&v48);
        while ( *((_DWORD *)v12 + 2912) )
        {
          if ( (++v4 & dword_140D0527C) == 0
            && (dword_140D0689C & 0x40) != 0
            && (unsigned __int8)sub_14039EA10(v22, v21, v23, v24) )
          {
            sub_14039D930(v4);
          }
          else
          {
            _mm_pause();
          }
        }
        goto LABEL_16;
      }
    }
    else
    {
      _InterlockedOr(v45, 0);
      v13 = (_WORD *)((char *)v12 + 11704);
      v14 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 184LL);
      *((_QWORD *)v12 + 1463) = 2097153LL;
      memset((char *)v12 + 11712, 0, 0x100uLL);
      sub_140300030((char *)v12 + 11704, *((unsigned __int16 *)v12 + 5853), v14 + 368);
      LODWORD(v15) = *((unsigned __int16 *)v12 + 5852);
      v16 = (unsigned int)dword_140D0E5E0[*((unsigned int *)v12 + 9)] >> 6;
      if ( (unsigned int)v15 > (unsigned int)v16 )
      {
        v15 = *(_QWORD *)&v13[4 * v16 + 4];
        _bittestandreset64(&v15, dword_140D0E5E0[*((unsigned int *)v12 + 9)] & 0x3F);
        *(_QWORD *)&v13[4 * v16 + 4] = v15;
        LOWORD(v15) = *v13;
      }
      v17 = 0;
      if ( (_WORD)v15 )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)&v13[4 * v17 + 4];
          if ( v18 )
          {
            if ( v17 != *((unsigned __int8 *)v12 + 208) || v18 != *((_QWORD *)v12 + 25) )
              break;
          }
          if ( ++v17 >= *v13 )
            goto LABEL_14;
        }
        sub_1402FFB70((_DWORD)v12, 0, (_DWORD)v12 + 11704, (unsigned int)&v48, 4LL);
        LODWORD(v6) = a1;
        goto LABEL_32;
      }
LABEL_14:
      LODWORD(v6) = a1;
    }
    sub_14021C750((__int64)&v48);
LABEL_16:
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && v11 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = *((_QWORD *)v36 + 4375);
          v38 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v34 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
          *(_DWORD *)(v37 + 20) &= v38;
          if ( v34 )
            sub_140418E4C(v36);
        }
      }
    }
    result = v11;
    __writecr8(v11);
    goto LABEL_18;
  }
  if ( a3 == 4 )
    result = sub_1402F374C(1);
LABEL_18:
  if ( byte_140D05002 )
    result = sub_14045F6DE((unsigned int)v6, a2, a3);
  if ( dword_140D01470 )
  {
    v39 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v39 <= 0xFu )
    {
      v40 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v40 + 20) |= (-1 << (v39 + 1)) & 0xFFFC;
    }
    sub_14063F75C((unsigned int)v6, a2, a3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v39 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = *((_QWORD *)v42 + 4375);
          v44 = ~(unsigned __int16)(-1LL << (v39 + 1));
          v34 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
          *(_DWORD *)(v43 + 20) &= v44;
          if ( v34 )
            sub_140418E4C(v42);
        }
      }
    }
    result = v39;
    __writecr8(v39);
  }
  return result;
}
