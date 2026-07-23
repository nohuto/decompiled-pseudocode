/*
 * XREFs of sub_140B4C3F8 @ 0x140B4C3F8
 * Callers:
 *     sub_1403BBA90 @ 0x1403BBA90 (sub_1403BBA90.c)
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 * Callees:
 *     sub_1403BF66C @ 0x1403BF66C (sub_1403BF66C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140B4C8B8 @ 0x140B4C8B8 (sub_140B4C8B8.c)
 *     sub_140B4CC80 @ 0x140B4CC80 (sub_140B4CC80.c)
 */

char __fastcall sub_140B4C3F8(unsigned int *a1, unsigned __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  __int64 v9; // r10
  bool v11; // r13
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int8 *v15; // r11
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  _DWORD *v19; // r8
  __int64 v20; // r10
  _DWORD v22[64]; // [rsp+40h] [rbp-258h] BYREF
  _DWORD v23[64]; // [rsp+140h] [rbp-158h] BYREF

  v4 = qword_140C4ACC8;
  v5 = 0;
  *a1 = 0;
  *a3 = 0;
  *(_DWORD *)a2 = 0;
  v8 = (_DWORD *)a2;
  *a4 = 0;
  v9 = v4 + 48;
  v11 = *(_BYTE *)(v4 + 8) >= 3u;
  v12 = v4 + *(unsigned int *)(v4 + 4);
  while ( v9 + 2 <= v12 )
  {
    v13 = *(unsigned __int8 *)(v9 + 1);
    if ( (unsigned __int8)v13 < 2u || v9 + v13 > v12 )
      break;
    LOBYTE(a2) = v11;
    if ( !(unsigned __int8)sub_140B4CC80(v9, a2) )
      goto LABEL_22;
    if ( *(_BYTE *)(v4 + 8) == 1 )
    {
      v16 = *v15;
    }
    else if ( *(_BYTE *)v14 )
    {
      if ( *(_BYTE *)v14 == 2 )
        v16 = *(_DWORD *)(v14 + 4);
      else
        v16 = *(_DWORD *)v15;
    }
    else
    {
      v16 = *v15
          + ((*(unsigned __int8 *)(v14 + 9)
            + ((*(unsigned __int8 *)(v14 + 10) + (*(unsigned __int8 *)(v14 + 11) << 8)) << 8)) << 8);
    }
    v17 = *a1;
    a2 = 0LL;
    if ( *a1 )
    {
      while ( v16 != v23[(unsigned int)a2] )
      {
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= v17 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( (_DWORD)a2 == v17 )
      {
        if ( (_DWORD)a2 == 64 )
          return 0;
        v23[(unsigned int)a2] = v16;
        v22[(unsigned int)a2] = 0;
        *a1 = v17 + 1;
      }
    }
    if ( !*(_BYTE *)v14 )
      goto LABEL_21;
    if ( *(_BYTE *)v14 != 1 )
    {
      if ( *(_BYTE *)v14 != 2 )
        goto LABEL_22;
LABEL_21:
      ++*v8;
      ++v22[(unsigned int)a2];
      goto LABEL_22;
    }
    ++*a3;
LABEL_22:
    v9 = *(unsigned __int8 *)(v14 + 1) + v14;
  }
  if ( *a3 && *v8 )
  {
    if ( qword_140C4AD20 )
      sub_140B4C8B8((_DWORD)a1, 64, (_DWORD)v8, 0, 0LL, (__int64)v23, (__int64)v22, 0LL);
    v18 = *a1;
    if ( byte_140C54BF8 )
    {
      if ( v18 )
      {
        v19 = v22;
        v20 = v18;
        do
        {
          if ( *v19 > (unsigned int)dword_140C0CAA0 )
            v5 = (dword_140C0CAA0 + *v19 - 1) / (unsigned int)dword_140C0CAA0 + v5 - 1;
          ++v19;
          --v20;
        }
        while ( v20 );
      }
      v18 += v5;
      *a1 = v18;
    }
    if ( v18 <= 0x40 )
    {
      *a4 = sub_1403BF66C();
      return 1;
    }
  }
  return 0;
}
