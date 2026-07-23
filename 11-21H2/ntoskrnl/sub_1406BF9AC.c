/*
 * XREFs of sub_1406BF9AC @ 0x1406BF9AC
 * Callers:
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B538 @ 0x14030B538 (sub_14030B538.c)
 *     sub_14030B6D0 @ 0x14030B6D0 (sub_14030B6D0.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1406BFC4C @ 0x1406BFC4C (sub_1406BFC4C.c)
 *     sub_1406FC9C4 @ 0x1406FC9C4 (sub_1406FC9C4.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_14096D778 @ 0x14096D778 (sub_14096D778.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BF9AC(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned __int64 v11; // r13
  int v12; // esi
  int v13; // r13d
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  int v19; // edx
  _QWORD *v20; // r15
  int v21; // edx
  int v22; // r8d
  void *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // [rsp+50h] [rbp-68h]
  int v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v32; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp+18h]
  __int64 v34; // [rsp+D8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  v32 = 0LL;
  v4 = *((_QWORD *)CurrentThread + 23);
  v30 = *(_QWORD *)(v4 + 1680);
  if ( a2 > 0x10 )
    return 3221225495LL;
  v5 = sub_1402828F0(64, 0x40uLL, 0x53646156u);
  v6 = (__int64)v5;
  if ( !v5 )
    return 3221225495LL;
  v7 = v5[12];
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 2) = -2LL;
  v5[12] = v7 & 0xFFDFF07F | 0x200200;
  v8 = sub_1406FC9C4(v4, 0LL);
  v28 = v8;
  v9 = 0x200000LL;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v6 + 48);
    v34 = 0LL;
    v11 = v3;
    v33 = v3;
    v27 = v9;
    v12 = sub_1407B83C0(
            0,
            0,
            v8,
            (_DWORD)v3 << 12,
            v9,
            0LL,
            (v10 >> 7) & 0x1F,
            0x80000000,
            (__int64)&v34,
            (__int64)&v32);
    if ( v12 >= 0 )
      break;
    if ( v9 != 0x10000 )
      v9 = 0x10000LL;
    v3 >>= 1;
    v8 = v28;
    if ( v27 != 0x10000 )
      v3 = v11;
    if ( v3 < 0x10 )
      goto LABEL_24;
  }
  v13 = v32;
  v14 = v32 >> 12;
  v15 = v32 >> 12;
  v32 = (v3 << 12) + v32 - 1;
  sub_14030B420(v6, v15);
  v16 = v33;
  v18 = v17 >> 12;
  *(_DWORD *)(v6 + 28) = v17 >> 12;
  *(_BYTE *)(v6 + 33) = v17 >> 44;
  v12 = sub_1406BFC4C(v4, v6, v16, 64LL);
  if ( v12 < 0 )
  {
LABEL_24:
    ExFreePoolWithTag((PVOID)v6, 0);
    return (unsigned int)v12;
  }
  v29 = sub_1402EE0C8(v6, 64LL) + 8;
  v20 = (_QWORD *)(v29 + 16);
  v21 = (unsigned int)sub_140363220(v19 - 63) % v33;
  *(_DWORD *)(v29 + 44) = v33;
  v22 = v32;
  *(_QWORD *)(v29 + 32) = v6;
  *(_DWORD *)(v29 + 48) = a1 & 3 ^ (4 * v21);
  *(_QWORD *)(v29 + 16) = 0LL;
  *(_QWORD *)(v29 + 24) = 0LL;
  *(_DWORD *)(v29 + 40) = 0;
  v23 = (void *)sub_1407B9190(v6, v13, v22, -2147483647, 0);
  if ( !v23 )
  {
    v12 = -1073741670;
    goto LABEL_20;
  }
  v12 = sub_1407B88C0(v6, v4);
  if ( v12 < 0 )
  {
LABEL_20:
    if ( v29 )
      sub_14096D778(v4, v6, 64LL);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    goto LABEL_24;
  }
  sub_14030B7F0((__int64)CurrentThread, v6);
  sub_14030E390(v6, v4, 0);
  sub_140281C44((__int64)CurrentThread, v6);
  if ( v34 )
    sub_1406FCFF0(v14, v18);
  sub_14030B6D0((__int64)CurrentThread, v4);
  v24 = 16LL * a1 + v30 + 312;
  v25 = *(_QWORD *)v24;
  if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
    __fastfail(3u);
  *(_QWORD *)(v29 + 24) = v24;
  *v20 = v25;
  *(_QWORD *)(v25 + 8) = v20;
  *(_QWORD *)v24 = v20;
  sub_14030B538((__int64)CurrentThread, v4);
  return (unsigned int)v12;
}
