/*
 * XREFs of sub_14022E984 @ 0x14022E984
 * Callers:
 *     sub_14022E800 @ 0x14022E800 (sub_14022E800.c)
 *     sub_14022E848 @ 0x14022E848 (sub_14022E848.c)
 *     sub_14029B804 @ 0x14029B804 (sub_14029B804.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14022E984(__int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 result; // rax

  if ( *(__int64 *)(a1 + 520) >= 0 && (a2 & 6) == 4 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = _mm_getcsr();
    result = a2;
    _xrstor((void *)a1, a2);
    *(_DWORD *)(a1 + 24) = v2;
  }
  else
  {
    result = a2;
    _xrstor((void *)a1, a2);
  }
  return result;
}
