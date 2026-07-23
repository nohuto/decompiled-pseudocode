/*
 * XREFs of sub_1406FA730 @ 0x1406FA730
 * Callers:
 *     MmPrefetchPages @ 0x1406F9970 (MmPrefetchPages.c)
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1409870AC @ 0x1409870AC (sub_1409870AC.c)
 * Callees:
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_1402792E0 @ 0x1402792E0 (sub_1402792E0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 *     sub_1406F4E78 @ 0x1406F4E78 (sub_1406F4E78.c)
 *     sub_1406FACF8 @ 0x1406FACF8 (sub_1406FACF8.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406FA730(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int *v4; // r12
  __int64 v5; // rdi
  __int64 v7; // r14
  __int64 *v8; // rsi
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 *v11; // r14
  __int64 *v12; // r15
  __int64 v13; // r13
  int v14; // eax
  int v15; // ecx
  PVOID *v16; // rbx
  __int64 v18; // r13
  __int64 *v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // r15
  unsigned int *v23; // rax
  PVOID *v24; // r15
  _SLIST_ENTRY *v25; // rcx
  _SLIST_ENTRY *v26; // rax
  _SLIST_ENTRY *Next; // rdx
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 *v29; // [rsp+28h] [rbp-40h]
  unsigned int v32; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  v28 = a1;
  v7 = a1;
  v29 = (__int64 *)sub_1402828F0(64, 8LL * a1, 0x6C526D4Du);
  v8 = v29;
  if ( !v29 )
    return 3221225626LL;
  if ( (dword_140D0689C & 0x200000) != 0 )
  {
    v23 = (unsigned int *)sub_1402828F0(66, 0x1008uLL, 0x6C68694Du);
    v4 = v23;
    if ( !v23 )
    {
      v32 = -1073741670;
      goto LABEL_23;
    }
    *(_QWORD *)v23 = 1LL;
    v23[2] = 511;
    sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
    v9 = 10;
  }
  else
  {
    v9 = 2;
  }
  v10 = 0;
  --*((_WORD *)CurrentThread + 242);
  v32 = 0;
  if ( (_DWORD)v5 )
  {
    v11 = v29;
    v12 = v29;
    v13 = a2 - (_QWORD)v29;
    do
    {
      v14 = sub_1407BD420(*(__int64 *)((char *)v11 + v13), v12, a3, v4);
      if ( v14 < 0 )
      {
        v32 = v14;
      }
      else
      {
        v15 = v9 | 1;
        if ( !*v11 )
          v15 = v9;
        v9 = v15;
      }
      ++v12;
      ++v11;
      --v5;
    }
    while ( v5 );
    v5 = a1;
    v8 = v29;
    v10 = v32;
    v7 = v28;
  }
  if ( v4 )
  {
    if ( v4[1] )
      sub_1405B7E7C(v4);
    sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
    LOBYTE(v9) = v9 & 0xF7;
    ExFreePoolWithTag(v4, 0);
    v10 = v32;
  }
  if ( (v9 & 1) == 0 )
  {
    if ( !v10 )
      v32 = 0;
    goto LABEL_17;
  }
  ++*((_BYTE *)CurrentThread + 1390);
  LOBYTE(v9) = v9 & 0xFA | 4;
  v32 = 0;
  v18 = 0LL;
  if ( !(_DWORD)v5 )
    goto LABEL_36;
  v19 = v8;
  while ( !*v19 )
  {
LABEL_35:
    v18 = (unsigned int)(v18 + 1);
    ++v19;
    if ( (unsigned int)v18 >= (unsigned int)v5 )
      goto LABEL_36;
  }
  *(_DWORD *)(*v19 + 104) = 0;
  v20 = sub_1402715A0(*v19, a3);
  if ( v20 >= 0 )
  {
    v21 = *v19;
    if ( *(_QWORD *)(*v19 + 120) == *v19 + 120 )
    {
      sub_1406FACF8(v21);
      ExFreePoolWithTag((PVOID)*v19, 0);
      *v19 = 0LL;
    }
    else
    {
      LOBYTE(v9) = v9 | 1;
      sub_1406F4E78(v21, 0, 0xFFFFFFFF, 0LL);
    }
    goto LABEL_35;
  }
  v32 = v20;
  do
  {
    v24 = (PVOID *)&v8[v18];
    if ( *v24 )
    {
      while ( 1 )
      {
        v25 = (_SLIST_ENTRY *)*((_QWORD *)*v24 + 15);
        v26 = (_SLIST_ENTRY *)((char *)*v24 + 120);
        if ( v25 == v26 )
          break;
        if ( *(&v25->Next + 1) != v26 || (Next = v25->Next, *(&v25->Next->Next + 1) != v25) )
          __fastfail(3u);
        v26->Next = Next;
        *((_QWORD *)&Next->Next + 1) = v26;
        sub_14027456C(v25);
      }
      sub_1406FACF8(*v24);
      ExFreePoolWithTag(*v24, 0);
      *v24 = 0LL;
    }
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < (unsigned int)v5 );
LABEL_36:
  if ( (v9 & 1) != 0 )
  {
    v32 = 0;
    if ( (_DWORD)v5 )
    {
      v22 = v8;
      do
      {
        if ( *v22 )
        {
          sub_1402792E0((_QWORD *)(*v22 + 120), 0LL, 0LL);
          sub_1406FACF8(*v22);
        }
        ++v22;
        --v7;
      }
      while ( v7 );
    }
  }
LABEL_17:
  if ( (v9 & 8) != 0 )
    sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
  if ( (v9 & 2) != 0 )
    sub_1402F9540((__int64)CurrentThread);
  if ( (v9 & 4) != 0 )
    --*((_BYTE *)CurrentThread + 1390);
LABEL_23:
  if ( (_DWORD)v5 )
  {
    v16 = (PVOID *)v8;
    do
    {
      if ( *v16 )
        ExFreePoolWithTag(*v16, 0);
      ++v16;
      --v5;
    }
    while ( v5 );
  }
  ExFreePoolWithTag(v8, 0);
  return v32;
}
