/*
 * XREFs of sub_140332A80 @ 0x140332A80
 * Callers:
 *     sub_140332670 @ 0x140332670 (sub_140332670.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402292C0 @ 0x1402292C0 (sub_1402292C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022BAE0 @ 0x14022BAE0 (sub_14022BAE0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140332A80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v10; // ebp
  __int64 v11; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // ebx
  volatile __int64 v17; // rbx
  volatile __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // ebx
  unsigned __int64 v21; // r12
  __int64 v22; // rbp
  unsigned int v23; // r8d
  __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  int v27; // ebx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  size_t v33; // rcx
  char v34; // cl
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // [rsp+80h] [rbp+8h]
  int v44; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2;
  v7 = 0LL;
  v8 = a3 << 25;
  v42 = 0;
  v10 = 0;
  v11 = 0xFFFFF68000000000uLL;
  v14 = v8 >> 16;
  v15 = 0x7FFFFFFFF8LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v16 = 0;
    if ( !a4 )
      goto LABEL_5;
    goto LABEL_3;
  }
  if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v6 + 40) >= 0
    || *(_WORD *)(v6 + 32) > 1u )
  {
    return 0LL;
  }
  v16 = 1;
  if ( a4 )
  {
    if ( v14 >= 0xFFFFF68000000000uLL )
    {
LABEL_46:
      if ( v14 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v10 = 1;
        sub_14031DE00(a1, a3, 0LL, 0x7FFFFFFFF8LL);
        v7 = 0LL;
      }
LABEL_4:
      if ( !v16 )
        goto LABEL_5;
      goto LABEL_48;
    }
LABEL_3:
    if ( v14 < 0xFFFFF68000000000uLL )
      goto LABEL_4;
    goto LABEL_46;
  }
LABEL_48:
  v44 = 0;
  v42 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v44, v7, v11, v15);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( ((*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v6 + 40) < 0)
    && ((*(_BYTE *)(a1 + 184) & 7) == 0 || *(_WORD *)(v6 + 32) <= 1u) )
  {
LABEL_5:
    if ( !a4 )
    {
      v20 = a6;
      goto LABEL_20;
    }
    if ( v10 )
    {
      v35 = sub_140317A10(a3);
      sub_1402292C0(a1, (volatile __int64 *)a3, v35 & 0xCFFFFFFFFFFFFFDFuLL, 0);
    }
    else
    {
      v17 = *(_QWORD *)a3;
      v18 = *(_QWORD *)a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v37 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v38 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v38 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
      }
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v39 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v40 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v40 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      v19 = (v18 & 0xF0FFFFFFFFFFFFDFuLL | v17 & 0xF00000000000000LL) ^ ((v18 & 0xF0FFFFFFFFFFFFDFuLL | v17 & 0xF00000000000000LL) ^ v17) & 0x7000000000000000LL;
      if ( sub_140317A80(a3) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          if ( !HIBYTE(word_140C51864) && (v19 & 1) != 0 )
            v19 |= 0x8000000000000000uLL;
          *(_QWORD *)a3 = v19;
          sub_1402294F0(a3, v19);
          goto LABEL_11;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
      }
      *(_QWORD *)a3 = v19;
    }
LABEL_11:
    v20 = 1;
    v21 = v14;
    v22 = 1LL;
    if ( *(_DWORD *)a4 != 1 )
    {
      v34 = *(_BYTE *)(a4 + 4);
      if ( (v34 & 8) == 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(a4 + 4) = v34 | 8;
    }
    v23 = *(_DWORD *)(a4 + 12);
    if ( v23 && (*(_BYTE *)(a4 + 4) & 4) == 0 )
    {
      v24 = a4 + 8LL * (v23 - 1);
      v25 = *(_QWORD *)(v24 + 24);
      if ( (v25 & 0xC00) == 0 )
      {
        v26 = *(_QWORD *)(v24 + 24) & 0x3FFLL;
        if ( (v25 & 0xFFFFFFFFFFFFF000uLL) + ((v26 + 1) << 12) == v14 && v26 + 1 >= v26 && v26 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v24 + 24) = ((unsigned __int16)v25 ^ (unsigned __int16)(v25 + 1)) & 0x3FF ^ v25;
LABEL_19:
          v6 = a2;
          goto LABEL_20;
        }
      }
      if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
      {
        v29 = a4 + 8LL * (v23 - 1);
        v30 = *(_QWORD *)(v29 + 24);
        if ( (v30 & 0xC00) == 0 && (v30 & 0xFFFFFFFFFFFFF000uLL) == v14 + 4096 )
        {
          v41 = *(_QWORD *)(v29 + 24) & 0x3FFLL;
          if ( v41 + 1 >= v41 && v41 + 1 <= 0x3FF )
          {
            ++*(_QWORD *)(a4 + 16);
            *(_QWORD *)(v29 + 24) = ((unsigned __int16)(v30 - 4096) ^ (unsigned __int16)(v30 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v30 - 4096);
            goto LABEL_19;
          }
        }
      }
    }
    if ( v23 >= *(_DWORD *)(a4 + 8) )
    {
      *(_BYTE *)(a4 + 5) = 1;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v31 = (unsigned __int64)(v22 - 1) > 0x3FF ? 1024LL : v22;
      v32 = v21 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v31 - 1) & 0x3FF;
      v22 -= v31;
      v21 += v31 << 12;
      *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v32;
      v33 = *(unsigned int *)(a4 + 12);
      *(_QWORD *)(a4 + 16) += v31;
      if ( (_DWORD)v33 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
      {
        qsort((void *)(a4 + 24), v33, 8uLL, (int (__cdecl *)(const void *, const void *))sub_14022E340);
        sub_14022BAE0(a4);
        v36 = *(unsigned int *)(a4 + 12);
        if ( (_DWORD)v36 == *(_DWORD *)(a4 + 8) )
          break;
      }
      if ( !v22 )
        goto LABEL_19;
    }
    v6 = a2;
    if ( v22 )
    {
      *(_BYTE *)(a4 + 5) = 1;
      *(_QWORD *)(a4 + 16) = v36;
    }
LABEL_20:
    if ( v42 )
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v20 )
      return 1LL;
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
      v27 = HIBYTE(*(_QWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
    else
      v27 = (*(_DWORD *)(48
                       * (((unsigned __int64)sub_140317A10(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL) >> 1) & 7;
    if ( a5 )
    {
      if ( v27 == 7 )
        return 1LL;
      sub_140333040(a1, a3);
    }
    if ( !v27 )
      sub_1403171A0(a1, v14, 1u, 1u);
    return 1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v10 )
    sub_14020D8D0(a1, a3);
  return 0LL;
}
