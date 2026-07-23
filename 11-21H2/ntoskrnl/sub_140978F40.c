/*
 * XREFs of sub_140978F40 @ 0x140978F40
 * Callers:
 *     sub_140979918 @ 0x140979918 (sub_140979918.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_1406F8804 @ 0x1406F8804 (sub_1406F8804.c)
 *     sub_1406FC9C4 @ 0x1406FC9C4 (sub_1406FC9C4.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140978F40(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r13
  BOOL v9; // ebx
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rdi
  ULONG_PTR v17; // rax
  int v18; // ebx
  PVOID v19; // rax
  int v20; // eax
  void *v21; // rcx
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v29 = 0LL;
  v28[0] = 0LL;
  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)(a1 - 16) <= 1;
  v10 = *((_QWORD *)CurrentThread + 23);
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 16) > 1 )
  {
    v12 = a2 - 1;
    v13 = a2;
    if ( (v12 & a2) != 0 )
      v13 = a2 & ~v12;
    v11 = 0x10000LL;
    if ( v13 >= 0x10000 )
    {
      v11 = v13;
      if ( v13 >= 0x7FFFFFFF0000LL )
        return 3221225485LL;
    }
  }
  else
  {
    v11 = 0x200000LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  v14 = sub_1402828F0(64, 0x88uLL, 0x45646156u);
  v15 = (__int64)v14;
  if ( !v14 )
    return 3221225626LL;
  if ( !v9 )
  {
    v14[16] |= 1u;
    v17 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
    *(_QWORD *)(v15 + 80) = v17;
    if ( !v17
      || a1 == 2
      && (*(_DWORD *)(v15 + 72) |= 1u,
          v19 = sub_1402828F0(64, 0x1000uLL, 0x6E45694Du),
          (*(_QWORD *)(v15 + 88) = v19) == 0LL) )
    {
      v18 = -1073741670;
LABEL_25:
      if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      {
        v21 = *(void **)(v15 + 88);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        v22 = *(_QWORD **)(v15 + 80);
        if ( v22 )
          sub_1402BB6D0((__int64)&qword_140C534C0, v22, 1u);
      }
      ExFreePoolWithTag((PVOID)v15, 0);
      return (unsigned int)v18;
    }
    *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 48) & 0xFFFFFF8F | 0x30;
    *(_QWORD *)(v15 + 120) = 0LL;
  }
  v20 = *(_DWORD *)(v15 + 48);
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 16) = -2LL;
  *(_DWORD *)(v15 + 48) = v20 & 0xFBDFF07F | 0x4200200;
  sub_14030B820((__int64)CurrentThread, v10);
  if ( (*(_DWORD *)(v10 + 1124) & 0x20) != 0 )
  {
    v18 = -1073741558;
LABEL_24:
    sub_140281A58((__int64)CurrentThread, v10);
    goto LABEL_25;
  }
  v23 = sub_1406FC9C4(v10, v30);
  if ( v5 )
  {
    v24 = (v5 + a2 - 1) | 0xFFF;
    if ( !sub_1406F8804(v10, v5, v24 - v5 + 1, 0LL, v23) )
    {
      v18 = -1073741800;
      goto LABEL_24;
    }
  }
  else
  {
    v18 = sub_1407B83C0(0, 0LL, v23, a2, v11, 0LL, 6, 0, v28, &v29);
    if ( v18 < 0 )
      goto LABEL_24;
    v5 = v29;
    v24 = v29 + a2 - 1;
  }
  v25 = v5 >> 12;
  v26 = v24 >> 12;
  sub_14030B420(v15, v25);
  *(_DWORD *)(v15 + 28) = v26;
  *(_BYTE *)(v15 + 33) = BYTE4(v26);
  v18 = sub_1407B88C0(v27, v10);
  if ( v18 < 0 )
    goto LABEL_24;
  sub_14030B7F0((__int64)CurrentThread, v15);
  sub_14030E390(v15, v10, 0);
  if ( v28[0] )
    sub_1406FCFF0(v25, v26, (_QWORD *)v28[0]);
  sub_14030EB64(v15);
  sub_140281A58((__int64)CurrentThread, v10);
  *a5 = v15;
  return 0LL;
}
