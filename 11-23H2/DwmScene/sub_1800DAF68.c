/*
 * XREFs of sub_1800DAF68 @ 0x1800DAF68
 * Callers:
 *     sub_1800DABC8 @ 0x1800DABC8 (sub_1800DABC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DAF68(__int64 *a1, __int64 a2, float *a3)
{
  __int64 v3; // rax
  float *v4; // rcx
  float v5; // xmm0_4
  bool v6; // cc
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(float **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      v6 = v5 <= v4[8];
      *(_QWORD *)a2 = v4;
      if ( v6 )
      {
        v4 = (float *)*((_QWORD *)v4 + 2);
        v7 = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v4;
        v7 = 1;
        v4 = *(float **)v4;
      }
      *(_DWORD *)(a2 + 8) = v7;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
