/*
 * XREFs of sub_1800DE720 @ 0x1800DE720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DD308 @ 0x1800DD308 (sub_1800DD308.c)
 */

char __fastcall sub_1800DE720(__int64 a1, _QWORD *a2, char a3)
{
  int v4; // eax
  char v5; // dl
  char v7; // [rsp+48h] [rbp+20h] BYREF

  v4 = sub_1800DD308(a1, a2, &v7);
  v5 = a3;
  if ( !v4 )
    return v7;
  return v5;
}
