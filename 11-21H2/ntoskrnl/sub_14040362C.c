/*
 * XREFs of sub_14040362C @ 0x14040362C
 * Callers:
 *     sub_140401E3C @ 0x140401E3C (sub_140401E3C.c)
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_140401FB0 @ 0x140401FB0 (sub_140401FB0.c)
 */

__int64 __fastcall sub_14040362C(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = *a1;
  *((_BYTE *)a1 + v3 + 32) = 0x80;
  v5 = v3 + 1;
  if ( v5 > 0x70 )
  {
    sub_1403FDDE8((__int64)a1 + v5 + 32, 128 - v5);
    sub_140401FB0((__int64 *)a1 + 20, (__int64)(a1 + 8), 0x80uLL, &v11);
    v5 = 0;
  }
  sub_1403FDDE8((__int64)a1 + v5 + 32, 128 - v5);
  v6 = 8LL * *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 18) = _byteswap_uint64((*((_QWORD *)a1 + 2) >> 61) + 8LL * *((_QWORD *)a1 + 3));
  *((_QWORD *)a1 + 19) = _byteswap_uint64(v6);
  sub_140401FB0((__int64 *)a1 + 20, (__int64)(a1 + 8), 0x80uLL, &v11);
  v7 = (unsigned __int64 *)(a1 + 40);
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *a2++ = _byteswap_uint64(v9);
    --v8;
  }
  while ( v8 );
  result = sub_1403FDDE8((__int64)a1, 0xE0uLL);
  *((_OWORD *)a1 + 10) = xmmword_140014810;
  *((_OWORD *)a1 + 11) = xmmword_140014820;
  *((_OWORD *)a1 + 12) = xmmword_140014830;
  *((_OWORD *)a1 + 13) = xmmword_140014840;
  return result;
}
