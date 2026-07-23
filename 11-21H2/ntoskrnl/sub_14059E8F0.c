/*
 * XREFs of sub_14059E8F0 @ 0x14059E8F0
 * Callers:
 *     sub_14059DEC8 @ 0x14059DEC8 (sub_14059DEC8.c)
 *     sub_1409701AC @ 0x1409701AC (sub_1409701AC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E8000 @ 0x1402E8000 (sub_1402E8000.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405B2504 @ 0x1405B2504 (sub_1405B2504.c)
 */

__int64 __fastcall sub_14059E8F0(char *BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // r9
  int v14; // r10d
  int v15; // edx
  int v16; // r8d
  char *v17; // rbp
  __int64 v18; // r11
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  int v23; // r14d
  bool v24; // zf
  __int64 v25; // r14
  unsigned __int64 v26; // rsi
  const void *v27; // r14
  unsigned __int64 v28; // rax
  int v29; // ebp
  unsigned __int64 v30; // rdi
  bool v31; // zf
  __int64 v32; // rdi
  int v33; // ebx
  bool v34; // zf
  _QWORD *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int16 v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+38h] [rbp-60h]
  __int64 v41; // [rsp+40h] [rbp-58h]
  __int128 v42; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]
  unsigned int v45; // [rsp+B8h] [rbp+20h]

  BugCheckParameter4 = a4;
  v42 = 0LL;
  v43 = 0LL;
  v39 = a3;
  v45 = a4 + (a3 & 0xFFF);
  v8 = (unsigned int)(v45 > 0x1000) + 3;
  if ( a4 == 4096 )
    v8 = (unsigned int)(v45 > 0x1000) + 2;
  v41 = v8;
  sub_1402E8000(1, (unsigned int)v8, (__int64)&v42);
  v9 = v43;
  v40 = (__int64)(v43 << 25) >> 16;
  v10 = sub_1402CBD10(v43, a2, -1610612732);
  if ( sub_140317A80(v9) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      if ( !HIBYTE(word_140C51864) && (v10 & 1) != 0 )
        v10 |= v11;
      v12 = v43;
      *(_QWORD *)v43 = v10;
      sub_1402294F0(v12, v10);
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v10 & 1) != 0 )
      v10 |= v11;
  }
  *(_QWORD *)v43 = v10;
LABEL_13:
  v13 = a3 >> 12;
  v14 = 0;
  v15 = *(_DWORD *)BugCheckParameter3 - 1;
  if ( v15 < 0 )
    goto LABEL_20;
  while ( 1 )
  {
    v16 = (v14 + v15) >> 1;
    v17 = &BugCheckParameter3[48 * v16];
    v18 = *((unsigned int *)v17 + 8);
    if ( (unsigned int)v13 < (unsigned int)v18 )
    {
      if ( !v16 )
        KeBugCheckEx(0x1Au, 0x13000uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v15 = v16 - 1;
      goto LABEL_19;
    }
    if ( (unsigned int)v13 < (int)v18 + *((_DWORD *)v17 + 12) )
      break;
    v14 = v16 + 1;
LABEL_19:
    if ( v15 < v14 )
      goto LABEL_20;
  }
  if ( v15 < v14 )
LABEL_20:
    KeBugCheckEx(0x1Au, 0x13001uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  v19 = v43 + 8;
  v20 = *((_QWORD *)v17 + 5) + (unsigned int)v13 - v18;
  v21 = sub_1402CBD10(v43 + 8, v20, 536870913);
  v22 = v21;
  v23 = 0;
  if ( sub_140317A80(v19) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v23 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v24 = (v21 & 1) == 0;
LABEL_29:
        if ( !v24 )
          v22 = v21 | 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v24 = (v21 & 1) == 0;
      goto LABEL_29;
    }
  }
  *(_QWORD *)v19 = v22;
  if ( v23 )
    sub_1402294F0(v19, v22);
  v25 = v19 << 25;
  v26 = v19 + 8;
  v27 = (const void *)((v39 & 0xFFF) + (v25 >> 16));
  if ( v45 > 0x1000 )
  {
    if ( v20 >= *((_QWORD *)v17 + 5) + *((_QWORD *)v17 + 6) - 1LL )
    {
      if ( (v17 + 56 - BugCheckParameter3 - 8) / 48 == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v28 = *((_QWORD *)v17 + 11) << 12;
    }
    else
    {
      v28 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v29 = 0;
    v21 ^= (v21 ^ v28) & 0xFFFFFFFFFF000LL;
    v30 = v21;
    if ( sub_140317A80(v26) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v29 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v31 = (v21 & 1) == 0;
LABEL_45:
          if ( !v31 )
            v30 = v21 | 0x8000000000000000uLL;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v31 = (v21 & 1) == 0;
        goto LABEL_45;
      }
    }
    *(_QWORD *)v26 = v30;
    if ( v29 )
      sub_1402294F0(v26, v30);
    v26 += 8LL;
  }
  memmove((void *)v40, v27, BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter4 != 4096 )
  {
    v32 = v21 ^ (v21 ^ (qword_140C53290 << 12)) & 0xFFFFFFFFFF000LL;
    v33 = 0;
    if ( sub_140317A80(v26) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v33 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v34 = (v32 & 1) == 0;
LABEL_57:
          if ( !v34 )
            v32 |= 0x8000000000000000uLL;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v34 = (v32 & 1) == 0;
        goto LABEL_57;
      }
    }
    *(_QWORD *)v26 = v32;
    if ( v33 )
      sub_1402294F0(v26, v32);
    memmove(
      (void *)(BugCheckParameter4 + v40),
      (const void *)((__int64)(v26 << 25) >> 16),
      (unsigned int)(4096 - BugCheckParameter4));
  }
  v35 = (_QWORD *)v43;
  v36 = v41;
  do
  {
    if ( sub_140317A80((unsigned __int64)v35) && (unsigned int)sub_140229550() )
    {
      *v35 = 0LL;
      sub_1402294F0((__int64)v35, 0LL);
    }
    else
    {
      *v35 = 0LL;
    }
    ++v35;
    --v36;
  }
  while ( v36 );
  return sub_1405B2504(&v42, v37);
}
