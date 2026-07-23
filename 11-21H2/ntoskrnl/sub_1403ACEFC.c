/*
 * XREFs of sub_1403ACEFC @ 0x1403ACEFC
 * Callers:
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 *     sub_1403BAA84 @ 0x1403BAA84 (sub_1403BAA84.c)
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_1403BB3F0 @ 0x1403BB3F0 (sub_1403BB3F0.c)
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 *     sub_1403BBD58 @ 0x1403BBD58 (sub_1403BBD58.c)
 *     sub_1403BBDD4 @ 0x1403BBDD4 (sub_1403BBDD4.c)
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 *     sub_1403BC6B8 @ 0x1403BC6B8 (sub_1403BC6B8.c)
 *     sub_1403BC758 @ 0x1403BC758 (sub_1403BC758.c)
 *     sub_1403BC848 @ 0x1403BC848 (sub_1403BC848.c)
 *     sub_1403BEB18 @ 0x1403BEB18 (sub_1403BEB18.c)
 *     sub_1403DD730 @ 0x1403DD730 (sub_1403DD730.c)
 *     sub_1403DDFB0 @ 0x1403DDFB0 (sub_1403DDFB0.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall sub_1403ACEFC(int a1, int a2, int a3, int a4, char a5)
{
  ULONG_PTR *v9; // r8
  ULONG_PTR *v10; // rdx
  ULONG_PTR *v11; // rbp
  ULONG_PTR *v12; // rbx
  ULONG_PTR *v13; // r9
  int v14; // eax
  int v15; // r11d
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rcx

  if ( !(_DWORD)dword_140C4E4FC )
    return 0LL;
  v9 = (ULONG_PTR *)qword_140C4E4E0;
  v10 = 0LL;
  while ( v9 != &qword_140C4E4E0 )
  {
    v11 = v9;
    v12 = v9;
    v13 = v9;
    v9 = (ULONG_PTR *)*v9;
    v14 = *((_DWORD *)v11 + 46);
    if ( ((v14 & 0x100) == 0 || (a5 & 4) == 0)
      && (v14 & 1) == 0
      && ((v14 & 4) == 0 || (a5 & 1) != 0)
      && (!a1 || a1 == *((_DWORD *)v13 + 57)) )
    {
      v15 = *((_DWORD *)v13 + 56);
      if ( (a2 & v15) == a2 && (v15 & a3) == 0 && (!a4 || (v15 & a4) != 0) )
      {
        if ( v10 )
        {
          v17 = v11[24];
          v18 = v10[24];
          if ( (a5 & 2) != 0 )
          {
            if ( v17 >= v18 )
              v12 = v10;
            v10 = v12;
          }
          else if ( v17 > v18 )
          {
            v10 = v13;
          }
        }
        else
        {
          v10 = v13;
        }
      }
    }
  }
  if ( (a5 & 4) != 0 && v10 )
    *((_DWORD *)v10 + 46) |= 0x100u;
  return v10;
}
