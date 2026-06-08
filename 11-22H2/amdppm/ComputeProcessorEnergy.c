/*
 * XREFs of ComputeProcessorEnergy @ 0x1C0001760
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
  unsigned int *v6; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  __int64 i; // rax
  __int64 v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned __int64 result; // rax

  v6 = (unsigned int *)((char *)&unk_1C0012B98 + 256 * (unsigned __int64)a1);
  v8 = v6[1];
  if ( (v8 & 1) != 0 )
  {
    v9 = (unsigned __int8)v8 >> 1;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = i + 2;
      if ( (unsigned int)i >= v9 )
        break;
      v12 = v6[v11];
      if ( a4 == (unsigned __int8)v12 )
      {
        v17 = v12 >> 8;
        goto LABEL_13;
      }
      if ( a4 < (unsigned __int8)v12 )
        break;
    }
    if ( (_DWORD)i )
    {
      v13 = v6[(unsigned int)(i - 1) + 2];
      if ( (_DWORD)i == v9 )
        LODWORD(i) = i - 1;
    }
    else
    {
      v13 = v6[v11];
      LODWORD(i) = 1;
    }
    v14 = v13 >> 8;
    v15 = v6[(unsigned int)(i - 1) + 2];
    v16 = v6[(unsigned int)i + 2];
    if ( (unsigned __int8)v15 >= (unsigned int)(unsigned __int8)v16 )
      v17 = 0;
    else
      v17 = v14
          + (int)((a4 - (unsigned __int8)v15) * ((v16 >> 8) - (v15 >> 8)))
          / ((unsigned __int8)v16 - (unsigned __int8)v15);
LABEL_13:
    v18 = 100LL;
  }
  else
  {
    v17 = *v6;
    v18 = a4;
  }
  result = 10 * a2 * v18 * (unsigned __int64)v17 / qword_1C0012DA8;
  *a5 = result;
  return result;
}
