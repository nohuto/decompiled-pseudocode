/*
 * XREFs of sub_14064A96C @ 0x14064A96C
 * Callers:
 *     sub_140218D80 @ 0x140218D80 (sub_140218D80.c)
 *     sub_140219B90 @ 0x140219B90 (sub_140219B90.c)
 * Callees:
 *     sub_14021984C @ 0x14021984C (sub_14021984C.c)
 *     sub_140219CE4 @ 0x140219CE4 (sub_140219CE4.c)
 *     FsRtlIsNameInExpression @ 0x140219D90 (FsRtlIsNameInExpression.c)
 *     sub_14021A454 @ 0x14021A454 (sub_14021A454.c)
 *     sub_14064AE5C @ 0x14064AE5C (sub_14064AE5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14064A96C(char a1, __int64 a2, BOOL *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r14d
  unsigned int v9; // r13d
  UNICODE_STRING *p_Expression; // rdx
  __int64 *v11; // r12
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  UNICODE_STRING *v15; // rdx
  UNICODE_STRING *p_Name; // rcx
  BOOLEAN IsNameInExpression; // al
  __int64 v18; // rcx
  BOOL v19; // eax
  int v20; // eax
  _BYTE *v21; // rdi
  wchar_t **v22; // rsi
  _WORD v24[2]; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-A0h] BYREF
  UNICODE_STRING *v26; // [rsp+30h] [rbp-98h]
  __int64 v27; // [rsp+38h] [rbp-90h] BYREF
  __int64 v28; // [rsp+40h] [rbp-88h]
  UNICODE_STRING Expression; // [rsp+48h] [rbp-80h] BYREF
  UNICODE_STRING Name; // [rsp+58h] [rbp-70h] BYREF
  _OWORD v31[2]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp-40h]
  char v35; // [rsp+E8h] [rbp+20h] BYREF

  v25 = 0;
  memset(v31, 0, sizeof(v31));
  LODWORD(v32) = 0;
  WORD2(v32) = 0;
  v27 = 0LL;
  v28 = 0LL;
  v24[0] = 0;
  v35 = 0;
  *a3 = 0;
  p_Buffer = &Expression.Buffer;
  v5 = 2LL;
  v6 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v6;
  }
  while ( v6 );
  v8 = sub_14021A454(a2, &v35);
  if ( v8 >= 0 )
  {
    v9 = 0;
    p_Expression = &Expression;
    v26 = &Expression;
    v11 = &v27;
    v12 = v7 + 24;
    do
    {
      if ( *(_DWORD *)(v12 - 12) == 1 )
      {
        if ( !*(_BYTE *)(v12 - 20) )
        {
          v8 = -1073741406;
          goto LABEL_4;
        }
        v8 = sub_140219CE4(*(char **)(v12 + 8), *(_DWORD *)v12, (__int64)v31, (int *)&v25);
        if ( v8 < 0 )
          goto LABEL_4;
        if ( LOWORD(v31[0]) != 3 )
          goto LABEL_4;
        v8 = sub_14021984C((__int64)v31, v35 == 0, &Expression.Length + 8 * v9, (_BYTE *)v24 + v9);
        if ( v8 < 0 )
          goto LABEL_4;
        v8 = sub_140219CE4((char *)(*(_QWORD *)(v12 + 8) + v25), *(_DWORD *)v12 - v25, (__int64)v31, (int *)&v25);
        if ( v8 < 0 )
          goto LABEL_4;
        if ( LOWORD(v31[0]) != 2 )
          goto LABEL_4;
        v13 = v32;
        *v11 = *v32;
        if ( *((_BYTE *)v13 + 8) == 2 )
          goto LABEL_4;
        p_Expression = v26;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v12 - 8) + 48LL);
        *v11 = *(_QWORD *)v14;
        *p_Expression = *(UNICODE_STRING *)(v14 + 8);
      }
      ++v9;
      v12 += 40LL;
      ++v11;
      v26 = ++p_Expression;
    }
    while ( v9 < 2 );
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v15 = &Expression;
      p_Name = &Name;
    }
    else
    {
      v15 = &Name;
      p_Name = &Expression;
    }
    IsNameInExpression = FsRtlIsNameInExpression(p_Name, v15, v35 == 0, 0LL);
    LOBYTE(v18) = IsNameInExpression;
    v19 = v27 == v28 && IsNameInExpression;
    *a3 = v19;
    if ( a1 == -127 )
    {
      v20 = !v19;
    }
    else
    {
      if ( a1 == (char)0x80 )
        goto LABEL_32;
      if ( !(_BYTE)v18 )
      {
        *a3 = 0;
        goto LABEL_32;
      }
      LOBYTE(v18) = a1;
      v20 = sub_14064AE5C(v18);
    }
    *a3 = v20;
  }
  else
  {
LABEL_4:
    *a3 = -1;
  }
LABEL_32:
  v21 = v24;
  v22 = &Expression.Buffer;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag(*v22, 0);
    ++v21;
    v22 += 2;
    --v5;
  }
  while ( v5 );
  return (unsigned int)v8;
}
