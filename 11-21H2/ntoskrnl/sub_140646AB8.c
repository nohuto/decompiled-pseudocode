/*
 * XREFs of sub_140646AB8 @ 0x140646AB8
 * Callers:
 *     sub_140646840 @ 0x140646840 (sub_140646840.c)
 * Callees:
 *     sub_140A0980C @ 0x140A0980C (sub_140A0980C.c)
 *     sub_140A098FC @ 0x140A098FC (sub_140A098FC.c)
 *     sub_140A0990C @ 0x140A0990C (sub_140A0990C.c)
 *     sub_140A09950 @ 0x140A09950 (sub_140A09950.c)
 *     sub_140A09B3C @ 0x140A09B3C (sub_140A09B3C.c)
 *     sub_140A09B84 @ 0x140A09B84 (sub_140A09B84.c)
 */

__int64 __fastcall sub_140646AB8(int a1, unsigned int a2, unsigned int *a3, unsigned int a4, int *a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  _DWORD *v17; // r8
  int v18; // r10d
  unsigned int v19; // edx
  unsigned int v21[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = 0;
  v6 = 0;
  v21[0] = 0;
  v7 = a1 - 1;
  if ( !v7 )
  {
    v16 = sub_140A098FC();
    v6 = v16 + 12;
    if ( v19 < v16 + 12 )
      goto LABEL_21;
    *v17 = v18;
    v17[2] = v16;
    v11 = sub_140A0990C(v21, v16, v17 + 3);
    v15 = v21[0];
    goto LABEL_23;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a4 < 4 )
      goto LABEL_16;
    v6 = 8;
    if ( a2 < 8 )
      goto LABEL_21;
    v14 = sub_140A09950(*a3, &v22);
    *a3 = v14;
    v11 = v14;
    if ( v14 )
      goto LABEL_24;
    v15 = v22;
LABEL_23:
    a3[1] = v15;
    goto LABEL_24;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a4 >= 8 )
    {
      v6 = 4;
      v13 = *a3;
      v22 = a3[1];
      if ( a2 >= 4 )
      {
        v12 = sub_140A09B84(v13, &v22);
        goto LABEL_14;
      }
      goto LABEL_21;
    }
LABEL_16:
    v11 = -1073741811;
    goto LABEL_24;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      v12 = sub_140A0980C();
      goto LABEL_14;
    }
LABEL_21:
    v11 = -1073741789;
    goto LABEL_24;
  }
  if ( v10 == 1 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      v12 = sub_140A09B3C();
LABEL_14:
      v11 = v12;
      *a3 = v12;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v11 = -1073741161;
LABEL_24:
  *a5 = v6;
  return v11;
}
