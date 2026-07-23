/*
 * XREFs of sub_14082BCA0 @ 0x14082BCA0
 * Callers:
 *     sub_1403C3BF8 @ 0x1403C3BF8 (sub_1403C3BF8.c)
 * Callees:
 *     sub_14025E85C @ 0x14025E85C (sub_14025E85C.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 *     sub_140B0673C @ 0x140B0673C (sub_140B0673C.c)
 */

__int64 __fastcall sub_14082BCA0(ULONG_PTR *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = a1 + 223;
  v3 = 4LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0LL;
  a1[240] = (ULONG_PTR)(a1 + 239);
  a1[239] = (ULONG_PTR)(a1 + 239);
  a1[244] = (ULONG_PTR)(a1 + 243);
  a1[243] = (ULONG_PTR)(a1 + 243);
  if ( a1 != &StartContext )
    return sub_1407F35F8(a1, (__int64)(a1 + 2128), 2, v4);
  qword_140C51C30 = 0LL;
  byte_140C53638 = byte_140C53638 & 0xF8 | 2;
  v5 = sub_14025E85C(3);
  if ( (unsigned int)sub_140B0673C(8LL, v5, 0x100000000000LL) )
  {
    v4 = 0x100000000LL;
    return sub_1407F35F8(a1, (__int64)(a1 + 2128), 2, v4);
  }
  return 0LL;
}
