/*
 * XREFs of sub_14057BA34 @ 0x14057BA34
 * Callers:
 *     sub_14057BBA0 @ 0x14057BBA0 (sub_14057BBA0.c)
 *     sub_14057BE70 @ 0x14057BE70 (sub_14057BE70.c)
 *     sub_14057C030 @ 0x14057C030 (sub_14057C030.c)
 * Callees:
 *     sub_14057B5C0 @ 0x14057B5C0 (sub_14057B5C0.c)
 */

__int64 __fastcall sub_14057BA34(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // r11
  __int64 v8; // rdi
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 v14; // r11
  unsigned int v15; // r9d
  char v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  if ( (v6 & 0xC0) == 0xC0 )
  {
    v12 = 1;
    v13 = v6 & 7;
    v14 = v13 + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v14 = v13;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v14;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v15 = *(unsigned __int8 *)(a1 + 66);
      if ( (*(_BYTE *)(a1 + 66) & 7) == 5 && v6 < 0x40u )
      {
        v16 = *(_BYTE *)(a1 + 64);
      }
      else
      {
        v16 = *(_BYTE *)(a1 + 64);
        v17 = (v15 & 7) + 8;
        if ( (v16 & 1) == 0 )
          v17 = v15 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v17 + 120);
      }
      v18 = (v15 >> 3) & 7;
      v19 = v18 + 8;
      if ( (v16 & 2) == 0 )
        v19 = v18;
      if ( (_DWORD)v19 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v19 + 120) << (*(_BYTE *)(a1 + 66) >> 6);
    }
    else
    {
      v20 = v6 & 7;
      if ( v6 < 0x40u && v20 == 5 )
      {
        if ( !*(_BYTE *)(a1 + 58) )
          v7 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v21 = v20 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v21 = v20;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v21 + 120);
      }
    }
    v12 = 0;
  }
  v22 = 0;
  v23 = v7 + v8 + *(int *)(a1 + 68);
  v26 = v23;
  if ( !v12 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v24 = sub_14057B5C0(a1, &v26);
    v23 = v26;
    v22 = v24;
  }
  *a2 = v23;
  *a3 = v4;
  if ( a4 )
    *a4 = v12;
  return v22;
}
