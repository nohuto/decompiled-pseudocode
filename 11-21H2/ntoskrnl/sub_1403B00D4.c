/*
 * XREFs of sub_1403B00D4 @ 0x1403B00D4
 * Callers:
 *     sub_1403AFE88 @ 0x1403AFE88 (sub_1403AFE88.c)
 *     sub_14085F318 @ 0x14085F318 (sub_14085F318.c)
 * Callees:
 *     sub_1403B0158 @ 0x1403B0158 (sub_1403B0158.c)
 */

__int64 __fastcall sub_1403B00D4(char a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v7; // eax
  char v8; // cl
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v5 = 0;
  if ( byte_140C2AD48 && a3 )
  {
    v10 = 0;
    v7 = sub_1403B0158(a5, &v10);
    v8 = v10;
    if ( v7 < 0 )
      v8 = 0;
    if ( v8 )
    {
      if ( (dword_140C2AC28 & 1) != 0 && !a4 )
        return 1;
      if ( a4 != 1 )
        return v5;
      if ( (((unsigned int)dword_140C2AC28 >> 1) & 1) != 0 )
        return 1;
      if ( (dword_140C2AC28 & 1) != 0 )
        return 2;
    }
  }
  return v5;
}
