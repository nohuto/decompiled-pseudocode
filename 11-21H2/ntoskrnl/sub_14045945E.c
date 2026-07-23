/*
 * XREFs of sub_14045945E @ 0x14045945E
 * Callers:
 *     sub_1404595D0 @ 0x1404595D0 (sub_1404595D0.c)
 * Callees:
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 *     sub_14045951C @ 0x14045951C (sub_14045951C.c)
 */

char __fastcall sub_14045945E(char a1, __int16 a2, __int64 a3, void *a4, unsigned int a5, unsigned int *a6)
{
  unsigned int v9; // edi
  char result; // al
  unsigned __int8 v11[4]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v12; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v13; // [rsp+48h] [rbp-8h] BYREF

  v11[0] = 0;
  v12 = 0;
  v13 = 0;
  if ( !(unsigned __int8)sub_14045951C(a3, &v12, v11, &v13) )
    return 0;
  v9 = a2 & 0xFFF;
  if ( a1 )
  {
    ++dword_140C4A850;
    sub_14023AB60((unsigned int *)v12, v11[0], v13, a4, v9, a5, 1);
  }
  else
  {
    ++dword_140C4A864;
    sub_14023AB60((unsigned int *)v12, v11[0], v13, a4, v9, a5, 0);
  }
  result = 1;
  *a6 = a5;
  return result;
}
