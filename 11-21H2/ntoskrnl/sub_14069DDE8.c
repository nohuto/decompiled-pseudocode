/*
 * XREFs of sub_14069DDE8 @ 0x14069DDE8
 * Callers:
 *     sub_14069DD40 @ 0x14069DD40 (sub_14069DD40.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_14098EE60 @ 0x14098EE60 (sub_14098EE60.c)
 * Callees:
 *     sub_1402246C0 @ 0x1402246C0 (sub_1402246C0.c)
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224EDC @ 0x140224EDC (sub_140224EDC.c)
 *     sub_140224F04 @ 0x140224F04 (sub_140224F04.c)
 *     sub_14069DFF4 @ 0x14069DFF4 (sub_14069DFF4.c)
 */

void __fastcall sub_14069DDE8(char a1)
{
  __int64 v1; // rbx
  char v2; // bp
  char v3; // r15
  char v4; // r14
  char v5; // di
  int v6; // esi
  unsigned int v7; // edx
  int *v8; // r8
  char v9; // r9
  __int64 v10; // r10
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  char v14; // al
  int v15; // eax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = qword_140D06970;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  if ( (__int64 *)qword_140D06970 == &qword_140D06970 )
  {
    if ( byte_140D06990 )
    {
      v5 = 1;
      v15 = 0;
    }
    else
    {
      v5 = 0;
      v15 = 128;
    }
    v17 = v15;
  }
  else
  {
    v5 = 0;
    v17 = 0;
    v6 = 0;
    do
    {
      if ( sub_140224F04(v1) )
        v3 = 1;
      if ( (*(_BYTE *)(v1 + 700) & 0xF) == 0 )
        v4 = 1;
      if ( *(_BYTE *)(v1 + 724) )
      {
        v5 = 1;
      }
      else
      {
        v7 = 0;
        v8 = (int *)(v1 + 692);
        v9 = 1;
        v10 = 5LL;
        do
        {
          v11 = *v8;
          v12 = *v8++;
          v7 |= v11;
          v9 = (v12 & 2) != 0 ? v9 : 0;
          --v10;
        }
        while ( v10 );
        v13 = v7 & 0xFFFFFFFD;
        if ( v9 )
          v13 = v7;
        v6 |= v13;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &qword_140D06970 );
    v2 = a1;
    if ( v5 )
      v6 = 0;
    v17 = v6;
  }
  v14 = sub_1402246C0(&v17);
  byte_140C23B18 = v4;
  if ( v5 != byte_140D068E1 )
  {
    byte_140D068E1 = v5;
    v2 = 1;
    goto LABEL_19;
  }
  if ( v14 )
LABEL_19:
    sub_14069DFF4(0LL);
  if ( v3 || v2 )
  {
    sub_140224EDC();
    sub_14022475C((v2 != 0) + 1);
  }
  else
  {
    sub_140224C00(&qword_140C22FE0);
  }
}
