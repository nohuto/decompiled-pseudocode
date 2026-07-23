/*
 * XREFs of sub_140863E64 @ 0x140863E64
 * Callers:
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140863E64(__int64 a1)
{
  __int64 *result; // rax

  if ( (_UNKNOWN *)a1 == &unk_140D32580 )
  {
    qword_140D837C0 = 81920LL;
    qword_140D423C0 = (__int64)qword_140D6F7C0;
    result = &qword_140D423C0;
    *(_QWORD *)(a1 + 904) = &qword_140D423C0;
  }
  else
  {
    result = *(__int64 **)(a1 + 904);
  }
  *((_DWORD *)result + 11758) = -1;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 11747) = 0;
  result[5855] = 0LL;
  result[5878] = 0LL;
  return result;
}
