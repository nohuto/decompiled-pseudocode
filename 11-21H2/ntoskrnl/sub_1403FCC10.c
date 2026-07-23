/*
 * XREFs of sub_1403FCC10 @ 0x1403FCC10
 * Callers:
 *     sub_1403FB308 @ 0x1403FB308 (sub_1403FB308.c)
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     sub_1403FB460 @ 0x1403FB460 (sub_1403FB460.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 */

__int64 __fastcall sub_1403FCC10(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ecx
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *a1;
  *((_BYTE *)a1 + v3 + 32) = 0x80;
  v5 = v3 + 1;
  if ( v5 > 0x38 )
  {
    sub_1403FDDE8((char *)a1 + v5 + 32, 64 - v5);
    sub_1403FB460((__int64)(a1 + 24), (__int64)(a1 + 8), 64LL, (__int64)&v10);
    v5 = 0;
  }
  sub_1403FDDE8((char *)a1 + v5 + 32, 64 - v5);
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  sub_1403FB460((__int64)(a1 + 24), (__int64)(a1 + 8), 64LL, (__int64)&v10);
  v6 = (__int64 *)(a1 + 24);
  v7 = 4LL;
  do
  {
    v8 = *v6++;
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  result = sub_1403FDDE8(a1, 128LL);
  *((_OWORD *)a1 + 6) = xmmword_140013F98;
  *((_OWORD *)a1 + 7) = xmmword_140013FA8;
  return result;
}
