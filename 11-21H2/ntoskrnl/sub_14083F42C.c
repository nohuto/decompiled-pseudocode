/*
 * XREFs of sub_14083F42C @ 0x14083F42C
 * Callers:
 *     sub_14083F2B0 @ 0x14083F2B0 (sub_14083F2B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14083F42C(__int64 a1, __int64 *a2)
{
  int v4; // edx
  __int64 result; // rax
  char v6; // r9
  char *v7; // r11
  char *v8; // rdx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  bool v12; // cf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // ecx

  v4 = *((_DWORD *)a2 + 8);
  result = (unsigned int)(v4 - 2147483645);
  if ( (unsigned int)result <= 1 )
    goto LABEL_22;
  v6 = *(_BYTE *)a2[5] & 1;
  if ( v4 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      v7 = *(char **)(a1 + 64);
      v15 = v4 - 1;
      if ( v4 <= 0 )
        v15 = ~v4;
      v8 = &v7[16 * (v15 + 1)];
      goto LABEL_4;
    }
LABEL_22:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v7 = *(char **)(a1 + 64);
  v8 = v7;
LABEL_4:
  v9 = (unsigned __int64)&v7[16 * *(unsigned __int16 *)(a1 + 56)];
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_10:
    result = 2147483646 - (unsigned int)(v6 != 0);
    *((_DWORD *)a2 + 8) = result;
    return result;
  }
  v10 = *a2;
  while ( 1 )
  {
    v11 = *(_QWORD *)v8;
    v12 = *(_QWORD *)v8 < v10;
    if ( *(_QWORD *)v8 <= v10 )
      break;
    if ( a2[1] >= v11 )
    {
      v12 = v11 < v10;
      break;
    }
LABEL_9:
    v8 += 16;
    if ( (unsigned __int64)v8 >= v9 )
      goto LABEL_10;
  }
  if ( v12 && *((_QWORD *)v8 + 1) < v10 )
    goto LABEL_9;
  v13 = a2[1];
  if ( v13 >= *((_QWORD *)v8 + 1) )
    v13 = *((_QWORD *)v8 + 1);
  v14 = *a2;
  if ( v10 <= v11 )
    v14 = *(_QWORD *)v8;
  if ( v13 - v14 + 1 < a2[2] )
    goto LABEL_9;
  result = (unsigned int)((v8 - v7) >> 4) + 1;
  *((_DWORD *)a2 + 8) = result;
  if ( v6 )
    *((_DWORD *)a2 + 8) = -(((v8 - v7) >> 4) + 1);
  return result;
}
