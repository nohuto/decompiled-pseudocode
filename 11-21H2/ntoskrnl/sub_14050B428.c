/*
 * XREFs of sub_14050B428 @ 0x14050B428
 * Callers:
 *     sub_1407FCE14 @ 0x1407FCE14 (sub_1407FCE14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14050B428(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v6; // r8
  char v7; // r9
  _DWORD *v8; // rdx
  __int64 v9; // r10
  int v10; // ecx

  v3 = dword_140C4D044;
  v4 = 16 * dword_140C4D044 + 8;
  *a3 = v4;
  if ( a2 < v4 )
    return 3221225476LL;
  a1[1] = v3;
  if ( off_140C02520 == &off_1400032A0 )
    v6 = qword_140C4D0A8;
  else
    v6 = qword_140C4D0A8 + 8LL * (unsigned int)(v3 * *a1);
  v7 = *((_BYTE *)KeGetCurrentPrcb() + 88) & 1;
  if ( dword_140C4D044 )
  {
    v8 = a1 + 2;
    v9 = (unsigned int)dword_140C4D044;
    do
    {
      if ( v7 )
      {
        *((_QWORD *)v8 + 1) = qword_140C0CA20;
        *v8 = 2;
      }
      else
      {
        v10 = *(_DWORD *)(*(_QWORD *)v6 + 24LL);
        if ( v10 <= 1 )
        {
          *v8 = 1;
          v8[2] = *(_DWORD *)(*(_QWORD *)v6 + 32LL);
          v8[3] = *(_DWORD *)(*(_QWORD *)v6 + 28LL);
        }
        else if ( v10 == 2 )
        {
          *v8 = 3;
          v8[2] = *(_DWORD *)(*(_QWORD *)v6 + 28LL);
        }
        else
        {
          *v8 = 0;
        }
      }
      v8 += 4;
      v6 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  return 0LL;
}
