/*
 * XREFs of sub_1406373B8 @ 0x1406373B8
 * Callers:
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 * Callees:
 *     sub_1409F1A28 @ 0x1409F1A28 (sub_1409F1A28.c)
 */

__int64 __fastcall sub_1406373B8(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a2 + 48) = a3;
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 124);
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 128);
      return sub_1409F1A28(a1, a3);
    }
  }
  return result;
}
