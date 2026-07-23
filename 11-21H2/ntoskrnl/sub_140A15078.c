/*
 * XREFs of sub_140A15078 @ 0x140A15078
 * Callers:
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 *     sub_140A18724 @ 0x140A18724 (sub_140A18724.c)
 * Callees:
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140842E88 @ 0x140842E88 (sub_140842E88.c)
 */

__int64 __fastcall sub_140A15078(__int64 a1)
{
  int *v1; // rsi
  int v2; // eax
  int v5; // eax
  int v6; // ebx

  v1 = (int *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( v2 != 1 )
      return 3221226605LL;
    return 3221225758LL;
  }
  if ( v2 == 1 )
    return 3221225758LL;
  v5 = sub_1403CB4C0(a1 + 8, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 59) )
    {
      *v1 = 6;
    }
    else
    {
      v6 = sub_140842E88((_QWORD *)(a1 + 8), v1);
      if ( v6 < 0 )
      {
        sub_1406E0C3C(1LL, (__int64)"AslFileMappingEnsureMappedAs");
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 59) )
  {
    return 0;
  }
  return (unsigned int)v6;
}
