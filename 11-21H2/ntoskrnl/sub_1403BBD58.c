/*
 * XREFs of sub_1403BBD58 @ 0x1403BBD58
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_1403DD4C8 @ 0x1403DD4C8 (sub_1403DD4C8.c)
 */

ULONG_PTR *sub_1403BBD58()
{
  int v0; // edi
  ULONG_PTR *v1; // rax
  ULONG_PTR *v2; // rbx
  ULONG_PTR *v3; // rcx
  ULONG_PTR *v4; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v0 = 11;
  while ( 1 )
  {
    while ( 1 )
    {
      v1 = sub_1403ACEFC(v0, 163872, 0, 0, 4);
      v2 = v1;
      if ( v1 )
        break;
      if ( !v0 )
        goto LABEL_5;
      v0 = 0;
    }
    if ( v1[24] )
    {
      sub_1403DD4C8(v1, &v7, &v6);
      if ( v7 >= 0x11E1A300 && (v7 >= 0xB2D05E00 || *((_DWORD *)v2 + 57) != 8 && (v2[28] & 0x80000) != 0) )
        break;
    }
  }
LABEL_5:
  v3 = (ULONG_PTR *)qword_140C4E4E0;
  while ( v3 != &qword_140C4E4E0 )
  {
    v4 = v3;
    v3 = (ULONG_PTR *)*v3;
    *((_DWORD *)v4 + 46) &= ~0x100u;
  }
  return v2;
}
