/*
 * XREFs of sub_14054D2AC @ 0x14054D2AC
 * Callers:
 *     sub_14054A25C @ 0x14054A25C (sub_14054A25C.c)
 *     sub_14054A4B0 @ 0x14054A4B0 (sub_14054A4B0.c)
 *     sub_14054AE18 @ 0x14054AE18 (sub_14054AE18.c)
 * Callees:
 *     sub_14054D374 @ 0x14054D374 (sub_14054D374.c)
 */

__int64 __fastcall sub_14054D2AC(int a1, __int64 *a2, _DWORD *a3)
{
  _BYTE *v3; // rbx
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rcx

  v3 = &unk_140C48820;
  *a2 = 0LL;
  *a3 = 0;
  if ( !a1 )
    v3 = &unk_140C48800;
  if ( !v3[2] )
    return 0LL;
  v7 = *((_QWORD *)v3 + 1);
  v8 = 261;
  v9 = *(_WORD *)v3;
  if ( *(_WORD *)v3 < *(_WORD *)(v7 + 8) )
  {
LABEL_9:
    v10 = *(_QWORD *)(v7 + 8LL * v9 + 16);
    *a2 = v10 & 0xFFFFFFFFFFLL;
    *a3 = (v10 >> 40) + 1;
    *(_WORD *)v3 = v9 + 1;
  }
  else
  {
    while ( *(_QWORD *)v7 != -1LL )
    {
      sub_14054D374(v3, *(_QWORD *)v7);
      *(_WORD *)v3 = 0;
      if ( *(_WORD *)(v7 + 8) )
      {
        v9 = 0;
        goto LABEL_9;
      }
    }
    return 0;
  }
  return v8;
}
