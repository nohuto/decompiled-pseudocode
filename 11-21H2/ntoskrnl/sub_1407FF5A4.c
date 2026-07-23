/*
 * XREFs of sub_1407FF5A4 @ 0x1407FF5A4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 */

__int64 __fastcall sub_1407FF5A4(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // r10d
  char v8; // r9
  int v9; // r11d
  unsigned int v10; // r10d
  __int64 v11; // rcx

  v5 = 0;
  if ( dword_140C03A00 && sub_1402A2000((__int64)&dword_140C03A00, 0x800000000000LL) )
  {
    if ( (unsigned int)(v9 - 4) <= 2 )
    {
      v11 = 2LL;
      LOBYTE(v5) = v9 == 5;
      v10 = v5 + 1;
      return (unsigned int)sub_14081B500(v11, v10);
    }
    if ( (unsigned int)(v9 - 2) <= 1 )
    {
      v10 = 4;
      v11 = 4 - (unsigned int)(a5 != 0);
      if ( a3 == 5 || v9 == 3 )
      {
        if ( (v8 & 8) != 0 )
        {
          v10 = 3;
        }
        else
        {
          v10 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v10 = 8;
        }
      }
      return (unsigned int)sub_14081B500(v11, v10);
    }
  }
  return v5;
}
