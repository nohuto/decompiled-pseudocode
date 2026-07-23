/*
 * XREFs of sub_140923D00 @ 0x140923D00
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E480 @ 0x14065E480 (sub_14065E480.c)
 *     sub_14067E8A8 @ 0x14067E8A8 (sub_14067E8A8.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140716758 @ 0x140716758 (sub_140716758.c)
 *     sub_140716F80 @ 0x140716F80 (sub_140716F80.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091CF4C @ 0x14091CF4C (sub_14091CF4C.c)
 */

__int64 __fastcall sub_140923D00(__int64 *a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  _PRIVILEGE_SET *v6; // rsi
  ULONG_PTR v7; // rbp
  unsigned int *v8; // rdi
  int v9; // eax
  int v10; // ebx
  ULONG_PTR v11; // r12
  __int64 v12; // rax
  struct _LOOKASIDE_LIST_EX *v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1[6] + 32);
  v8 = *(unsigned int **)(a1[10] + 104);
  v20 = v8;
  if ( v8 )
  {
    ++*v8;
  }
  else
  {
    v9 = sub_14065E480((__int64)a1, &v20, a3, a4);
    v8 = v20;
    v10 = v9;
    if ( v9 < 0 )
      goto LABEL_23;
  }
  v11 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v12 = sub_1406BF400(v7, v11, &v19);
  else
    v12 = sub_1407C9820(v7, v11, (unsigned int *)&v19);
  if ( !v12 )
  {
LABEL_9:
    v10 = -1073741670;
    goto LABEL_23;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    sub_1406BF450(v7, &v19);
  else
    sub_1407C97C0(v7, (unsigned int *)&v19);
  v10 = sub_140716758(v7, (unsigned int)v11, 0);
  if ( v10 < 0 )
    goto LABEL_23;
  v10 = sub_14071F300(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0);
  if ( v10 < 0 )
    goto LABEL_23;
  v14 = *(_QWORD *)(a1[6] + 192);
  if ( v14 && *(_QWORD *)(v14 + 32) != v14 + 32 )
  {
    v15 = Allocate(PagedPool, 0x20uLL, 0x31374D43u, v13);
    v6 = (_PRIVILEGE_SET *)v15;
    if ( !v15 )
      goto LABEL_9;
    *v15 = 0LL;
    v16 = (__int64)v15;
    *((_DWORD *)v15 + 3) = 0;
    v15[3] = 0LL;
    *((_DWORD *)v15 + 2) = -1073741823;
    v17 = v15 + 2;
    v17[1] = v17;
    *v17 = v17;
    v10 = sub_14091CF4C(a1[6], v16);
    if ( v10 < 0 )
      goto LABEL_22;
  }
  if ( sub_140716F80(v7, &v8[(v11 >> 31) + 3], v11) )
  {
    --v8[(v11 >> 31) + 1];
    v10 = 0;
    a1[13] = (__int64)v8;
    a1[14] = (__int64)v6;
    return (unsigned int)v10;
  }
  v10 = -1073741670;
  if ( v6 )
  {
LABEL_22:
    sub_14067E8A8(v6, a2);
    SeFreePrivileges(v6);
  }
LABEL_23:
  if ( v8 )
    sub_14065E380(v7, v8);
  return (unsigned int)v10;
}
