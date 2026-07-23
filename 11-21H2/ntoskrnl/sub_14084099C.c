/*
 * XREFs of sub_14084099C @ 0x14084099C
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 * Callees:
 *     sub_1408409F4 @ 0x1408409F4 (sub_1408409F4.c)
 */

__int64 __fastcall sub_14084099C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v4; // si
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = 0LL;
  v4 = *(_DWORD *)(a1 + 52) != 0;
  LOBYTE(a2) = v4;
  for ( result = sub_1408409F4(a1, a2); (unsigned int)v2 < *(_DWORD *)(a1 + 52); v2 = (unsigned int)(v2 + 1) )
  {
    LOBYTE(v6) = v4;
    result = sub_1408409F4(*(_QWORD *)(a1 + 8 * v2 + 1048), v6);
  }
  return result;
}
