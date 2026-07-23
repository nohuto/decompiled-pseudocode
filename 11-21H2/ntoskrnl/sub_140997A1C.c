/*
 * XREFs of sub_140997A1C @ 0x140997A1C
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14085490C @ 0x14085490C (sub_14085490C.c)
 */

char sub_140997A1C()
{
  __int64 *v0; // rdi
  unsigned __int8 i; // bp
  char *v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // r13
  __int64 v5; // rbx
  __int128 *v6; // rax
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // r15
  unsigned __int8 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF

  v0 = qword_140C1D060;
  v13 = 0LL;
  for ( i = 0; ; i = v11 + 1 )
  {
    v11 = i;
    v2 = (char *)&unk_140D05FD8;
    v3 = v0 + 5;
    v12 = 54LL;
    do
    {
      v4 = v0 + 539;
      v5 = 1LL << v2[12];
      v6 = (__int128 *)*((_QWORD *)v2 - 2);
      v7 = 0;
      v8 = ((v2[13] & 4) != 0) + 1;
      v9 = 0LL;
      v13 = *v6;
      do
      {
        if ( (v5 & v3[v9]) != 0 )
          LOBYTE(v6) = sub_14085490C(
                         *((_BYTE *)v0 + 8),
                         *((_QWORD *)v2 - 3),
                         (__int64)&v13,
                         v7,
                         (__int64)v3 + v7 * *((_DWORD *)v2 + 2) + *(_QWORD *)v2,
                         *((_DWORD *)v2 + 2),
                         0,
                         1);
        if ( (v5 & v4[v9]) != 0 )
          LOBYTE(v6) = sub_14085490C(
                         *((_BYTE *)v0 + 8),
                         *((_QWORD *)v2 - 3),
                         (__int64)&v13,
                         v7,
                         (__int64)v4 + v7 * *((_DWORD *)v2 + 2) + *(_QWORD *)v2,
                         *((_DWORD *)v2 + 2),
                         1,
                         1);
        ++HIBYTE(v13);
        ++v7;
        ++v9;
      }
      while ( v7 < v8 );
      v2 += 40;
      --v12;
    }
    while ( v12 );
    if ( v11 == byte_140C1D020 )
      break;
    v0 = (__int64 *)(qword_140C1D018 + 8624LL * v11);
  }
  return (char)v6;
}
