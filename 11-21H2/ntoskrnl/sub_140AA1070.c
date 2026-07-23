/*
 * XREFs of sub_140AA1070 @ 0x140AA1070
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

char __fastcall sub_140AA1070(LONG *a1, __int64 a2)
{
  char v2; // di
  char v4; // al
  unsigned int v5; // r9d
  char v6; // bl
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v4 = sub_14042A5E0(a1, a2);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    LOBYTE(v5) = v2 == 0;
    sub_140A97900(a1, 8, (__int64)KeGetCurrentThread(), v5, retaddr);
  }
  return v6;
}
