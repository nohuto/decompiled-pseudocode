/*
 * XREFs of sub_140AB315C @ 0x140AB315C
 * Callers:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB2008 @ 0x140AB2008 (sub_140AB2008.c)
 *     sub_140AB32D4 @ 0x140AB32D4 (sub_140AB32D4.c)
 */

__int64 __fastcall sub_140AB315C(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v6; // ebx
  _BYTE *v7; // r10
  char v8; // r11
  unsigned __int8 v9; // dl
  char *v10; // r8
  char *v11; // rdi

  if ( a2 )
  {
    v6 = a3 & 8;
    v7 = (_BYTE *)sub_140AB32D4(a1, a2, a3 & 7, *(_BYTE *)(a1 + 25) & 1, 1);
    v9 = *(_BYTE *)(a1 + 1) >> 3;
    v10 = *(char **)(*(_QWORD *)(a2 + 8) + 152LL);
    v11 = &v10[-v9];
    if ( v6 )
      v11 = &v10[v9];
    else
      v10 -= v9;
    result = sub_140AB2008(a2, v7, v10, *(_BYTE *)(a2 + 16), 0, v9, v8);
    if ( (int)result >= 0 )
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) = v11;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1) != 16 )
      *(_BYTE *)(a1 + 1) = 64;
    return 0LL;
  }
  return result;
}
