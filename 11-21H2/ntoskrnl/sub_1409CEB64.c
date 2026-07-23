/*
 * XREFs of sub_1409CEB64 @ 0x1409CEB64
 * Callers:
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     sub_1409CE94C @ 0x1409CE94C (sub_1409CE94C.c)
 */

__int64 __fastcall sub_1409CEB64(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 && *(_QWORD *)(a1 + 1096) )
  {
    result = sub_1409CE94C(*(unsigned int **)(a1 + 1096), &v6);
    v4 = result;
    if ( (int)result >= 0 )
    {
      v5 = v6;
      *(_DWORD *)(a2 + 200) |= 0x8000u;
      *(_QWORD *)(a2 + 1096) = v5;
      return v4;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 1096) = *(_QWORD *)(a1 + 1096);
    return 0LL;
  }
  return result;
}
