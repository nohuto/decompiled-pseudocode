/*
 * XREFs of ComputeProcessorEnergy @ 0x1C0001750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int *v5; // r8
  __int64 v6; // r11
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  __int64 i; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 result; // rax

  v5 = (unsigned int *)((char *)&unk_1C0011AF0 + 256 * (unsigned __int64)a1);
  v6 = a4;
  v7 = v5[1];
  if ( (v7 & 1) != 0 )
  {
    v8 = (unsigned __int8)v7 >> 1;
    for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
    {
      v10 = v5[i + 2];
      if ( (_DWORD)v6 == (unsigned __int8)v10 )
      {
        v15 = v10 >> 8;
        goto LABEL_13;
      }
      if ( (unsigned int)v6 < (unsigned __int8)v10 )
        break;
    }
    if ( (_DWORD)i )
    {
      v11 = v5[(unsigned int)(i - 1) + 2];
      if ( (_DWORD)i == v8 )
        LODWORD(i) = i - 1;
    }
    else
    {
      v11 = v5[i + 2];
      LODWORD(i) = 1;
    }
    v12 = v11 >> 8;
    v13 = v5[(unsigned int)(i - 1) + 2];
    v14 = v5[(unsigned int)i + 2];
    if ( (unsigned __int8)v13 >= (unsigned int)(unsigned __int8)v14 )
      v15 = 0;
    else
      v15 = v12
          + (int)((v6 - (unsigned __int8)v13) * ((v14 >> 8) - (v13 >> 8)))
          / ((unsigned __int8)v14 - (unsigned __int8)v13);
LABEL_13:
    v16 = 100LL;
  }
  else
  {
    v15 = *v5;
    v16 = v6;
  }
  result = 10 * a2 * v16 * (unsigned __int64)v15 / qword_1C0011CF8;
  *a5 = result;
  return result;
}
