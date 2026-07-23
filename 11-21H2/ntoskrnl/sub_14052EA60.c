/*
 * XREFs of sub_14052EA60 @ 0x14052EA60
 * Callers:
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 *     sub_14052E9A8 @ 0x14052E9A8 (sub_14052E9A8.c)
 *     sub_14052FEA0 @ 0x14052FEA0 (sub_14052FEA0.c)
 *     sub_1405300A8 @ 0x1405300A8 (sub_1405300A8.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_14052EA60(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 **v3; // rcx
  __int64 *i; // rax

  v2 = 0LL;
  v3 = (__int64 **)(a1 + 56);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 10) == a2 )
      return i;
  }
  return (__int64 *)v2;
}
