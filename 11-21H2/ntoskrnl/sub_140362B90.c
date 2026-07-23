/*
 * XREFs of sub_140362B90 @ 0x140362B90
 * Callers:
 *     sub_140362C48 @ 0x140362C48 (sub_140362C48.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

_BOOL8 __fastcall sub_140362B90(volatile signed __int64 *a1, int a2)
{
  signed __int64 v2; // rax
  BOOL v3; // r9d
  __int64 v4; // r8
  char v7; // cl
  char v8; // cl
  signed __int64 v9; // rtt
  _BYTE *v11; // rcx
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = 0;
  v15 = *a1;
  v4 = a2 & 3;
  do
  {
    if ( *((unsigned __int8 *)&v15 + 2 * v4) == a2 )
    {
      v7 = *((_BYTE *)&v15 + 2 * v4 + 1);
      if ( v7 == 64 )
      {
        v13 = (char *)&v15 + 1;
        v14 = 4LL;
        do
        {
          *v13 >>= 1;
          v13 += 2;
          --v14;
        }
        while ( v14 );
        v7 = *((_BYTE *)&v15 + 2 * v4 + 1);
      }
      v8 = v7 + 1;
      v3 = (unsigned __int8)v8 > 8u;
    }
    else
    {
      v11 = (char *)&v15 + 1;
      v12 = 4LL;
      do
      {
        *v11 >>= 1;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      *((_BYTE *)&v15 + 2 * v4) = a2;
      v8 = 1;
    }
    *((_BYTE *)&v15 + 2 * v4 + 1) = v8;
    v9 = v2;
    v2 = _InterlockedCompareExchange64(a1, v15, v2);
    v15 = v2;
  }
  while ( v9 != v2 );
  return v3;
}
