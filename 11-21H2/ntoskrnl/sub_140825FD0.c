/*
 * XREFs of sub_140825FD0 @ 0x140825FD0
 * Callers:
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140825FD0(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)&qword_140D00AC0 + 8LL * a2 + 248), a3);
  return v3;
}
