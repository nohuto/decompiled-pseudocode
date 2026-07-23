/*
 * XREFs of sub_1402FF270 @ 0x1402FF270
 * Callers:
 *     sub_1402D9830 @ 0x1402D9830 (sub_1402D9830.c)
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 *     KeComplementAffinityEx @ 0x14056C110 (KeComplementAffinityEx.c)
 *     KeComplementAffinityEx2 @ 0x14056C130 (KeComplementAffinityEx2.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1402FF270(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // r9
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = *a3;
  v5 = a2;
  if ( *a3 > a2 )
    v3 = a2;
  v6 = 0;
  if ( v3 )
  {
    v6 = v3;
    v7 = a1 + 8;
    v8 = v3;
    v9 = (char *)a3 - a1;
    do
    {
      v10 = *(_QWORD *)&v9[v7];
      v7 += 8LL;
      *(_QWORD *)(v7 - 8) = ~v10;
      --v8;
    }
    while ( v8 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = v5;
  *(_WORD *)(a1 + 2) = v5;
  if ( v6 < v5 )
  {
    do
    {
      v11 = v6++;
      *(_QWORD *)(a1 + 8 * v11 + 8) = -1LL;
    }
    while ( v6 < *(unsigned __int16 *)(a1 + 2) );
  }
}
