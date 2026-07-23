/*
 * XREFs of sub_140842E88 @ 0x140842E88
 * Callers:
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140842D98 @ 0x140842D98 (sub_140842D98.c)
 *     sub_140A15078 @ 0x140A15078 (sub_140A15078.c)
 *     sub_140A19DE8 @ 0x140A19DE8 (sub_140A19DE8.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140842E88(_QWORD *a1, int *a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = a1[2];
  v4 = 0;
  if ( !v3 || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  v5 = 3;
  if ( v3 < 0x40 )
  {
    *a2 = 3;
    return 0LL;
  }
  v6 = a1[3];
  if ( (unsigned __int64)(v6 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -1073741811;
    sub_1406E0C3C(1LL, (__int64)"AslpFileMappingGetFileKind");
  }
  else if ( *(_WORD *)v6 == 23117 )
  {
    v5 = 4;
    v7 = *(unsigned int *)(v6 + 60);
    if ( v3 >= v7 + 4 )
    {
      if ( *(_DWORD *)(v7 + v6) == 17744 )
      {
        v5 = 6;
      }
      else if ( *(_WORD *)(v7 + v6) == 17742 )
      {
        v5 = 5;
      }
    }
  }
  *a2 = v5;
  return v4;
}
