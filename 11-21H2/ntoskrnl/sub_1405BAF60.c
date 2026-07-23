/*
 * XREFs of sub_1405BAF60 @ 0x1405BAF60
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 * Callees:
 *     sub_14026C0E4 @ 0x14026C0E4 (sub_14026C0E4.c)
 *     sub_1405BACCC @ 0x1405BACCC (sub_1405BACCC.c)
 */

__int64 __fastcall sub_1405BAF60(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    result = sub_14026C0E4(v2);
  v4 = (__int64 *)(a1 + 8);
  v5 = 3LL;
  do
  {
    if ( *v4 != -1 )
      result = sub_1405BACCC(v2, *v4);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
