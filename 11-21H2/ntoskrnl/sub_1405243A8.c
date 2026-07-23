/*
 * XREFs of sub_1405243A8 @ 0x1405243A8
 * Callers:
 *     sub_1403DA174 @ 0x1403DA174 (sub_1403DA174.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 */

__int64 __fastcall sub_1405243A8(__int64 a1, int a2, char a3, char a4)
{
  int v7; // ebp
  __int64 result; // rax
  __int64 *v9; // rcx

  v7 = a1;
  result = sub_1403B1F04(a1, 32LL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 16) = v7;
    *(_DWORD *)(result + 20) = a2;
    *(_BYTE *)(result + 26) = a3;
    *(_BYTE *)(result + 25) = a4;
    v9 = (__int64 *)qword_140C4A1A8;
    if ( *(__int64 **)qword_140C4A1A8 != &qword_140C4A1A0 )
      __fastfail(3u);
    *(_QWORD *)result = &qword_140C4A1A0;
    *(_QWORD *)(result + 8) = v9;
    *v9 = result;
    qword_140C4A1A8 = result;
  }
  return result;
}
