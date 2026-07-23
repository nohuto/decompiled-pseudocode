/*
 * XREFs of sub_1405C946C @ 0x1405C946C
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C946C(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  result = 0LL;
  v3 = (unsigned __int64 *)&unk_140D05670;
  while ( a2 >= *v3 )
  {
    result = (unsigned int)(result + 1);
    v3 += 3;
    if ( (unsigned int)result >= 0x1A )
    {
      ++*(_DWORD *)(a1 + 40);
      goto LABEL_9;
    }
  }
  result *= 32LL;
  *(_QWORD *)(result + a1 + 176) += a2;
  ++*(_DWORD *)(result + a1 + 200);
  if ( a2 < *(_QWORD *)(result + a1 + 184) )
    *(_QWORD *)(result + a1 + 184) = a2;
  if ( a2 > *(_QWORD *)(result + a1 + 192) )
    *(_QWORD *)(result + a1 + 192) = a2;
LABEL_9:
  if ( a2 < *(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = a2;
  return result;
}
