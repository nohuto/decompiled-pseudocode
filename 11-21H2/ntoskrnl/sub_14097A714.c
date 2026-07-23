/*
 * XREFs of sub_14097A714 @ 0x14097A714
 * Callers:
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1405A8968 @ 0x1405A8968 (sub_1405A8968.c)
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 *     sub_140932778 @ 0x140932778 (sub_140932778.c)
 *     sub_14097A9C4 @ 0x14097A9C4 (sub_14097A9C4.c)
 *     sub_14097AC04 @ 0x14097AC04 (sub_14097AC04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097A714(
        __int64 a1,
        ULONG_PTR a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        ULONG a6,
        struct _MDL *a7,
        _QWORD *a8)
{
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *v14; // rbx
  int v15; // edi
  __int64 v17; // r8
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r14
  __int64 v22; // r12
  _QWORD *v23; // rcx
  _WORD v24[2]; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-10h] BYREF
  __int64 v28; // [rsp+78h] [rbp-8h]
  char v29; // [rsp+B8h] [rbp+38h] BYREF

  v8 = *(_QWORD *)(a2 + 72);
  v24[0] = 0;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  v27 = 0LL;
  v29 = 0;
  v28 = v8;
  sub_140281C44((__int64)CurrentThread, a2);
  v14 = 0LL;
  v26 = 0LL;
  if ( a6 < 0x10 )
  {
    v15 = -1073741820;
LABEL_3:
    sub_14030B7F0((__int64)CurrentThread, a2);
    goto LABEL_4;
  }
  v14 = sub_1402828F0(256, 0x30uLL, 0x4D456D4Du);
  if ( !v14 )
  {
    v15 = -1073741670;
    goto LABEL_3;
  }
  LOBYTE(v17) = a3;
  v15 = sub_14097A9C4(a7->Next, a4, v17, &v26, &v27);
  if ( v15 < 0 )
    goto LABEL_3;
  v18 = v27;
  v19 = a5;
  v20 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v27 + 8LL) << 12) + a5 - 1;
  v27 = v20;
  sub_14030B7F0((__int64)CurrentThread, a2);
  if ( (unsigned int)sub_14030EB80(a2) || sub_1405A8968(v19, v20, a2, a1 + 1664) )
  {
    v15 = -1073741800;
  }
  else
  {
    v21 = v18 + 128;
    v22 = *(_QWORD *)(v18 + 136) << 9;
    do
    {
      v15 = sub_14032C1B0(
              a2,
              v19 + (((*(_QWORD *)(v21 + 8) << 9) - v22) & 0xFFFFFFFFFFFFF000uLL),
              (unsigned __int64)*(unsigned int *)(v21 + 44) << 12,
              4u,
              0,
              0LL,
              0,
              0,
              0LL,
              &v25,
              v24);
      if ( v15 < 0 )
        goto LABEL_23;
      v21 = *(_QWORD *)(v21 + 16);
    }
    while ( v21 );
    sub_1406B85C8(v18, 0, 0LL, 1, 0, 0xFFFFFFFF);
    v15 = sub_140932778(
            *(_QWORD *)(v28 + 24),
            v19,
            *(_QWORD *)(*(_QWORD *)(v18 + 96) + 56LL),
            v26,
            a7,
            a6,
            &v29,
            v14 + 9,
            v14 + 10);
    if ( v15 < 0 )
    {
LABEL_23:
      sub_1407BC9B0(a2, v19, v27);
      goto LABEL_4;
    }
    if ( v29 )
    {
      v14[8] = 2;
      *((_QWORD *)v14 + 2) = v19;
      v23 = *(_QWORD **)(a2 + 88);
      if ( *v23 != a2 + 80 )
        __fastfail(3u);
      *(_QWORD *)v14 = a2 + 80;
      *((_QWORD *)v14 + 1) = v23;
      *v23 = v14;
      *(_QWORD *)(a2 + 88) = v14;
      *a8 = v14;
      v14 = 0LL;
    }
  }
LABEL_4:
  sub_14032E700((char *)a2);
  if ( v26 )
    sub_14097AC04();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v15;
}
