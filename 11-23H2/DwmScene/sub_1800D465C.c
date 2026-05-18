/*
 * XREFs of sub_1800D465C @ 0x1800D465C
 * Callers:
 *     sub_1800D3ACC @ 0x1800D3ACC (sub_1800D3ACC.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1800D55C0 @ 0x1800D55C0 (sub_1800D55C0.c)
 *     sub_1800D7480 @ 0x1800D7480 (sub_1800D7480.c)
 *     sub_1800D7720 @ 0x1800D7720 (sub_1800D7720.c)
 *     sub_1800D79D0 @ 0x1800D79D0 (sub_1800D79D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D465C(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v1 )
    return (unsigned int)(*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
  else
    return v1 - *(_QWORD *)a1;
}
