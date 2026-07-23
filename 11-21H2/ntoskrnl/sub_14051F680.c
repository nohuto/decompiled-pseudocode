/*
 * XREFs of sub_14051F680 @ 0x14051F680
 * Callers:
 *     <none>
 * Callees:
 *     sub_14045951C @ 0x14045951C (sub_14045951C.c)
 */

char __fastcall sub_14051F680(unsigned __int64 a1, _WORD *a2, _BYTE *a3, _BYTE *a4, _BYTE *a5)
{
  char result; // al
  unsigned int v7; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  result = sub_14045951C(a1, a2, a3, &v8);
  if ( result )
  {
    v7 = v8 >> 5;
    *a4 = v8 & 0x1F;
    *a5 = v7 & 7;
  }
  return result;
}
