/*
 * XREFs of sub_140A1530C @ 0x140A1530C
 * Callers:
 *     sub_140A15148 @ 0x140A15148 (sub_140A15148.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140A193C4 @ 0x140A193C4 (sub_140A193C4.c)
 *     sub_140A19D70 @ 0x140A19D70 (sub_140A19D70.c)
 */

__int64 __fastcall sub_140A1530C(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v7; // r14d
  __int16 v8; // r8
  __int16 v9; // r15
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  __int16 v15; // [rsp+30h] [rbp-68h]
  _QWORD v16[10]; // [rsp+48h] [rbp-50h] BYREF
  _WORD *v18; // [rsp+A8h] [rbp+10h]

  v18 = a2;
  v16[0] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(a5 + 64) == 1 )
  {
    v12 = -1073741701;
    goto LABEL_22;
  }
  v12 = sub_140841A58(a5);
  if ( v12 < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)(a5 + 64) != 6 )
  {
    v12 = -1073741701;
    goto LABEL_5;
  }
  v12 = sub_140A193C4(v16, a5);
  if ( v12 < 0 )
  {
LABEL_4:
    sub_1406E0C3C(1LL, (__int64)"AslFileMappingGetImageTypeEx");
LABEL_5:
    v11 = 0;
    v10 = 0;
    a2 = v18;
    v8 = 0;
    goto LABEL_22;
  }
  v8 = *(_WORD *)(v16[0] + 4LL);
  v15 = v8;
  v9 = *(_WORD *)(v16[0] + 24LL);
  if ( *(_DWORD *)(a5 + 80) || !a3 && !a4 )
    goto LABEL_10;
  if ( v9 == 267 )
  {
    v7 = *(_DWORD *)(v16[0] + 232LL);
  }
  else if ( v9 == 523 )
  {
    v7 = *(_DWORD *)(v16[0] + 248LL);
  }
  if ( v7 )
  {
    v13 = sub_140A19D70(v16[0], a5 + 8, v7);
    if ( v13 )
    {
      v10 = 1;
      v11 = *(_DWORD *)(v13 + 16);
      v12 = 0;
    }
    else
    {
      sub_1406E0C3C(2LL, (__int64)"AslFileMappingGetImageTypeEx");
      v12 = 0;
      v11 = 0;
      v10 = 0;
    }
    a2 = v18;
    v8 = v15;
  }
  else
  {
LABEL_10:
    v12 = 0;
    v11 = 0;
    v10 = 0;
    a2 = v18;
  }
LABEL_22:
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return (unsigned int)v12;
}
