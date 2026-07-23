/*
 * XREFs of KeAddSystemServiceTable @ 0x140844150
 * Callers:
 *     <none>
 * Callees:
 *     sub_140659320 @ 0x140659320 (sub_140659320.c)
 */

char __fastcall KeAddSystemServiceTable(int *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  int *v8; // r10
  __int64 v9; // rdx
  unsigned int v10; // r8d
  int *v11; // r10
  __int64 v12; // rdx
  char result; // al

  if ( a5 == 1 )
  {
    if ( !(_QWORD)xmmword_140E018E0 && !(_QWORD)xmmword_140D06FA0 )
    {
      *(_QWORD *)&xmmword_140D06FA0 = a1;
      LODWORD(xmmword_140D06FB0) = a3;
      *((_QWORD *)&xmmword_140D06FB0 + 1) = a4;
      sub_140659320(1u);
      v10 = 0;
      v7 = (unsigned int)&xmmword_140D06FA0 + xmmword_140D06FA0 + dword_140C0E960;
      if ( (_DWORD)xmmword_140D06FB0 )
      {
        v11 = (int *)xmmword_140D06FA0;
        do
        {
          v12 = *v11++;
          v7 = ++v10 * ((v12 + *(_DWORD *)((v12 >> 4) + xmmword_140D06FA0)) ^ v7);
        }
        while ( v10 < (unsigned int)xmmword_140D06FB0 );
      }
      goto LABEL_13;
    }
  }
  else if ( a5 == 2 && !(_QWORD)xmmword_140D07120 )
  {
    *((_QWORD *)&xmmword_140D07130 + 1) = a4;
    v6 = 0;
    *(_QWORD *)&xmmword_140D07120 = a1;
    v7 = (unsigned int)&xmmword_140D07120 + (_DWORD)a1 + dword_140C0E960;
    LODWORD(xmmword_140D07130) = a3;
    if ( a3 )
    {
      v8 = a1;
      do
      {
        v9 = *v8++;
        v7 = ++v6 * ((v9 + *(int *)((char *)a1 + (v9 >> 4))) ^ v7);
      }
      while ( v6 < a3 );
    }
LABEL_13:
    result = 1;
    dword_140C0E960 += 2 * v7;
    return result;
  }
  return 0;
}
