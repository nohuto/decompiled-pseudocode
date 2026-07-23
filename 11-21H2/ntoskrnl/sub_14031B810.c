/*
 * XREFs of sub_14031B810 @ 0x14031B810
 * Callers:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_14096A278 @ 0x14096A278 (sub_14096A278.c)
 * Callees:
 *     sub_14023C9F8 @ 0x14023C9F8 (sub_14023C9F8.c)
 *     sub_14023CB20 @ 0x14023CB20 (sub_14023CB20.c)
 *     sub_14023CB68 @ 0x14023CB68 (sub_14023CB68.c)
 *     sub_140274818 @ 0x140274818 (sub_140274818.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_14031BF80 @ 0x14031BF80 (sub_14031BF80.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_14031C5D0 @ 0x14031C5D0 (sub_14031C5D0.c)
 */

__int64 __fastcall sub_14031B810(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // ebp
  int v4; // eax
  unsigned __int64 v5; // rdi
  int v6; // ecx
  __int64 result; // rax
  __int64 i; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbp
  __int64 *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 72);
    if ( (v4 & 0x40) == 0 )
    {
      **(_QWORD **)(a1 + 56) = -1LL;
      v4 = *(_DWORD *)(a1 + 72);
    }
    v5 = 1LL;
    if ( (v4 & 0x20) == 0 )
      break;
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 < *(_QWORD *)(a1 + 152) || v9 > *(_QWORD *)(a1 + 160) )
      break;
    if ( (v1 & 0x3F) != 0 || !v1 || !sub_140274818(a1) )
    {
      v10 = *(_QWORD *)(a1 + 168);
      if ( v10 == -1 )
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = *(_QWORD *)v11;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL
          && v11 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          v14 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8 * ((v11 >> 3) & 0x1FF));
            v16 = v12 | 0x20;
            if ( (v15 & 0x20) == 0 )
              v16 = v12;
            v12 = v16;
            if ( (v15 & 0x42) != 0 )
              v12 = v16 | 0x42;
          }
        }
        v23 = v12;
        v13 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v13 = v10 + ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 152)) >> 12);
      }
      *(_QWORD *)(a1 + 136) = v13;
      if ( v13 > qword_140C50840 || (*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      {
        v17 = *(_QWORD *)(a1 + 160) + 1LL;
        if ( *(_QWORD *)(a1 + 16) <= v17 )
          v17 = *(_QWORD *)(a1 + 16);
        v18 = (v17 - (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
        if ( v18 > 1 )
        {
          v19 = *(_QWORD *)(a1 + 136);
          v20 = 512 - (v19 & 0x1FF);
          if ( v18 <= v20 )
            v20 = v18;
          if ( *(_QWORD *)(a1 + 168) == -1LL )
          {
            v21 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL);
            if ( v20 > 1 )
            {
              do
              {
                v23 = *v21;
                v22 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
                if ( v22 != v19 + 1 )
                  break;
                ++v21;
                ++v5;
                v19 = v22;
              }
              while ( v5 < v20 );
            }
          }
          else
          {
            v5 = v20;
          }
        }
      }
LABEL_11:
      result = sub_14031BAB0(a1, v5);
      v2 = result;
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) += v5 << 12;
      *(_QWORD *)(a1 + 24) += 8 * v5;
      if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      {
        for ( i = *(_QWORD *)(a1 + 136); v5; --v5 )
        {
          **(_QWORD **)(a1 + 56) = i++;
          *(_QWORD *)(a1 + 56) += 8LL;
        }
      }
      goto LABEL_15;
    }
LABEL_31:
    sub_14023CB68(a1);
    sub_14023CB20(a1);
LABEL_15:
    ++v1;
    if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a1 + 32) )
      return v2;
  }
  if ( (v1 & 0xF) == 0 && v1 && sub_140274818(a1) )
    goto LABEL_31;
  LODWORD(v23) = 0;
  v6 = sub_14031BF80(a1);
  if ( !*(_QWORD *)(a1 + 48) )
  {
LABEL_33:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_11;
  }
  while ( 1 )
  {
    result = sub_14031C290(a1, &v23);
    if ( (int)result < 0 )
      return result;
    if ( !(_DWORD)v23 )
    {
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)sub_140317A10(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      sub_14031C5D0(a1);
      goto LABEL_11;
    }
    if ( (_DWORD)v23 != 1 )
    {
      result = sub_14023C9F8(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C52A74;
        return result;
      }
    }
    v6 = sub_14031BF80(a1);
    if ( !*(_QWORD *)(a1 + 48) )
      goto LABEL_33;
  }
}
