/*
 * XREFs of sub_140233B60 @ 0x140233B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140233E34 @ 0x140233E34 (sub_140233E34.c)
 *     sub_1402341A4 @ 0x1402341A4 (sub_1402341A4.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140233B60(_QWORD *a1)
{
  unsigned __int64 *v2; // r14
  const signed __int64 *v3; // r15
  unsigned __int64 v5; // r13
  int v6; // r12d
  unsigned __int64 i; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  const signed __int64 *v10; // rdi
  __int64 j; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  _DWORD *v14; // r8
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r9
  unsigned __int64 k; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // r8

  sub_14032F1B0(a1[2]);
  v2 = (unsigned __int64 *)a1[21];
  v3 = (const signed __int64 *)(v2 + 3);
  if ( *v2 )
  {
    v5 = *v2 & 0xFFFFFFFFFFFFF000uLL;
    v6 = 0;
    while ( 1 )
    {
      for ( i = 0LL; i < 0x200; i = v20 + v17 + v13 )
      {
        v8 = i & -(__int64)(i < 0x200);
        v9 = 511LL;
        while ( 1 )
        {
          if ( v9 - v8 == -1LL )
            goto LABEL_48;
          v10 = &v3[v8 >> 6];
          for ( j = ~*v10 | ((1LL << (v8 & 0x3F)) - 1); j == -1; j = ~*v10 )
          {
            if ( ++v10 > &v3[v9 >> 6] )
              goto LABEL_48;
          }
          _BitScanForward64(&v12, ~j);
          v13 = v12 + ((v10 - v3) << 6);
          if ( v13 > v9 )
          {
LABEL_48:
            v13 = -1LL;
          }
          else if ( v13 != -1LL )
          {
            break;
          }
          if ( !v8 )
            break;
          v23 = i + 1;
          if ( i + 1 > 0x200 )
            v23 = 512LL;
          v9 = v23 - 1;
          v8 = 0LL;
        }
        if ( v13 < i || v13 == -1LL )
          break;
        if ( v13 >= 0x200 )
        {
          v17 = 0LL;
LABEL_50:
          v15 = 512LL;
          goto LABEL_29;
        }
        v14 = (_DWORD *)v2 + 21;
        v15 = v13;
        v16 = (_DWORD *)v3 + (v13 >> 5);
        if ( v16 != (_DWORD *)((char *)v2 + 84) && (*v16 | *((_DWORD *)qword_140015FA0 + (v13 & 0x1F))) == -1 )
        {
          v15 = (v13 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
          for ( ++v16; v16 < v14 && *v16 == -1; ++v16 )
            v15 += 32LL;
          goto LABEL_20;
        }
        while ( _bittest64(v3, v15) )
        {
          ++v15;
LABEL_20:
          if ( v15 >= 0x200 )
            break;
        }
        v17 = 0LL;
        if ( v16 != v14 )
        {
          v18 = v15 & 0x1F;
          if ( (~*((_DWORD *)qword_140015FA0 + v18) & *v16) == 0 )
          {
            v17 = 32 - v18;
            if ( v18 == 33 )
              goto LABEL_28;
            v22 = v16 + 1;
            while ( v22 < v14 && !*v22 )
            {
              ++v22;
              v17 += 32LL;
              if ( v17 == -1LL )
                goto LABEL_28;
            }
          }
        }
        for ( k = v17 + v15; k < 0x200 && !_bittest64(v3, k) && v17 != -1LL; ++k )
          ++v17;
LABEL_28:
        if ( !v17 )
          goto LABEL_50;
LABEL_29:
        v20 = v15 - v13;
        v21 = v5 + 8 * v13;
        *v2 = v21;
        v2[1] = v21 + 8 * v20 - 8;
        if ( v6 )
          sub_140233E34(a1);
        else
          sub_1402C8FD0(a1[3], v2);
      }
      if ( !v6 )
      {
        if ( !v2[12] )
          goto LABEL_36;
        sub_1402341A4(a1);
      }
      if ( (unsigned int)++v6 >= 2 )
      {
LABEL_36:
        *v2 = 0LL;
        v2[1] = 0LL;
        memset(v2 + 3, 0, 0x40uLL);
        return 0LL;
      }
    }
  }
  return 0LL;
}
