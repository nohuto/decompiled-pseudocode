/*
 * XREFs of sub_14034CEB0 @ 0x14034CEB0
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 *     sub_1403717D4 @ 0x1403717D4 (sub_1403717D4.c)
 * Callees:
 *     sub_14034D4E0 @ 0x14034D4E0 (sub_14034D4E0.c)
 *     sub_14034D5C0 @ 0x14034D5C0 (sub_14034D5C0.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14034ED40 @ 0x14034ED40 (sub_14034ED40.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 *     sub_14034F9E0 @ 0x14034F9E0 (sub_14034F9E0.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 *     sub_14036E5F0 @ 0x14036E5F0 (sub_14036E5F0.c)
 *     sub_14036E8E0 @ 0x14036E8E0 (sub_14036E8E0.c)
 *     sub_14036E98C @ 0x14036E98C (sub_14036E98C.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_14034CEB0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v6; // di
  int v9; // edx
  unsigned __int64 v10; // rbx
  unsigned int v11; // ecx
  PSLIST_ENTRY v12; // rax
  _SLIST_HEADER *v13; // rcx
  _QWORD *v15; // r13
  int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // edx
  int v22; // ecx
  unsigned __int64 v23; // rbx
  unsigned int i; // r15d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // esi
  int v28; // r12d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  __int16 v32; // ax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  BOOLEAN v35; // al
  unsigned __int64 v36; // rax
  int v37; // ecx
  int v38; // ecx
  unsigned __int64 v39; // r8
  int v40; // edi
  int v41; // r9d
  int v42; // ecx
  unsigned __int64 v43; // rcx
  int v44; // r8d
  int v45; // ecx
  unsigned __int64 v46; // [rsp+30h] [rbp-58h] BYREF
  __int128 v47; // [rsp+38h] [rbp-50h] BYREF
  __int64 v48; // [rsp+48h] [rbp-40h]
  int v49; // [rsp+90h] [rbp+8h]
  unsigned int v50; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  v6 = a4;
  v9 = *(_DWORD *)(a1 + 176);
  v10 = a3 - 16;
  if ( (v9 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  if ( !a2 )
  {
    v37 = HIDWORD(qword_140C5A5C0) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v37 & 0xFF0000) != 0 )
    {
      v38 = (unsigned __int8)(qword_140C5A5C0 ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v37 )
      {
        v39 = v10 - 16LL * (unsigned __int16)((v10 ^ qword_140C5A5C0 ^ *(_QWORD *)v10) >> 32);
        v40 = HIDWORD(qword_140C5A5C0) ^ HIDWORD(v39) ^ HIDWORD(*(_QWORD *)v39);
        if ( (v40 & 0xFF0000) != 0 )
        {
          v38 = (unsigned __int8)(qword_140C5A5C0 ^ v39 ^ *(_BYTE *)(v39 + 8));
        }
        else if ( (_WORD)v40 )
        {
          v39 -= 16LL * (unsigned __int16)((qword_140C5A5C0 ^ v39 ^ *(_QWORD *)v39) >> 32);
          v38 = (unsigned __int8)(qword_140C5A5C0 ^ v39 ^ *(_BYTE *)(v39 + 8));
        }
        else
        {
          v38 = 0;
        }
        v6 = v52;
        goto LABEL_60;
      }
      v38 = 0;
    }
    v39 = v10;
LABEL_60:
    a2 = (v39 - (unsigned int)(v38 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v41 = 0;
    v42 = 18;
LABEL_84:
    sub_1405F1BBC(v42, a1 ^ *(_DWORD *)(a1 + 128), a2, v41, 0LL, 0LL);
    return 0LL;
  }
  if ( ((v10 ^ qword_140C5A5C0 ^ *(_QWORD *)v10) & 0xFF000000000000LL) == 0 )
  {
    v41 = v10;
    LODWORD(a2) = a3;
    v42 = 8;
    goto LABEL_84;
  }
  v11 = 16 * (WORD1(qword_140C5A5C0) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
  *a5 = v11;
  v12 = 0LL;
  if ( (v9 & 4) != 0 && v11 < 0x1000 )
  {
    v13 = (_SLIST_HEADER *)(a1 + 64);
    if ( *(_WORD *)(a1 + 64) < 0x20u )
    {
      ExpInterlockedPushEntrySList(v13, (PSLIST_ENTRY)(v10 + 16));
      return 1LL;
    }
    v12 = ExpInterlockedFlushSList(v13);
  }
  v15 = (_QWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = v12;
  v16 = v6 & 1;
  v48 = 0LL;
  v49 = v16;
  v47 = 0LL;
  if ( (v6 & 1) == 0 )
    sub_14036E550(a1, *(unsigned int *)(a1 + 8), &v47);
  if ( v10 != -16LL )
  {
    do
    {
      v17 = (__int64)(v15 - 2);
      v18 = (unsigned __int64)(v15 - 2) ^ *(v15 - 2);
      v15 = (_QWORD *)*v15;
      v19 = (qword_140C5A5C0 ^ (unsigned __int64)v18) >> 32;
      v20 = v17;
      v21 = v19 & 0xFF0000;
      if ( (v19 & 0xFF0000) != 0 )
      {
        v22 = (unsigned __int8)(qword_140C5A5C0 ^ v17 ^ *(_BYTE *)(v17 + 8));
        goto LABEL_17;
      }
      if ( !(_WORD)v19 )
        goto LABEL_79;
      v20 = v17 - 16LL * (unsigned __int16)v19;
      v43 = (qword_140C5A5C0 ^ (unsigned __int64)v20 ^ *(_QWORD *)v20) >> 32;
      if ( (v43 & 0xFF0000) != 0 )
      {
        v22 = (unsigned __int8)(qword_140C5A5C0 ^ v20 ^ *(_BYTE *)(v20 + 8));
        goto LABEL_17;
      }
      if ( (_WORD)v43 )
      {
        v20 -= 16LL * (unsigned __int16)v43;
        v22 = (unsigned __int8)(qword_140C5A5C0 ^ v20 ^ *(_BYTE *)(v20 + 8));
      }
      else
      {
LABEL_79:
        v22 = 0;
      }
LABEL_17:
      v23 = (v20 - (unsigned int)(v22 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      if ( (((unsigned __int16)(*(_WORD *)(v23 + 32) ^ *(_WORD *)(v23 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        v44 = v23;
        v45 = 18;
      }
      else
      {
        if ( v21 )
        {
          v50 = 0;
          for ( i = 0; ; i = v27 )
          {
            v25 = sub_14034D5C0(a1, v23, v17, &v50);
            v27 = v50;
            v17 = v25;
            if ( v50 == *(unsigned __int16 *)(v23 + 32) )
            {
              sub_14036E8E0(a1, v23);
              v16 = v49;
              if ( v49 )
              {
                sub_14036E98C(a1, v23, v52);
              }
              else
              {
                sub_14034F7F0(*(unsigned int *)(a1 + 8), &v47);
                sub_14036E98C(a1, v23, v52);
                sub_14036E550(a1, *(unsigned int *)(a1 + 8), &v47);
              }
              goto LABEL_48;
            }
            if ( v50 <= i )
              break;
            LODWORD(v51) = 0;
            v46 = 0LL;
            sub_14034D4E0(v25, v23, &v51, &v46);
            if ( !(_DWORD)v51 )
              break;
            v28 = v46;
            if ( !v46 )
              break;
            v29 = v46 - ((v46 >> 1) & 0x5555555555555555LL);
            v26 = v29 & 0x3333333333333333LL;
            v30 = (0x101010101010101LL
                 * (((v29 & 0x3333333333333333LL)
                   + ((v29 >> 2) & 0x3333333333333333LL)
                   + (((v29 & 0x3333333333333333LL) + ((v29 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v23 + 34) < 0 )
              break;
            if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
            {
              v26 = *(_QWORD *)(a1 + 48) >> 7;
              if ( v26 <= 8 )
                v26 = 8LL;
              if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v30 <= v26 )
                break;
            }
            v51 = 0x1000000000000LL;
            *(_BYTE *)(v17 + 6) = BYTE6(qword_140C5A5C0) ^ BYTE6(v17) ^ 1;
            *(_DWORD *)(v17 + 8) = (unsigned __int8)(qword_140C5A5C0 ^ v17 ^ ((unsigned int)(v17 - v23) >> 12)) | 0x200;
            if ( v49 )
            {
              sub_14036E5F0(a1, v23, v28, v30, 0);
            }
            else
            {
              sub_14034F7F0(*(unsigned int *)(a1 + 8), &v47);
              sub_14036E5F0(a1, v23, v28, v30, 0);
              sub_14036E550(a1, *(unsigned int *)(a1 + 8), &v47);
            }
            *(_DWORD *)(v17 + 8) &= ~0x200u;
          }
          if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v17 + 32) & 0xFFF) != 0 )
          {
            v31 = sub_14034ED40(v26, v23, v17);
            if ( v31 )
              sub_14034F9E0(a1, v23, v31);
          }
          v50 = 0;
          v51 = 0LL;
          v32 = sub_14034D4E0(v17, v23, &v50, &v51);
          v33 = ((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
          *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL * ((v33 + (v33 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          *(_WORD *)v17 = qword_140C5A5C0 ^ v17 ^ (v50
                                                 + v32
                                                 - ((0x101010101010101LL * ((v33 + (v33 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
          v34 = *(_QWORD *)(a1 + 16);
          if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
          {
LABEL_34:
            v35 = 0;
            if ( !v34 )
              goto LABEL_47;
            while ( 1 )
            {
              if ( ((unsigned int)qword_140C5A5C0 ^ (unsigned int)v17 ^ *(_DWORD *)v17) >= (*(_DWORD *)(v34 - 8) ^ (unsigned int)qword_140C5A5C0 ^ ((_DWORD)v34 - 8)) )
              {
                v36 = *(_QWORD *)(v34 + 8);
                if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
                {
                  if ( !v36 )
                    goto LABEL_45;
                  v36 ^= v34;
                }
                if ( !v36 )
                {
LABEL_45:
                  v35 = 1;
                  goto LABEL_47;
                }
              }
              else
              {
                v36 = *(_QWORD *)v34;
                if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
                {
                  if ( !v36 )
                    goto LABEL_46;
                  v36 ^= v34;
                }
                if ( !v36 )
                  goto LABEL_46;
              }
              v34 = v36;
            }
          }
          if ( v34 )
          {
            v34 ^= a1 + 16;
            goto LABEL_34;
          }
LABEL_46:
          v35 = 0;
LABEL_47:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v34, v35, (PRTL_BALANCED_NODE)(v17 + 8));
          v16 = v49;
          continue;
        }
        v44 = v17;
        v45 = 8;
      }
      sub_1405F1BBC(v45, a1 ^ *(_DWORD *)(a1 + 128), v44, 0, 0LL, 0LL);
LABEL_48:
      ;
    }
    while ( v15 );
  }
  if ( !v16 )
    sub_14034F7F0(*(unsigned int *)(a1 + 8), &v47);
  return 1LL;
}
