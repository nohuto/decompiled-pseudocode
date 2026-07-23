/*
 * XREFs of sub_14021AD70 @ 0x14021AD70
 * Callers:
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14021AD70(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 CurrentIrql; // rcx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r12
  __int64 *v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // r11d
  unsigned int v19; // r11d
  unsigned __int8 v20; // bl
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v34; // r9
  int v35; // edx
  bool v36; // zf
  unsigned int v37; // [rsp+70h] [rbp+8h]
  int v38; // [rsp+78h] [rbp+10h] BYREF
  __int64 v39; // [rsp+80h] [rbp+18h]
  unsigned __int64 v40; // [rsp+88h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v38 = 0;
  v5 = v1 & 0xFFFFFFFFFFFFF000uLL | 1;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v22 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = *(_DWORD *)(v4 + 48);
  do
  {
    while ( (v7 & 1) != 0 )
    {
      if ( (v7 & 2) != 0 )
      {
        v38 = 0;
        do
        {
          sub_1402F32E0(&v38);
          v7 = *(_DWORD *)(v4 + 48);
        }
        while ( (v7 & 1) != 0 );
      }
      else
      {
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 | 2, v7);
      }
    }
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 & 0xFFFFFFFC | 1, v7);
  }
  while ( v8 != v7 );
  v9 = *(_QWORD *)(v4 + 120);
  v10 = *(_DWORD *)a1 | 0x20;
  v11 = v9 & 0xFFF;
  *(_DWORD *)a1 = v10;
  v12 = *(__int64 **)(v4 + 72);
  v13 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v9 & 0xFFFFFFFFFFFFF000uLL) + (v11 << 12);
  v15 = *v12;
  if ( *(_QWORD *)(*v12 + 64) && (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (*(_BYTE *)(v15 + 62) & 0xC) == 4 )
    v16 = 128LL;
  else
    v16 = 8LL;
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v14 )
  {
    if ( v11 == 4095 )
      v5 = (v13 + 4096) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v9 + 1) & 0xFFF;
    LOBYTE(v19) = v10;
  }
  else if ( v1 > v14 && (v17 = (v1 - v14) >> 12, v40 = v17, v17 < v16) )
  {
    v18 = v10;
    v25 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    v37 = v25;
    if ( v25 <= v17 )
    {
      if ( v25 )
      {
        v18 = v10 & 0xFFFFFFDF;
        *(_DWORD *)a1 = v10 & 0xFFFFFFDF;
      }
    }
    else
    {
      v25 = (v1 - v14) >> 12;
      v37 = v25;
    }
    if ( (v18 & 0x20) == 0 )
      goto LABEL_15;
    v26 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( v25 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL
          && v26 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v29 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v29 )
          {
            LOBYTE(v30) = v27 | 0x20;
            v31 = *(_QWORD *)(v29 + 8 * ((v26 >> 3) & 0x1FF));
            if ( (v31 & 0x20) == 0 )
              v30 = *(_QWORD *)v26;
            LOBYTE(v27) = v30;
            v25 = v37;
            if ( (v31 & 0x42) != 0 )
              LOBYTE(v27) = v27 | 0x42;
          }
        }
        if ( (v27 & 1) == 0 || (v27 & 0x20) == 0 )
          break;
        --v25;
        v26 -= 8LL;
        v37 = v25;
        if ( !v25 )
          goto LABEL_37;
      }
      if ( !v25 )
      {
LABEL_37:
        LODWORD(v17) = v40;
        goto LABEL_38;
      }
      goto LABEL_13;
    }
LABEL_38:
    v28 = (unsigned int)(v17 + 1);
    if ( (unsigned __int64)(v11 + v28) > 0xFFF )
      v5 = (v9 + ((unsigned __int64)((unsigned int)v28 + (v9 & 0xFFF) - 4095) << 12)) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v17 + 1 + (_WORD)v9) & 0xFFF;
    v19 = *(_DWORD *)a1;
  }
  else if ( v14
         || (LOBYTE(v19) = v10,
             v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))) )
  {
    v18 = v10;
LABEL_13:
    v19 = v18 & 0xFFFFFFDF;
    *(_DWORD *)a1 = v19;
  }
  if ( (v19 & 0x20) == 0 )
  {
LABEL_15:
    *(_DWORD *)(v4 + 64) &= ~0x2000000u;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v4 + 64) & 0x2000000) != 0 )
  {
    v23 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    v24 = ((v1 >> 12) - v23) >> 8;
    if ( v14 )
      v1 = v14 - 4096;
    if ( (((v1 >> 12) - v23) >> 8) + 1 == v24 )
      v3 = -1073741280;
  }
LABEL_16:
  *(_QWORD *)(v4 + 120) = v5;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFC);
  v20 = v39;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v32 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v34 = *((_QWORD *)CurrentPrcb + 4375);
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
        v36 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
        *(_DWORD *)(v34 + 20) &= v35;
        if ( v36 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v20);
  return v3;
}
