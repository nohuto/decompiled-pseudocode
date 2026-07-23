/*
 * XREFs of sub_140235054 @ 0x140235054
 * Callers:
 *     sub_1406ACDDC @ 0x1406ACDDC (sub_1406ACDDC.c)
 * Callees:
 *     sub_14023548C @ 0x14023548C (sub_14023548C.c)
 */

__int64 __fastcall sub_140235054(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  char v6; // bp
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rax

  v6 = 0;
  v10 = (unsigned int)sub_14023548C(*a1);
  v11 = v7;
  v12 = v7;
  if ( v9 <= v8 )
  {
LABEL_13:
    *a3 = v12;
  }
  else
  {
    while ( 1 )
    {
      v13 = v8 + 8LL;
      if ( v13 < v8 )
        break;
      if ( v13 > v9 )
        break;
      v14 = *(unsigned int *)((char *)a1 + v8 + 4);
      if ( (unsigned int)v14 < 8 )
        break;
      v15 = v14 + v8;
      if ( (unsigned int)v14 + v8 < v8 )
        break;
      if ( v15 > v9 )
        break;
      v16 = *(unsigned int *)((char *)a1 + v8);
      if ( (unsigned int)v16 >= a2 || (v16 & 0xFFF) != 0 || v6 && v16 <= v11 )
        break;
      if ( (v14 - 8) % v10 )
        break;
      v6 = 1;
      v11 = (unsigned int)v16;
      v8 += v14;
      v12 += (v14 - 8) / v10;
      if ( v15 >= v9 )
        goto LABEL_13;
    }
    return (unsigned int)-1073741701;
  }
  return v7;
}
