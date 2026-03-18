/*
 * XREFs of or_first_2_wide_rotated_need_last @ 0x1C0146C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall or_first_2_wide_rotated_need_last(int a1, char a2, int a3, char *a4, _BYTE *a5)
{
  char *v6; // r11
  __int64 v7; // rsi
  char v8; // bl
  char v10; // dl
  unsigned __int8 v11; // r8
  char result; // al

  v6 = &a4[2 * a1];
  v7 = a3;
  v8 = 8 - a2;
  do
  {
    v10 = *a4;
    v11 = a4[1];
    result = (unsigned __int8)*a4 >> a2;
    a4 += 2;
    *a5 |= result;
    a5[1] = (v10 << v8) | (v11 >> a2);
    a5 += v7;
  }
  while ( a4 != v6 );
  return result;
}
