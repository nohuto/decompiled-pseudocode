/*
 * XREFs of sub_140AF9490 @ 0x140AF9490
 * Callers:
 *     sub_140AF9238 @ 0x140AF9238 (sub_140AF9238.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 */

__int64 __fastcall sub_140AF9490(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdi
  bool v9; // si
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  qword_140C49C88 = (__int64)&qword_140C49C80;
  qword_140C49C80 = (__int64)&qword_140C49C80;
  v15 = 0;
  if ( !qword_140C4BF58 )
    return 0LL;
  v2 = sub_140213A40(qword_140C4BF58, 1397904969, 0, 0);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v5 = *(unsigned int *)(v2 + 4);
  if ( (unsigned int)v5 < 0x5A )
    return 0LL;
  v6 = v5 + v3;
  v7 = *(_DWORD *)(v3 + 36);
  if ( (v7 & 1) == 0 )
    return 0LL;
  if ( (v7 & 2) == 0 )
  {
    v9 = 0;
    goto LABEL_29;
  }
  v8 = v3 + 48;
  v9 = 1;
  if ( v3 + 48 >= v6 )
  {
LABEL_29:
    v12 = v3 + 48;
    goto LABEL_31;
  }
  while ( v8 + 4 <= v6 )
  {
    v10 = *(unsigned __int16 *)(v8 + 2);
    if ( (unsigned int)v10 < 4 || v8 + v10 > v6 )
      break;
    v11 = (_BYTE *)v8;
    v8 += v10;
    if ( *v11 == 64 )
    {
      result = sub_1405307FC(v3, (__int64)v11, &v15);
      if ( (int)result < 0 )
        return result;
      v9 = v9 && !v15;
    }
    if ( v8 >= v6 )
    {
      v12 = v3 + 48;
      while ( v12 + 4 <= v6 )
      {
        v13 = *(unsigned __int16 *)(v12 + 2);
        if ( (unsigned int)v13 < 4 || v12 + v13 > v6 )
          break;
        v14 = (_BYTE *)v12;
        v12 += v13;
        if ( *v14 == 17 )
        {
          result = sub_1405307FC(v3, (__int64)v14, &v15);
          if ( (int)result < 0 )
            return result;
          v9 = v9 && !v15;
        }
LABEL_31:
        if ( v12 >= v6 )
        {
          *a1 ^= (*(_DWORD *)a1 ^ (2 * v9)) & 2;
          return 0LL;
        }
      }
      return 3221225485LL;
    }
  }
  return 3221225485LL;
}
