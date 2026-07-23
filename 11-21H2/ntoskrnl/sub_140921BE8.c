/*
 * XREFs of sub_140921BE8 @ 0x140921BE8
 * Callers:
 *     sub_140921D8C @ 0x140921D8C (sub_140921D8C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140921BE8(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v4; // ebx
  struct _LOOKASIDE_LIST_EX *v7; // r9
  size_t v8; // r14
  _PRIVILEGE_SET *v9; // rsi
  struct _LOOKASIDE_LIST_EX *v10; // r9
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // r12
  unsigned int *v14; // rbp
  _QWORD *p_PrivilegeCount; // r13
  size_t v16; // r15
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *v22; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v21 = 0LL;
  sub_1407C97FC(&v21);
  *(_QWORD *)a1 = a2;
  v8 = *(unsigned int *)(a3 + 36);
  if ( (_DWORD)v8 )
  {
    v9 = (_PRIVILEGE_SET *)Allocate(PagedPool, 8 * v8, 0x38374D43u, v7);
    if ( !v9 )
      return (unsigned int)-1073741670;
    v22 = (unsigned int *)Allocate(PagedPool, 8 * v8, 0x38374D43u, v10);
    if ( !v22 )
    {
      SeFreePrivileges(v9);
      return (unsigned int)-1073741670;
    }
    v11 = *(unsigned int *)(a3 + 40);
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      v12 = sub_1406BF400(a2, v11, &v21);
    else
      v12 = sub_1407C9820(a2, v11, (unsigned int *)&v21);
    v13 = (unsigned int *)v12;
    v14 = v22;
    p_PrivilegeCount = &v9->PrivilegeCount;
    v16 = v8;
    do
    {
      sub_1407C97FC(v14);
      v17 = *v13;
      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
        v18 = sub_1406BF400(a2, v17, v14);
      else
        v18 = sub_1407C9820(a2, v17, v14);
      *p_PrivilegeCount = v18;
      v14 += 2;
      ++p_PrivilegeCount;
      ++v13;
      --v16;
    }
    while ( v16 );
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      sub_1406BF450(a2, &v21);
    else
      sub_1407C97C0(a2, (unsigned int *)&v21);
    qsort(v9, v8, 8uLL, sub_140921EA0);
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 24) = v8;
  }
  return v4;
}
