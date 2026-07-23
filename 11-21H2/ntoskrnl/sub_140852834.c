/*
 * XREFs of sub_140852834 @ 0x140852834
 * Callers:
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 * Callees:
 *     sub_140215598 @ 0x140215598 (sub_140215598.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 *     sub_1406F8804 @ 0x1406F8804 (sub_1406F8804.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140852834(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int a4)
{
  char v4; // r14
  __int64 v7; // r15
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // ebp
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // r14
  ULONG_PTR v31; // rsi
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  unsigned __int64 v36; // [rsp+60h] [rbp-68h]
  unsigned __int64 v37; // [rsp+60h] [rbp-68h]
  unsigned __int64 v38; // [rsp+68h] [rbp-60h]
  _QWORD *v39; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+80h] [rbp-48h]
  __int64 v42; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 *v43; // [rsp+D8h] [rbp+10h]
  _DWORD *v44; // [rsp+E0h] [rbp+18h]

  v44 = a3;
  v43 = a2;
  v4 = a4;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 || *(_QWORD *)(a1 + 72) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 88);
  v8 = a4 >> 3;
  if ( a4 >> 3 == 2 || (a4 & 5) == 5 || a4 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v39 = 0LL;
  v35 = (__int64)CurrentThread;
  v10 = sub_1402828F0(64, 0x40uLL, 0x6C646156u);
  v11 = (__int64)v10;
  if ( !v10 )
    return 3221225626LL;
  v10[2] = -2LL;
  v12 = v10[6] & 0xFFFFF01F;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_DWORD *)(v11 + 48) = v12 | ((v4 & 0x1F) << 7) | 0x200010;
  v13 = sub_140215598(*a3 >> 12);
  v42 = 0LL;
  v38 = -1LL;
  v14 = v13;
  sub_14030B820((__int64)CurrentThread, v7);
  if ( (*(_DWORD *)(v7 + 1124) & 0x20) != 0 )
  {
    v16 = -1073741558;
    goto LABEL_38;
  }
  v15 = (unsigned __int16)*(_DWORD *)a3;
  if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
  {
    v36 = *(_QWORD *)(a1 + 24) + v15;
    v16 = sub_1407B83C0(
            *(_DWORD *)(a1 + 40),
            *(_QWORD *)a1,
            *(_QWORD *)(a1 + 8),
            v36,
            *(_QWORD *)(a1 + 16),
            0LL,
            v4,
            0,
            (__int64 *)&v39,
            &v42);
    if ( v16 >= 0 )
    {
      v17 = v42 + v36 - 1;
      v18 = (unsigned __int16)*v44 + v42;
      v19 = v18;
      goto LABEL_11;
    }
LABEL_38:
    sub_140281A58(v35, v7);
    if ( v38 != -1LL )
    {
      v30 = -1LL;
      v31 = 0LL;
      while ( v14 <= v38 )
      {
        if ( (unsigned int)sub_1402B2E00(v14) )
          goto LABEL_44;
        v32 = v14;
        if ( v31 )
          v32 = v30;
        ++v31;
        v30 = v32;
        if ( v14 == v38 )
        {
LABEL_44:
          if ( v31 )
          {
            sub_140215AA8(1, v30, v31);
            v30 = -1LL;
            v31 = 0LL;
          }
        }
        ++v14;
      }
    }
    ExFreePoolWithTag((PVOID)v11, 0);
    return (unsigned int)v16;
  }
  v18 = v15 + *v43;
  if ( !sub_1406F8804(v7, v18, *(_QWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8)) )
  {
    v16 = -1073741800;
    goto LABEL_38;
  }
LABEL_11:
  v41 = v19 >> 12;
  v40 = v17 >> 12;
  sub_14030B420(v11, v19 >> 12);
  v22 = *(unsigned __int8 *)(v11 + 32);
  v23 = 1;
  v24 = *(unsigned int *)(v11 + 24);
  *(_BYTE *)(v11 + 33) = BYTE4(v21);
  *(_DWORD *)(v11 + 28) = v21;
  LODWORD(v42) = 1;
  v37 = v14 + ((unsigned int)v21 | ((unsigned __int64)BYTE4(v21) << 32)) - (v24 | (v22 << 32));
  if ( v8 != 3 )
  {
    if ( v8 == 1 )
      v23 = v20;
    goto LABEL_14;
  }
  if ( (v4 & 7) != 0 )
  {
    v23 = 2;
LABEL_14:
    LODWORD(v42) = v23;
  }
  v34 = -1LL;
  v25 = v20;
  v26 = v14;
  if ( v14 <= v14 + ((unsigned int)v21 | ((unsigned __int64)BYTE4(v21) << 32)) - (v24 | (v22 << 32)) )
  {
    do
    {
      if ( (unsigned int)sub_1402B2E00(v26) )
      {
        v27 = v34;
      }
      else
      {
        v27 = v26;
        if ( v25 )
          v27 = v34;
        ++v25;
        v34 = v27;
        if ( v26 != v37 )
          goto LABEL_20;
      }
      if ( v25 )
      {
        v16 = sub_140215E54(1, v27, v25, v23, 0LL, 0LL);
        if ( v16 < 0 )
          goto LABEL_38;
        v29 = v25 + v34 - 1;
        v25 = 0LL;
        v34 = -1LL;
        v38 = v29;
      }
LABEL_20:
      v23 = v42;
      ++v26;
    }
    while ( v26 <= v37 );
  }
  v16 = sub_1407B88C0(v11, v7);
  if ( v16 < 0 )
    goto LABEL_38;
  sub_1403D5614(v7, v11, v14);
  if ( v39 )
    sub_1406FCFF0(v41, v40, v39);
  if ( !*(_DWORD *)(a1 + 120) )
  {
    sub_140281A58(v35, v7);
LABEL_26:
    *v43 = v18;
    return 0LL;
  }
  sub_14030B7F0(v35, v11);
  sub_140281A58(v35, v7);
  v33 = sub_1406F74A8(v11, 0LL, *(_DWORD *)(a1 + 120));
  if ( v33 >= 0 )
  {
    sub_140281C44(v35, v11);
    goto LABEL_26;
  }
  sub_14030EB64(v11);
  sub_1407BC0B0((unsigned __int8 *)v11, 0LL, 0);
  return (unsigned int)v33;
}
