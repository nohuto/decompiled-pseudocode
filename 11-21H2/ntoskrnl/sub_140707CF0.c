/*
 * XREFs of sub_140707CF0 @ 0x140707CF0
 * Callers:
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_1406DEE10 @ 0x1406DEE10 (sub_1406DEE10.c)
 */

__int64 __fastcall sub_140707CF0(__int64 a1, unsigned int a2, int a3, _WORD *a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r12
  __int64 v8; // r14
  int v9; // r15d
  unsigned int v10; // r13d
  int v11; // edx
  int v12; // r9d
  int v13; // esi
  __int64 v14; // r11
  unsigned int v15; // ebp
  __int16 v16; // ax
  unsigned __int16 v17; // bx
  int v18; // ecx
  unsigned int v19; // r8d
  __int64 result; // rax
  int v21; // eax

  v6 = a5;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = a3;
  v14 = a1;
  v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL);
  while ( v13 )
  {
    --v13;
    v16 = *a4 >> 12;
    v17 = *a4 & 0xFFF;
    if ( !v16 )
      goto LABEL_5;
    if ( v16 != 3 )
    {
      if ( v16 != 10 )
        return 3221226089LL;
      if ( v17 > 0xFF8u )
      {
        v11 = 1;
        v10 = 8;
      }
      v21 = 0;
      v18 = v17;
      if ( v17 <= 0xFF8u )
        v21 = v9;
      v9 = v21;
      goto LABEL_6;
    }
    if ( v17 > 0xFFCu )
    {
      v11 = 1;
      v18 = v17;
      v9 = 2;
      v10 = 4;
    }
    else
    {
LABEL_5:
      v18 = v17;
      if ( !v16 )
      {
        v19 = v8 + v17;
        goto LABEL_8;
      }
    }
LABEL_6:
    if ( (v8 & 0xFFF) != 0 && v18 + (unsigned int)(v8 & 0xFFF) > 0xFFE )
      return 3221226089LL;
    v19 = v18 + v8;
    if ( v18 + (int)v8 < v15 )
      return 3221226089LL;
LABEL_8:
    if ( v11 )
    {
      if ( v12 )
        return 3221225595LL;
      result = sub_1406DEE10(v6, v14, v19, v9, v10, a4, a6);
      if ( (int)result < 0 )
        return result;
      if ( (dword_140D06880 & 0x20000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 )
      {
        a5 = 0LL;
        if ( (sub_140286F90(v6, v8 + v17 + (unsigned __int64)v10, (unsigned __int64 *)&a5)[8] & 4) != 0 )
          return 3221225595LL;
      }
      v14 = a1;
      v11 = 0;
      v12 = 1;
    }
    ++a4;
  }
  return 0LL;
}
