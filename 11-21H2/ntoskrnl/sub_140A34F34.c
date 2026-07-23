/*
 * XREFs of sub_140A34F34 @ 0x140A34F34
 * Callers:
 *     sub_14082FDD8 @ 0x14082FDD8 (sub_14082FDD8.c)
 * Callees:
 *     sub_140A35A08 @ 0x140A35A08 (sub_140A35A08.c)
 */

__int64 __fastcall sub_140A34F34(__int64 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  unsigned __int16 v6; // bp
  __int16 v7; // r14
  int v8; // edx
  unsigned int v9; // r10d
  _WORD *v10; // r11
  unsigned __int16 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v5 = *a1;
  if ( !*a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = a2[1];
  v7 = *a2;
  if ( !(v6 >> 14) )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(v5 + 4);
  v9 = 0;
  if ( !*(_WORD *)(v5 + 4) )
  {
LABEL_9:
    v12 = *(unsigned __int16 *)(v5 + 6);
    if ( (unsigned __int16)v8 >= (unsigned __int16)v12 )
    {
      v13 = *a1;
      if ( v8 + 1 >= v12 )
      {
        v13 = sub_140A35A08(v5);
        if ( !v13 )
          return (unsigned int)-1073741801;
      }
      v5 = v13;
      *a1 = v13;
    }
    v15 = *(_QWORD *)(v5 + 8);
    v16 = 3LL * *(unsigned __int16 *)(v5 + 4);
    v17 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v15 + 4 * v16) = *(_QWORD *)a2;
    *(_DWORD *)(v15 + 4 * v16 + 8) = v17;
    ++*(_WORD *)(v5 + 4);
    return v2;
  }
  while ( 1 )
  {
    v10 = (_WORD *)(*(_QWORD *)(v5 + 8) + 12LL * v9);
    v11 = v10[1];
    if ( v11 >> 14 == v6 >> 14 && *v10 == v7 )
      break;
    if ( (int)++v9 >= v8 )
      goto LABEL_9;
  }
  v14 = 0;
  while ( (((unsigned __int16)(v11 ^ v6) >> (2 * v14)) & 3) == 0 && v10[v14 + 3] == a2[v14 + 3] )
  {
    if ( (int)++v14 >= 3 )
      return v2;
  }
  return 0x40000000;
}
