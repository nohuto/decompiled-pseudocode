/*
 * XREFs of sub_140862FD8 @ 0x140862FD8
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140862FD8(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  if ( a2 == 16 )
  {
    DWORD1(v5) = 0;
    LOBYTE(v5) = byte_140D0688B != 0;
    BYTE1(v5) = (dword_140D068B8 & 8) != 0;
    BYTE2(v5) = (dword_140D0688C & 0x1000) != 0;
    BYTE3(v5) = dword_140D06AD4;
    *((_QWORD *)&v5 + 1) = (unsigned int)dword_140D0689C;
    result = 0LL;
    *a1 = v5;
    *a4 = 16;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
