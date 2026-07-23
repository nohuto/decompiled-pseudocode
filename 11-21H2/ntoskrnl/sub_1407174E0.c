/*
 * XREFs of sub_1407174E0 @ 0x1407174E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

char __fastcall sub_1407174E0(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rcx

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  v6 = sub_14071B350(0LL);
  if ( v6 )
  {
    do
    {
      v7 = -1LL;
      if ( (*(_DWORD *)(v6 + 160) & 3) == 0 )
      {
        if ( *(_DWORD *)(v6 + 104) || *(_BYTE *)(v6 + 195) )
        {
          v13 = sub_1402F5718();
          v14 = *(_QWORD *)(v6 + 4136) + 10000000LL * (unsigned int)dword_140C01A50;
          if ( v13 >= v14 )
          {
            if ( (int)sub_1406885A4(v6, 0x12u) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v7 = 10000000LL * (unsigned int)dword_140C01A5C;
            }
          }
          else
          {
            v3 = 1;
            v7 = v14 - v13;
          }
        }
        else if ( (*(_DWORD *)(v6 + 4224) & 1) == 0 )
        {
          sub_1406885A4(v6, 0x22u);
        }
      }
      if ( *(_BYTE *)(v6 + 2944) == 1 )
      {
        sub_1406893EC();
        sub_140689388(0);
        if ( *(_BYTE *)(v6 + 2944) == 1 )
          sub_1406CE3EC(v6);
        sub_140AB4260(v10, v9, v11, v12);
        sub_14068934C();
      }
      if ( v7 >= v2 )
        v7 = v2;
      v2 = v7;
      v6 = sub_14071B350(v6);
    }
    while ( v6 );
    if ( v3 )
      *a2 = v7;
  }
  return v3;
}
