/*
 * XREFs of sub_18009161C @ 0x18009161C
 * Callers:
 *     sub_180093838 @ 0x180093838 (sub_180093838.c)
 * Callees:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 */

__int64 __fastcall sub_18009161C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180091F90(a1, a2, 5LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
