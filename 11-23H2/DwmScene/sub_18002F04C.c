/*
 * XREFs of sub_18002F04C @ 0x18002F04C
 * Callers:
 *     sub_18002F8F8 @ 0x18002F8F8 (sub_18002F8F8.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180062F40 @ 0x180062F40 (sub_180062F40.c)
 *     sub_1800DFD10 @ 0x1800DFD10 (sub_1800DFD10.c)
 *     sub_1800E02B0 @ 0x1800E02B0 (sub_1800E02B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002F04C(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 8) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
