/*
 * XREFs of sub_180026110 @ 0x180026110
 * Callers:
 *     sub_180024068 @ 0x180024068 (sub_180024068.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

char __fastcall sub_180026110(__int64 a1, char a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  char v8; // dl
  unsigned __int64 v9; // rcx
  __int64 v11; // r10
  char v12; // bp
  unsigned __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int16 v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+2Ah] [rbp-2Eh]

  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a1 + v6) );
  if ( v6 < 0x12 )
    return 0;
  v7 = 0LL;
  v8 = 2 - (v6 < 0x18);
  v9 = 16LL;
  if ( !a2 )
  {
    do
    {
      while ( v7 < v9 )
      {
        LOBYTE(a4) = *(_BYTE *)(a1 + v7);
        if ( (unsigned __int8)(a4 - 43) > 0x2Fu || (v11 = 0xFFFFFFC07FF1LL, !_bittest64(&v11, (unsigned int)(a4 - 43))) )
        {
          if ( (unsigned __int8)(a4 - 97) > 0x19u )
            return 0;
        }
        ++v7;
      }
      if ( *(_BYTE *)(a1 + v7) != 46 )
        v9 = 22LL;
      --v8;
    }
    while ( v8 );
    v12 = (v9 == 22) + 1;
    while ( *(_BYTE *)(a1 + v7) == 46 )
    {
      v13 = v7 + 1;
      if ( v13 >= v6 )
        break;
      v17 = 0LL;
      v18 = 0;
      v19 = 0;
      v14 = strchr((const char *)(a1 + v13), 46);
      v15 = v14 ? &v14[-a1] : (char *)v6;
      v16 = (unsigned __int64)&v15[-v13];
      if ( v16 > 0xB )
        break;
      o_strncpy_s(&v17, 11LL, a1 + v13, v16);
      o__set_errno(0LL);
      if ( !(unsigned int)o_strtol(&v17, 0LL, 10LL) && (_BYTE)v17 != 48 && BYTE1(v17) )
        break;
      if ( *(_DWORD *)o__errno() == 34 )
        break;
      v7 = v16 + v13;
      if ( v7 >= v6 )
        return v12;
    }
    return 0;
  }
  do
  {
    if ( *(_BYTE *)(a1 + v9) == 46 )
      break;
    v9 = 22LL;
    --v8;
  }
  while ( v8 );
  return v8;
}
