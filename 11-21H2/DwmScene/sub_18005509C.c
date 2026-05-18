/*
 * XREFs of sub_18005509C @ 0x18005509C
 * Callers:
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18005509C(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    sub_180010910(v1 + 88);
    result = sub_180010910(v1 + 64);
    v4 = *(_QWORD *)(v1 + 56);
    if ( v4 >= 0x10 )
      result = sub_180010884(*(char **)(v1 + 32), v4 + 1);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 15LL;
    *(_BYTE *)(v1 + 32) = 0;
    if ( *(_QWORD *)(a1 + 8) )
      return sub_180010884(*(char **)(a1 + 8), 0x68uLL);
  }
  return result;
}
