/*
 * XREFs of sub_1405ECE9C @ 0x1405ECE9C
 * Callers:
 *     sub_1409BBF5C @ 0x1409BBF5C (sub_1409BBF5C.c)
 *     sub_1409BC59C @ 0x1409BC59C (sub_1409BC59C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405ECE9C(int a1, int a2, char a3)
{
  int v3; // r9d
  int v4; // r8d
  int i; // r8d

  v3 = 0;
  if ( a3 )
    v4 = a1 / 700;
  else
    v4 = a1 / 2;
  for ( i = v4 / a2 + v4; i > 455; i /= 0x23u )
    v3 += 36;
  return (unsigned int)(v3 + 36 * i / (i + 38));
}
