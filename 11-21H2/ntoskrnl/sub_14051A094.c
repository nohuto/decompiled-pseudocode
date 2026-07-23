/*
 * XREFs of sub_14051A094 @ 0x14051A094
 * Callers:
 *     sub_140510850 @ 0x140510850 (sub_140510850.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051A094(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx

  if ( *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 4) != 36 )
    return 3221225485LL;
  v2 = qword_140C4BC90;
  if ( (__int64 *)qword_140C4BC90 == &qword_140C4BC90 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a1 + 8);
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 32);
    v5 = v2;
    if ( v4 == v3 )
      break;
    v2 = *(_QWORD *)v2;
    if ( (__int64 *)v2 == &qword_140C4BC90 )
    {
      if ( v4 != v3 )
        return 3221225485LL;
      break;
    }
  }
  v6 = *(unsigned int *)(a1 + 32);
  v7 = *(_QWORD *)(v5 + 56) + 160 * v6;
  *(_DWORD *)v7 = v6;
  *(_BYTE *)(v7 + 6) = 0;
  *(_WORD *)(v7 + 4) = 1;
  *(_DWORD *)(v7 + 120) = *(_DWORD *)(a1 + 28);
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_QWORD *)(v7 + 136) = 0LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 64) = sub_14052A5C0;
  *(_DWORD *)(v7 + 40) = 275;
  *(_QWORD *)(v7 + 72) = v7;
  *(_QWORD *)(v7 + 96) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 152) = v7 + 144;
  *(_QWORD *)(v7 + 144) = v7 + 144;
  *(_BYTE *)(v7 + 104) = *(_BYTE *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 12) )
  {
    *(_DWORD *)(v7 + 108) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(v7 + 112) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(v7 + 116) = *(_DWORD *)(a1 + 24);
  }
  if ( !*(_DWORD *)(v7 + 120) || *(_QWORD *)(v5 + 144) )
    return 0LL;
  else
    return 3221225485LL;
}
