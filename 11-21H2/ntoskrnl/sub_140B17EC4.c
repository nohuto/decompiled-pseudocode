/*
 * XREFs of sub_140B17EC4 @ 0x140B17EC4
 * Callers:
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

char __fastcall sub_140B17EC4(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE *v4; // rcx
  _BYTE *v5; // rbx
  char *p_Str; // rdi
  unsigned __int16 v7; // cx
  char *v8; // rbx
  char v9; // al
  const char *v10; // rax
  char *v11; // rbx
  __int16 v12; // si
  char result; // al
  unsigned __int16 i; // dx
  char v15; // r8
  __int64 v16; // rcx
  char Str; // [rsp+9Fh] [rbp-29h] BYREF

  if ( a1 )
  {
    qword_140D68738 = a1;
    qword_140D68670 = a1 + 1;
    qword_140D686D8 = a2 + a1 - 2;
  }
  while ( 1 )
  {
    v4 = (_BYTE *)qword_140D68670;
    v5 = 0LL;
    if ( qword_140D68670 > (unsigned __int64)qword_140D686D8 )
      return 0;
    while ( *v4 != 46 || (unsigned __int8)(v4[1] - 48) > 9u || (unsigned __int8)(*(v4 - 1) - 48) > 9u )
    {
      qword_140D68670 = (__int64)++v4;
      if ( (unsigned __int64)v4 > qword_140D686D8 )
        goto LABEL_10;
    }
    v5 = v4;
LABEL_10:
    if ( (unsigned __int64)v4 > qword_140D686D8 )
      return 0;
    Str = 0;
    qword_140D68670 = (__int64)(v4 + 2);
    p_Str = &Str;
    v7 = 0;
    v8 = v5 - 1;
    do
    {
      if ( (unsigned __int64)v8 < qword_140D68738 )
        break;
      v9 = *v8;
      if ( *v8 < 32 )
        break;
      if ( v9 == 36 )
        break;
      --p_Str;
      --v8;
      ++v7;
      *p_Str = v9;
    }
    while ( v7 < 0x78u );
    v10 = "Ver";
    v11 = v8 + 1;
    v12 = 0;
    while ( v10 )
    {
      if ( strstr(p_Str, v10) )
      {
        for ( ; v11; ++v11 )
        {
          if ( *v11 != 32 )
            break;
        }
        for ( i = 0; i < 0x7Fu; ++i )
        {
          if ( !v11 )
            break;
          if ( (unsigned __int64)v11 > qword_140D686D8 + 1 )
            break;
          v15 = *v11;
          if ( *v11 < 32 )
            break;
          if ( v15 == 36 )
            break;
          v16 = i;
          ++v11;
          *(_BYTE *)(v16 + a3) = v15;
        }
        result = 1;
        *(_BYTE *)(i + a3) = 0;
        return result;
      }
      v10 = (&off_140B57F90)[(unsigned __int16)++v12];
    }
  }
}
