/*
 * XREFs of sub_1407947BC @ 0x1407947BC
 * Callers:
 *     sub_140791110 @ 0x140791110 (sub_140791110.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_140794AD0 @ 0x140794AD0 (sub_140794AD0.c)
 *     sub_14085EB0C @ 0x14085EB0C (sub_14085EB0C.c)
 * Callees:
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1407947BC(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  ULONG Tag; // [rsp+20h] [rbp-28h]

  v5 = (_QWORD *)a4;
  LOBYTE(a4) = a3;
  if ( !a2 )
  {
    *v5 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v7 = a1 - 1;
  if ( v7 )
  {
    v12 = v7 - 1;
    if ( !v12 )
    {
      v11 = sub_14066846C(a2, a3, a3, a4, Tag, 0, (PSID *)a5);
      if ( v11 >= 0 )
        *v5 = *(_QWORD *)a5;
      return (unsigned int)v11;
    }
    if ( v12 == 1 )
    {
      v11 = sub_140732D40((ULONG_PTR)a2, 0, (__int64)PsProcessType, a3, 0x20666E57u, (_QWORD *)a5, 0LL, 0LL);
      if ( v11 >= 0 )
        *v5 = a5;
      return (unsigned int)v11;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)a3 )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a2;
    v9 = *(_DWORD *)v8;
  }
  else
  {
    v9 = *(_DWORD *)a2;
  }
  *(_DWORD *)(a5 + 8) = v9;
  v10 = sub_1402DF880(v9);
  *(_QWORD *)a5 = v10;
  if ( !v10 )
    return (unsigned int)-1073741811;
  *v5 = a5 + 8;
  return 0;
}
