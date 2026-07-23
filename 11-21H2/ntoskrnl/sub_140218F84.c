/*
 * XREFs of sub_140218F84 @ 0x140218F84
 * Callers:
 *     sub_140218D80 @ 0x140218D80 (sub_140218D80.c)
 *     sub_140219B90 @ 0x140219B90 (sub_140219B90.c)
 * Callees:
 *     sub_14021984C @ 0x14021984C (sub_14021984C.c)
 *     FsRtlIsNameInExpression @ 0x140219D90 (FsRtlIsNameInExpression.c)
 *     sub_14021A454 @ 0x14021A454 (sub_14021A454.c)
 *     sub_140253C50 @ 0x140253C50 (sub_140253C50.c)
 *     sub_14064AE08 @ 0x14064AE08 (sub_14064AE08.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140218F84(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r13
  UNICODE_STRING *p_Name; // rdx
  __int64 v11; // r12
  bool v12; // zf
  UNICODE_STRING *v13; // rdx
  UNICODE_STRING *p_Expression; // rcx
  int IsNameInExpression; // ecx
  unsigned int v16; // r14d
  __int64 v17; // rdi
  wchar_t **v18; // rsi
  BOOLEAN v20; // al
  unsigned int v21; // eax
  BOOL v22; // eax
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING *v24; // [rsp+28h] [rbp-40h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-28h] BYREF
  char v27; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v23) = 0;
  v27 = 0;
  p_Buffer = &Name.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  v8 = sub_14021A454(a2, &v27);
  HIDWORD(v23) = v8;
  if ( v8 < 0 )
  {
LABEL_25:
    *a3 = -1;
    v16 = v8;
    goto LABEL_19;
  }
  v9 = 0LL;
  p_Name = &Name;
  v24 = &Name;
  v11 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v11 - 4) == 1 )
    {
      v12 = v27 == 0;
    }
    else
    {
      v12 = v27 == 0;
      if ( v27 )
      {
        *p_Name = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v11 + 48LL);
        goto LABEL_9;
      }
    }
    LOBYTE(p_Name) = v12;
    v8 = sub_14021984C(a2 + 40 * v9, p_Name, &Name + (unsigned int)v9, (char *)&v23 + (unsigned int)v9, v23);
    HIDWORD(v23) = v8;
    if ( v8 < 0 )
      goto LABEL_25;
    p_Name = v24;
LABEL_9:
    v9 = (unsigned int)(v9 + 1);
    v11 += 40LL;
    v24 = ++p_Name;
  }
  while ( (int)v9 < 2 );
  if ( (unsigned __int8)(a1 + 0x80) > 1u )
  {
    if ( v27 )
      v21 = sub_14064AE08(&Name, &Expression);
    else
      v21 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    *a3 = v21;
    if ( a1 != -126 )
    {
      if ( a1 == -125 )
      {
        v22 = *a3 <= 0;
LABEL_40:
        *a3 = v22;
LABEL_43:
        v16 = HIDWORD(v23);
        goto LABEL_19;
      }
      if ( a1 == -124 )
      {
        v22 = *a3 > 0;
        goto LABEL_40;
      }
      if ( a1 != -123 )
        goto LABEL_43;
      v21 = ~*a3;
    }
    v22 = v21 >> 31;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v13 = &Name;
      p_Expression = &Expression;
    }
    else
    {
      v13 = &Expression;
      p_Expression = &Name;
    }
    IsNameInExpression = FsRtlIsNameInExpression(p_Expression, v13, v27 == 0, 0LL);
    *a3 = IsNameInExpression;
  }
  else
  {
    if ( v27 )
      v20 = sub_140253C50(&Name, &Expression);
    else
      v20 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    IsNameInExpression = v20;
    *a3 = v20;
  }
  v16 = HIDWORD(v23);
  if ( a1 == -127 )
    *a3 = IsNameInExpression != 1;
LABEL_19:
  v17 = 0LL;
  v18 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)&v23 + v17) )
      ExFreePoolWithTag(*v18, 0);
    ++v17;
    v18 += 2;
  }
  while ( v17 < 2 );
  return v16;
}
