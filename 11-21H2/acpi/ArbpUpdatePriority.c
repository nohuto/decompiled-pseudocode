/*
 * XREFs of ArbpUpdatePriority @ 0x1C00B8598
 * Callers:
 *     ArbGetNextAllocationRange @ 0x1C00B77E0 (ArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbpUpdatePriority(__int64 a1, __int64 *a2)
{
  int v4; // edx
  __int64 result; // rax
  char v6; // r9
  char *v7; // r11
  char *v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  bool v13; // cf
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v4 = *((_DWORD *)a2 + 8);
  result = (unsigned int)(v4 - 2147483645);
  if ( (unsigned int)result <= 1 )
    goto LABEL_24;
  v6 = *(_BYTE *)a2[5] & 1;
  if ( v4 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      v7 = *(char **)(a1 + 64);
      v9 = v4 - 1;
      if ( v4 <= 0 )
        v9 = ~v4;
      v8 = &v7[16 * (v9 + 1)];
      goto LABEL_8;
    }
LABEL_24:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v7 = *(char **)(a1 + 64);
  v8 = v7;
LABEL_8:
  v10 = (unsigned __int64)&v7[16 * *(unsigned __int16 *)(a1 + 56)];
  if ( (unsigned __int64)v8 >= v10 )
  {
LABEL_21:
    result = 2147483646 - (unsigned int)(v6 != 0);
    *((_DWORD *)a2 + 8) = result;
    return result;
  }
  v11 = *a2;
  while ( 1 )
  {
    v12 = *(_QWORD *)v8;
    v13 = *(_QWORD *)v8 < v11;
    if ( *(_QWORD *)v8 <= v11 )
      break;
    if ( a2[1] >= v12 )
    {
      v13 = v12 < v11;
      break;
    }
LABEL_20:
    v8 += 16;
    if ( (unsigned __int64)v8 >= v10 )
      goto LABEL_21;
  }
  if ( v13 && *((_QWORD *)v8 + 1) < v11 )
    goto LABEL_20;
  v14 = a2[1];
  if ( v14 >= *((_QWORD *)v8 + 1) )
    v14 = *((_QWORD *)v8 + 1);
  v15 = *a2;
  if ( v11 <= v12 )
    v15 = *(_QWORD *)v8;
  if ( v14 - v15 + 1 < a2[2] )
    goto LABEL_20;
  result = (unsigned int)((v8 - v7) >> 4) + 1;
  *((_DWORD *)a2 + 8) = result;
  if ( v6 )
    *((_DWORD *)a2 + 8) = -(((v8 - v7) >> 4) + 1);
  return result;
}
