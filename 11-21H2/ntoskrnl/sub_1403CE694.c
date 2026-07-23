/*
 * XREFs of sub_1403CE694 @ 0x1403CE694
 * Callers:
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_1403CE694(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v6; // r10
  unsigned __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(a1 + 33) )
    return sub_14042A5E0(v4, a3);
  sub_14042A5E0(v4, a2);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    result = -*(_QWORD *)(a1 + 8) * (unsigned __int64)*(unsigned __int8 *)(a1 + 35) / -v6;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    result = *(unsigned int *)(a1 + 24);
  }
  *a3 = result;
  return result;
}
