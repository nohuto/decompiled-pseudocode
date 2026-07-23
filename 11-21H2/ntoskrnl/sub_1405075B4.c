/*
 * XREFs of sub_1405075B4 @ 0x1405075B4
 * Callers:
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 * Callees:
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 */

unsigned __int64 __fastcall sub_1405075B4(int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  unsigned __int64 result; // rax

  v5 = sub_1403AAB1C(a3, a2);
  result = __rdtsc();
  if ( result - *(_QWORD *)(v5 + 152) <= 0xBEBC200 && *(_DWORD *)(v5 + 132) == a1 && *(_QWORD *)(v5 + 136) == a2 )
  {
    if ( ++*(_DWORD *)(v5 + 144) > 3u )
      __wbinvd();
  }
  else
  {
    *(_DWORD *)(v5 + 132) = a1;
    *(_QWORD *)(v5 + 136) = a2;
    *(_DWORD *)(v5 + 144) = 1;
  }
  *(_QWORD *)(v5 + 152) = result;
  return result;
}
