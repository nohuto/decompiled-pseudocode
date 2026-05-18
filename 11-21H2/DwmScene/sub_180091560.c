/*
 * XREFs of sub_180091560 @ 0x180091560
 * Callers:
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 * Callees:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 */

__int64 __fastcall sub_180091560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180091F90(a1, a2, 6LL);
  if ( *(_QWORD *)result != *(_QWORD *)a3 || *(_QWORD *)(result + 8) != *(_QWORD *)(a3 + 8) )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
