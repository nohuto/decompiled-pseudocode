/*
 * XREFs of sub_1405DD354 @ 0x1405DD354
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 */

__int64 __fastcall sub_1405DD354(int a1, int a2, unsigned int *a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned __int8 *v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r11
  unsigned __int8 *v15; // r9
  int v16; // eax
  char v17; // al

  if ( *((int *)KeGetCurrentPrcb() + 8456) >= 2 && (dword_140D0689C & 0x40000) == 0 )
    return 3221225473LL;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v7 = (unsigned __int8)byte_140C1CF31
     + a1
     - 1
     - ((unsigned int)(unsigned __int8)byte_140C1CF31 + a1 - 1) % (unsigned __int8)byte_140C1CF31;
  if ( v7 )
  {
    v8 = 0;
    if ( !dword_140C1CF34 )
      goto LABEL_11;
    v9 = (unsigned int)dword_140C1CF34;
    v10 = (unsigned __int8 *)(qword_140C1CF38 + 6);
    do
    {
      v11 = *v10;
      if ( (unsigned __int8)v11 > (unsigned __int8)byte_140C1CF31 )
        v8 += v11 - (unsigned __int8)byte_140C1CF31;
      v10 += 336;
      --v9;
    }
    while ( v9 );
    if ( v7 > v8 )
LABEL_11:
      v7 = v8;
  }
  v12 = (unsigned __int8)byte_140C1CF31
      + a2
      - 1
      - ((unsigned int)(unsigned __int8)byte_140C1CF31 + a2 - 1) % (unsigned __int8)byte_140C1CF31;
  if ( v12 )
  {
    v13 = 0;
    if ( !dword_140C1CF34 )
      goto LABEL_19;
    v14 = (unsigned int)dword_140C1CF34;
    v15 = (unsigned __int8 *)(qword_140C1CF38 + 6);
    do
    {
      v16 = *v15;
      if ( (unsigned __int8)v16 > (unsigned __int8)byte_140C1CF31 )
        v13 += v16 - (unsigned __int8)byte_140C1CF31;
      v15 += 336;
      --v14;
    }
    while ( v14 );
    if ( v12 > v13 )
LABEL_19:
      v12 = v13;
  }
  v17 = 0;
  if ( v7 != dword_140D01530 )
  {
    dword_140D01530 = v7;
    v17 = 1;
    dword_140D048E4 = 1;
  }
  if ( v12 == dword_140D01534 )
  {
    if ( !v17 )
    {
      sub_140224C00(&qword_140C22FE0);
      goto LABEL_27;
    }
  }
  else
  {
    dword_140D01534 = v12;
  }
  sub_1403CEDC4();
  sub_14081A3AC();
  sub_14022475C(4u);
LABEL_27:
  *a3 = v7;
  return 0LL;
}
