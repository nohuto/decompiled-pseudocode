/*
 * XREFs of sub_1405CFAF4 @ 0x1405CFAF4
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 * Callees:
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 */

__int64 __fastcall sub_1405CFAF4(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a1 )
  {
    if ( a3 )
    {
      if ( a2 > a1 )
        return a1 / 0x3E8 + 1;
    }
    else if ( MEMORY[0xFFFFF78000000008] - qword_140C238A0 >= 10000000 * (unsigned __int64)(unsigned int)dword_140C0C800 )
    {
      sub_1402D6254(32);
      sub_1402D62A8();
    }
  }
  return v3;
}
