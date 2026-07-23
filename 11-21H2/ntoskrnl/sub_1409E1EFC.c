/*
 * XREFs of sub_1409E1EFC @ 0x1409E1EFC
 * Callers:
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 */

char sub_1409E1EFC()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v5; // ecx
  _OWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF

  LOBYTE(v0) = qword_140D05008;
  memset(v7, 0, sizeof(v7));
  DWORD1(v7[0]) = 8;
  v1 = *(_DWORD *)(qword_140D05008 + 4248);
  while ( _BitScanForward(&v5, v1) )
  {
    v1 &= v1 - 1;
    v2 = v5;
    v0 = 32LL * v5;
    v3 = v0 + qword_140D05008 + 4284;
    if ( v3 )
    {
      LODWORD(v0) = *(_DWORD *)(v3 + 20);
      if ( (v0 & 1) != 0 )
        LOBYTE(v0) = sub_140814360(
                       (int *)v7,
                       qword_140D05008,
                       *(unsigned __int8 *)(qword_140D05008 + 2 * v2 + 4232),
                       0,
                       0LL,
                       0);
    }
  }
  return v0;
}
