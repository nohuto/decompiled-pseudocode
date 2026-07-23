/*
 * XREFs of sub_1402A1E18 @ 0x1402A1E18
 * Callers:
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 * Callees:
 *     sub_1402A1EB0 @ 0x1402A1EB0 (sub_1402A1EB0.c)
 */

__int64 __fastcall sub_1402A1E18(char a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v6; // bl
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r11
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  sub_1402A1EB0(&v11, a3 + 16, 8LL);
  v6 = a1 + 2;
  if ( v6 < a2 )
  {
    v7 = a3 + 16LL * v6;
    v8 = (unsigned __int8)(a2 - v6);
    do
    {
      sub_1402A1EB0(&v11, *(_QWORD *)v7, *(unsigned int *)(v7 + 8));
      v7 = v9 + 16;
      --v8;
    }
    while ( v8 );
  }
  return 32769 * ((9 * v11) ^ ((unsigned int)(9 * v11) >> 11));
}
