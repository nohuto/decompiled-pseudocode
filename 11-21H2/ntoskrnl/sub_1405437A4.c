/*
 * XREFs of sub_1405437A4 @ 0x1405437A4
 * Callers:
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 * Callees:
 *     sub_1403BF6EC @ 0x1403BF6EC (sub_1403BF6EC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14054C654 @ 0x14054C654 (sub_14054C654.c)
 */

__int64 __fastcall sub_1405437A4(char a1)
{
  __int64 result; // rax
  int v2; // eax

  result = dword_140D06A28;
  dword_140D0689C = dword_140D06A28;
  if ( a1 == 1 )
  {
    result = dword_140D0688C;
    if ( (dword_140D0688C & 2) == 0 )
    {
      v2 = sub_1403BF6EC(0LL);
      if ( v2 < 0 )
        KeBugCheckEx(0x20001u, v2, 0LL, 0LL, 0LL);
      result = sub_14054C654(0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x20001u, (int)result, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
