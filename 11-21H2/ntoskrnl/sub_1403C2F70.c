/*
 * XREFs of sub_1403C2F70 @ 0x1403C2F70
 * Callers:
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1403C2F70(__int64 a1)
{
  __int64 v2; // rcx
  int *v3; // rdi
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  unsigned __int16 v8; // r9
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // r10
  unsigned int v13; // ecx
  __int16 v14; // cx
  __int64 v15; // rcx
  int *v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  char v20; // al
  _QWORD *Pool2; // rbx
  unsigned __int16 v22; // di
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // r15
  unsigned __int16 i; // bp
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned __int16 v34; // cx
  __int64 v35; // r9
  unsigned __int16 v36; // r10
  unsigned __int16 v37; // dx
  unsigned int v38; // r11d
  unsigned int *v39; // rax
  unsigned int v40; // r8d
  __int64 *v41; // rdi
  __int64 v42; // rdx
  _DWORD v43[32]; // [rsp+20h] [rbp-138h] BYREF
  _DWORD Src[32]; // [rsp+A0h] [rbp-B8h] BYREF

  memset(v43, 0, sizeof(v43));
  if ( (*(_BYTE *)(a1 + 5) & 4) == 0 )
  {
    if ( word_140D05018 )
    {
      v2 = (unsigned __int16)word_140D05018;
      v3 = v43;
      v4 = dword_140D0503C;
      while ( v2 )
      {
        *v3++ = v4;
        --v2;
      }
    }
    if ( word_140C2B0F0 )
    {
      v5 = (unsigned __int16)word_140C2B0F0;
      v6 = (unsigned __int16 *)(qword_140C2B0F8 + 6);
      do
      {
        if ( (*((_BYTE *)v6 - 1) & 1) != 0 )
          v43[*v6] -= *((unsigned __int8 *)v6 - 2);
        v6 += 12;
        --v5;
      }
      while ( v5 );
    }
    v7 = (unsigned __int16)word_140C2B0F0;
    v8 = 0;
    if ( word_140C2B0F0 )
    {
      while ( 1 )
      {
        v9 = qword_140C2B0F8;
        if ( (*(_BYTE *)(qword_140C2B0F8 + 24LL * v8 + 5) & 7) == 3 && !*(_QWORD *)(qword_140C2B0F8 + 24LL * v8 + 16) )
        {
          v10 = *(unsigned __int8 *)(qword_140C2B0F8 + 24LL * v8 + 4);
          v11 = *(unsigned __int8 *)(a1 + 4);
          if ( (unsigned __int8)v10 <= (unsigned __int8)v11 )
          {
            v12 = *(_WORD *)(qword_140C2B0F8 + 24LL * v8 + 6);
            v13 = v11 - v10;
          }
          else
          {
            v12 = *(_WORD *)(a1 + 6);
            v13 = v10 - v11;
          }
          if ( v43[v12] >= v13 )
            break;
        }
        if ( ++v8 >= (unsigned __int16)word_140C2B0F0 )
          goto LABEL_21;
      }
      v14 = *(_WORD *)(qword_140C2B0F8 + 24LL * v8 + 6);
      *(_WORD *)(qword_140C2B0F8 + 24LL * v8 + 6) = *(_WORD *)(a1 + 6);
      *(_BYTE *)(a1 + 5) |= 2u;
      *(_WORD *)(a1 + 6) = v14;
      *(_BYTE *)(v9 + 24LL * v8 + 5) &= ~2u;
    }
    else
    {
LABEL_21:
      if ( word_140D05018 )
      {
        v15 = (unsigned __int16)word_140D05018;
        v16 = Src;
        v17 = dword_140D0503C;
        while ( v15 )
        {
          *v16++ = v17;
          --v15;
        }
      }
      if ( (_WORD)v7 )
      {
        v18 = v7;
        v19 = (_QWORD *)(qword_140C2B0F8 + 16);
        do
        {
          v20 = *((_BYTE *)v19 - 11);
          if ( (v20 & 1) != 0 && ((v20 & 4) != 0 || *v19) )
            Src[*((unsigned __int16 *)v19 - 5)] -= *((unsigned __int8 *)v19 - 12);
          v19 += 3;
          --v18;
        }
        while ( v18 );
      }
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL * (unsigned __int16)word_140C2B0F0, 1128743243LL);
      if ( Pool2 )
      {
        v22 = 0;
        if ( word_140C2B0F0 )
        {
          v23 = (unsigned __int16)word_140C2B0F0;
          v24 = (_QWORD *)(qword_140C2B0F8 + 16);
          do
          {
            if ( (*((_BYTE *)v24 - 11) & 5) == 1 && !*v24 )
            {
              v25 = v22++;
              Pool2[v25] = v24 - 2;
            }
            v24 += 3;
            --v23;
          }
          while ( v23 );
        }
        v26 = v22;
        qsort(Pool2, v22, 8uLL, sub_140AF3390);
        if ( v22 )
        {
          v27 = Pool2;
          v28 = v22;
          do
          {
            v29 = *v27++;
            *(_WORD *)(v29 + 8) = *(_WORD *)(v29 + 6);
            --v28;
          }
          while ( v28 );
        }
        v30 = 0;
        for ( i = 0; i < (unsigned __int16)word_140D05014; ++i )
        {
          if ( word_140D05018 )
            memmove(v43, Src, 4LL * (unsigned __int16)word_140D05018);
          v32 = *(unsigned __int8 *)(a1 + 4);
          v33 = v43[i];
          if ( v33 >= v32 )
          {
            *(_WORD *)(a1 + 6) = i;
            v43[i] = v33 - v32;
            v34 = 0;
            if ( v22 )
            {
              while ( 1 )
              {
                v35 = Pool2[v34];
                if ( v35 != a1 )
                {
                  v36 = word_140D05018;
                  v37 = 0;
                  if ( word_140D05018 )
                  {
                    v38 = *(unsigned __int8 *)(v35 + 4);
                    v39 = v43;
                    do
                    {
                      v40 = *v39;
                      if ( *v39 >= v38 )
                      {
                        *(_WORD *)(v35 + 6) = v37;
                        *v39 = v40 - v38;
                      }
                      ++v37;
                      ++v39;
                    }
                    while ( v37 < v36 );
                  }
                  if ( v37 == v36 )
                    break;
                }
                if ( ++v34 >= v22 )
                  goto LABEL_55;
              }
            }
            else
            {
LABEL_55:
              if ( v34 == v22 )
              {
                v30 = 1;
                break;
              }
            }
          }
        }
        if ( v22 )
        {
          v41 = Pool2;
          do
          {
            v42 = *v41;
            if ( v30 )
              *(_BYTE *)(v42 + 5) = (*(_WORD *)(v42 + 6) < (unsigned __int16)word_140D05014 ? 2 : 0) | *(_BYTE *)(v42 + 5) & 0xFD;
            else
              *(_WORD *)(v42 + 6) = *(_WORD *)(v42 + 8);
            ++v41;
            *(_WORD *)(v42 + 8) = 0;
            --v26;
          }
          while ( v26 );
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
