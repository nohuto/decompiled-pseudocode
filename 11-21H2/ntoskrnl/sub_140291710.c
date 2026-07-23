/*
 * XREFs of sub_140291710 @ 0x140291710
 * Callers:
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210A70 @ 0x140210A70 (sub_140210A70.c)
 *     sub_140291A50 @ 0x140291A50 (sub_140291A50.c)
 *     sub_140291A94 @ 0x140291A94 (sub_140291A94.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 */

void __fastcall sub_140291710(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  bool v8; // zf
  __int64 v9; // r13
  _QWORD *v10; // r12
  _QWORD *v11; // rsi
  char v12; // al
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rbp
  volatile signed __int32 *v17; // rdx
  char v18; // r10
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE *v24; // rbp
  char v25; // cl
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v32; // r11
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // edx
  char v38; // al
  char v39; // al
  char v40; // cl
  __int64 v41; // rdx
  char v42; // [rsp+70h] [rbp+8h]

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 34520);
  if ( a2 > v5 )
    v4 = (a2 - 1 + (unsigned int)dword_140D06B90 - v5) / (unsigned int)dword_140D06B90 + 1;
  v6 = DesiredTime;
  v7 = qword_140C2BD08 * DesiredTime;
  v8 = byte_140D06889 == 0;
  *(_QWORD *)(a1 + 34520) = qword_140C2BD08;
  if ( !v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v32 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14056CF48(a1, v7, v6, 4, 1, 0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v35 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v35;
          if ( v8 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  *(_QWORD *)(a1 + 32560) = 0LL;
  *(_QWORD *)(a1 + 32568) = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  v42 = 0;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD **)(v9 + 104);
  if ( v10 )
    v10 = (_QWORD *)((char *)v10 + *(unsigned int *)(a1 + 216));
  v11 = *(_QWORD **)(a1 + 34184);
  if ( v11 == (_QWORD *)(a1 + 34184) )
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 33113) )
    {
      v41 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 33113) = 0;
      KeInterlockedClearProcessorAffinityEx(asc_140C0B690, v41, v6);
    }
    return;
  }
  v12 = v4;
  do
  {
    v13 = v11 - 9;
    if ( v4 >= 0x40 )
      v14 = 0LL;
    else
      v14 = v13[6] << v12;
    v15 = v14 | 1;
    if ( (v13[14] & 4) == 0 )
      v15 = v14;
    v13[6] = v15;
    v16 = (char *)v13 - *(unsigned int *)(a1 + 216);
    sub_140291A50(v16, v11 - 9);
    if ( !a3 )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( (v13[14] & 0x10) == 0 )
        {
          v21 = *((_QWORD *)v16 + 5);
          v22 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 6, v21);
          v23 = *((_QWORD *)v16 + 5);
          if ( v22 > v23 )
            _InterlockedExchange64((volatile __int64 *)v16 + 6, v23);
        }
      }
    }
    if ( v13[1] != v13[2] )
    {
      v6 = (unsigned int)dword_140D05274 * (*v13 >> 10)
         + ((v13[4] * (unsigned __int64)(unsigned int)(1024 - dword_140D05274)) >> 10);
      v13[4] = v6;
    }
    v17 = (volatile signed __int32 *)v13[15];
    v18 = 0;
    *v13 = 0LL;
    v13[5] = 0LL;
    if ( v17 )
    {
      v19 = ((*((unsigned __int8 *)v13 + 112) >> 3) & 1) - *((_DWORD *)v13 + 29);
      if ( (int)(v19 + _InterlockedExchangeAdd(v17, v19)) < 0 )
        *(_DWORD *)v13[15] = 0;
    }
    v20 = *((unsigned __int8 *)v13 + 112);
    v13[3] = 0LL;
    *((_BYTE *)v13 + 112) = v20 & 0xFC;
    *((_DWORD *)v13 + 29) = (v20 >> 3) & 1;
    *(_OWORD *)(v13 + 11) = 0LL;
    v13[13] = 0LL;
    v13[49] = 0LL;
    v13[50] = 0LL;
    if ( !*((_DWORD *)v13 + 29) )
    {
      *((_BYTE *)v13 + 112) &= ~4u;
      if ( v13 == v10 )
      {
        v24 = *(_BYTE **)(a1 + 56);
        if ( (*(_BYTE *)(v9 + 2) & 4) != 0 )
        {
          if ( *(char *)(v9 + 195) < 16
            && *(_QWORD *)(v9 + 104)
            && (v29 = *(_QWORD *)(v9 + 104)) != 0
            && (v30 = *(unsigned int *)(a1 + 216) + v29) != 0
            && (unsigned int)sub_1402103E0(v9, v30, v6, 0, 0LL) )
          {
            v25 = 1;
            v18 = 0;
          }
          else
          {
            v25 = *(_BYTE *)(v9 + 195);
            v18 = 0;
          }
        }
        else
        {
          v25 = *(_BYTE *)(v9 + 195);
        }
        v26 = v25 & 0x7F | (*(_BYTE *)(v9 + 119) << 7);
        *v24 = v26;
        v27 = *(_QWORD *)(a1 + 35000);
        if ( v27 )
        {
          if ( v9 == *(_QWORD *)(a1 + 24) )
            v36 = (unsigned int)dword_140D0504C;
          else
            v36 = v26 & 0x7F;
          sub_14045B7FC(v27, v36, 0LL);
        }
        v28 = *(_QWORD *)(a1 + 56);
        if ( dword_140D068FC )
        {
          v37 = *(_DWORD *)(v9 + 80);
          v38 = (*(_BYTE *)(v28 + 64) ^ *(_BYTE *)(v9 + 512)) & 7 ^ *(_BYTE *)(v28 + 64);
          v39 = (v38 ^ (8 * *(_BYTE *)(v9 + 516))) & 0x38 ^ v38;
          if ( v37 <= *(_DWORD *)(v9 + 84) )
            v37 = *(_DWORD *)(v9 + 84);
          v40 = 64;
          if ( v37 < dword_140D05308 )
            v40 = v18;
          *(_BYTE *)(v28 + 64) = v40 | v39 & 0xBF;
        }
      }
LABEL_23:
      sub_140291A94(v11 - 9, 0LL, a1, 0LL);
      goto LABEL_24;
    }
    if ( a3 )
      goto LABEL_23;
    if ( *((_WORD *)v13 + 57) )
    {
      sub_140210A70((__int64)(v11 - 9), a1, 0LL);
      v42 = 1;
    }
LABEL_24:
    v11 = (_QWORD *)*v11;
    v12 = v4;
  }
  while ( v11 != (_QWORD *)(a1 + 34184) );
  if ( !v42 )
    goto LABEL_26;
}
