/*
 * XREFs of sub_140B55FC4 @ 0x140B55FC4
 * Callers:
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 * Callees:
 *     sub_1403CAD78 @ 0x1403CAD78 (sub_1403CAD78.c)
 *     sub_140AABE98 @ 0x140AABE98 (sub_140AABE98.c)
 */

__int64 __fastcall sub_140B55FC4(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int *a5, __int64 **a6)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 *v10; // rdi
  int v11; // ecx
  unsigned int *v12; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-18h]
  unsigned int v15; // [rsp+30h] [rbp-10h]
  int v16; // [rsp+34h] [rbp-Ch]
  __int64 *v17; // [rsp+68h] [rbp+28h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  result = sub_140AABE98(0LL, &v17);
  if ( (int)result >= 0 )
  {
    v13[0] = 0;
    v9 = 4;
    v13[1] = -1;
    v10 = v17;
    v16 = 0;
    v14 = v17;
    do
    {
      v15 = ++v9;
      result = sub_1403CAD78((__int64)v13, (__int64)&v18);
      if ( (int)result < 0 )
        return result;
      v11 = HIDWORD(v18);
    }
    while ( HIDWORD(v18) < a1 );
    if ( HIDWORD(v18) <= a1 )
    {
LABEL_6:
      *a4 = v18;
      v12 = a5;
      a4[1] = v11;
      *v12 = v9;
      *a6 = v10;
      return 0LL;
    }
    if ( v9 <= 5 )
    {
      return 3221225473LL;
    }
    else
    {
      v15 = --v9;
      result = sub_1403CAD78((__int64)v13, (__int64)&v18);
      if ( (int)result >= 0 )
      {
        v11 = HIDWORD(v18);
        goto LABEL_6;
      }
    }
  }
  return result;
}
