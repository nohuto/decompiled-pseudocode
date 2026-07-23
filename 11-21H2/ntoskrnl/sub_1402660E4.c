/*
 * XREFs of sub_1402660E4 @ 0x1402660E4
 * Callers:
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1405C32E4 @ 0x1405C32E4 (sub_1405C32E4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1402660E4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v7; // rdx
  __int64 *result; // rax
  __int64 v9; // rcx
  __int64 **v10; // r8

  v4 = *(_DWORD *)(a1 + 12) % *(_DWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 12);
  v7 = 48LL * v4;
  result = (__int64 *)(48 * a2 - 0x220000000000LL);
  v9 = v7 + a1 + 120;
  v10 = *(__int64 ***)(v9 + 8);
  if ( *v10 != (__int64 *)v9 )
    __fastfail(3u);
  *result = v9;
  result[1] = (__int64)v10;
  *v10 = result;
  *(_QWORD *)(v9 + 8) = result;
  *(_QWORD *)(v7 + a1 + 112) += a3;
  *(_QWORD *)(a1 + 16) += a3;
  return result;
}
