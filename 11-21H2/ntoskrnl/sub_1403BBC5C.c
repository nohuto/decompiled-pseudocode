/*
 * XREFs of sub_1403BBC5C @ 0x1403BBC5C
 * Callers:
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 * Callees:
 *     RtlUdiv128 @ 0x1403BBCE0 (RtlUdiv128.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BBC5C()
{
  void *v0; // rax
  _QWORD *v1; // rbx
  ULONG_PTR v2; // r8

  if ( *(_DWORD *)(qword_140C4E390 + 228) != 5 )
    return 0LL;
  v0 = (void *)sub_1403BF104(4096LL, 1LL);
  Address = v0;
  v1 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0x1000uLL);
    v2 = qword_140C4E390;
    *(_DWORD *)v1 = 1416388936;
    v1[1] = RtlUdiv128(10000000LL, 0LL, *(_QWORD *)(v2 + 192), 0LL);
    return 0LL;
  }
  return 3221225626LL;
}
