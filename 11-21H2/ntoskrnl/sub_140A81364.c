/*
 * XREFs of sub_140A81364 @ 0x140A81364
 * Callers:
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 * Callees:
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 *     sub_1405970A0 @ 0x1405970A0 (sub_1405970A0.c)
 */

char *sub_140A81364()
{
  char *result; // rax
  char v1; // bl
  BOOL v2; // edi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  result = (char *)MEMORY[0xFFFFF78000000320];
  if ( (MEMORY[0xFFFFF78000000320] & dword_140C0CFEC) == 0 )
  {
    result = (char *)sub_1402AB970((__int64)&v3, (__int64)&v4);
    if ( (_BYTE)result )
    {
      result = &sub_14041FAB0()[-v3];
      if ( (unsigned __int64)result > 0x1A30 )
      {
        ++dword_140C29FE0;
        v1 = dword_140C0CFE8;
        v2 = dword_140C0CFE8 < 0;
        if ( (dword_140C0CFE8 & 1) != 0 )
        {
          result = (char *)sub_1405970A0(0, dword_140C0CFE8 < 0);
          if ( (_DWORD)result )
            ++dword_140C29FE4;
        }
        if ( (v1 & 2) != 0 )
        {
          result = (char *)sub_1405970A0(1, v2);
          if ( (_DWORD)result )
            ++dword_140C2A000;
        }
        if ( (v1 & 4) != 0 )
        {
          result = (char *)sub_1405970A0(2, v2);
          if ( (_DWORD)result )
            ++dword_140C2A03C;
        }
      }
    }
  }
  return result;
}
