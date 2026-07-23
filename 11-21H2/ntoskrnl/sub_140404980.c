/*
 * XREFs of sub_140404980 @ 0x140404980
 * Callers:
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_140403790 @ 0x140403790 (sub_140403790.c)
 *     sub_140404950 @ 0x140404950 (sub_140404950.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140404980(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int *v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *a1;
  v5 = a1 + 24;
  *((_BYTE *)a1 + v3 + 32) = 0x80;
  v6 = v3 + 1;
  if ( v6 > 0x38 )
  {
    memset((char *)a1 + v6 + 32, 0, 64 - v6);
    sub_140403790((int *)a1 + 24, (__int64)(a1 + 8), 0x40uLL, &v10);
    v6 = 0;
  }
  memset((char *)a1 + v6 + 32, 0, 64 - v6);
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  sub_140403790((int *)a1 + 24, (__int64)(a1 + 8), 0x40uLL, &v10);
  v7 = 2LL;
  do
  {
    v8 = *(_QWORD *)v5;
    v5 += 2;
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  *(_DWORD *)a2 = _byteswap_ulong(*v5);
  sub_1403FDDE8((__int64)a1, 0x80uLL);
  return sub_140404950((__int64)a1);
}
