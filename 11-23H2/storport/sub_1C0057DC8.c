/*
 * XREFs of sub_1C0057DC8 @ 0x1C0057DC8
 * Callers:
 *     sub_1C005786C @ 0x1C005786C (sub_1C005786C.c)
 *     sub_1C00742D0 @ 0x1C00742D0 (sub_1C00742D0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C0057DC8(unsigned int a1, unsigned __int16 *a2, struct _STRING *a3)
{
  unsigned int v3; // ebx
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdi
  int i; // esi
  int v11; // esi
  __int64 v12; // rdi
  const char *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  char *v16; // rdx
  __int64 v17; // r9
  char v18; // al
  char *v19; // rcx

  v3 = 0;
  if ( *a2 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( !isspace(*(char *)(v8 + *((_QWORD *)a2 + 1))) )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < *a2 );
    v9 = *a2;
    for ( i = *a2 - 1; --v9 >= 0 && isspace(*(char *)(v9 + *((_QWORD *)a2 + 1))); --i )
      ;
    if ( v7 <= i )
    {
      v11 = i - v7;
      v12 = v11 + 2;
      v13 = (const char *)sub_1C0007CF4(64LL, v12, a1, 0LL);
      if ( v13 )
      {
        if ( (unsigned __int64)(v12 - 1) <= 0x7FFFFFFE )
        {
          v14 = v11 + 1LL;
          if ( v14 <= 0x7FFFFFFE )
          {
            v15 = v14 - v12;
            v16 = (char *)v13;
            v17 = *((_QWORD *)a2 + 1) + v7 - (_QWORD)v13;
            do
            {
              if ( !(v15 + v12) )
                break;
              v18 = v16[v17];
              if ( !v18 )
                break;
              *v16++ = v18;
              --v12;
            }
            while ( v12 );
            v19 = v16 - 1;
            if ( v12 )
              v19 = v16;
            *v19 = 0;
          }
          else
          {
            *v13 = 0;
          }
        }
        RtlInitAnsiString(a3, v13);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v3;
}
