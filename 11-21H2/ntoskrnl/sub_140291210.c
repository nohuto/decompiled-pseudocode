/*
 * XREFs of sub_140291210 @ 0x140291210
 * Callers:
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 *     sub_1405A47A0 @ 0x1405A47A0 (sub_1405A47A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140291210(_BYTE *a1, void **a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11d
  void **v5; // r10
  _BYTE *v6; // rdi
  unsigned int v7; // edx
  unsigned int i; // r8d
  void *v10; // [rsp+40h] [rbp-28h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v10 = 0LL;
  if ( a4 || (((unsigned __int8)a1 | (unsigned __int8)a2) & 7) != 0 || (a3 & 7) != 0 )
  {
    while ( v4 )
    {
      if ( a4 )
      {
        v7 = a4;
        if ( a4 > v4 )
          v7 = 1;
      }
      else
      {
        v7 = v4 & 7;
        if ( (v4 & 7) != 0 )
        {
          if ( ((v7 - 1) & v7) != 0 )
            v7 = 1;
        }
        else
        {
          v7 = 8;
        }
      }
      if ( ((v7 - 1) & (unsigned int)v5) != 0 )
        v7 = 1;
      switch ( v7 )
      {
        case 1u:
          LOBYTE(v10) = *(_BYTE *)v5;
          break;
        case 2u:
          LOWORD(v10) = *(_WORD *)v5;
          break;
        case 4u:
          LODWORD(v10) = *(_DWORD *)v5;
          break;
        case 8u:
          v10 = *v5;
          break;
      }
      for ( i = 0; i < v7; ++i )
        *v6++ = *((_BYTE *)&v10 + i);
      v4 -= v7;
      v5 = (void **)((char *)v5 + v7);
    }
  }
  else
  {
    memmove(a1, a2, a3);
  }
  return 0LL;
}
