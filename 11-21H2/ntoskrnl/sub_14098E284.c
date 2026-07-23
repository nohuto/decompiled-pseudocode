/*
 * XREFs of sub_14098E284 @ 0x14098E284
 * Callers:
 *     sub_14098E51C @ 0x14098E51C (sub_14098E51C.c)
 *     sub_14098E79C @ 0x14098E79C (sub_14098E79C.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 */

char __fastcall sub_14098E284(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  char v3; // r14
  _WORD *v4; // rsi
  char v6; // r11
  char v7; // dl
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (_WORD *)*((_QWORD *)a1 + 1);
  v9 = 0LL;
  if ( (int)sub_1402DCD64(v4, a3, &v9) >= 0 )
  {
    v7 = v6;
    if ( *a1 != v9 )
      return 0;
    return v7;
  }
  return v3;
}
