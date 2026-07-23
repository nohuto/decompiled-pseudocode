/*
 * XREFs of sub_14027B334 @ 0x14027B334
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 * Callees:
 *     sub_14027B3C0 @ 0x14027B3C0 (sub_14027B3C0.c)
 */

__int64 __fastcall sub_14027B334(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a5 + 24);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a6 + 1232);
  *(_DWORD *)(a1 + 60) = a3;
  if ( (xmmword_140D06900 & 0x2000) != 0 )
    sub_14027B3C0(a1, 0x2000LL, *(_QWORD *)(*(_QWORD *)(a6 + 544) + 2160LL));
  else
    *(_OWORD *)a1 = 0LL;
  result = (unsigned int)dword_140CF5E54;
  if ( (dword_140CF5E54 & 1) != 0 )
  {
    result = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(a1 + 64) = MEMORY[0xFFFFF78000000320];
  }
  else
  {
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
