/*
 * XREFs of sub_140388F60 @ 0x140388F60
 * Callers:
 *     sub_1403773D8 @ 0x1403773D8 (sub_1403773D8.c)
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140388F60(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // edx
  int v4; // r9d
  __int64 i; // r10
  __int64 v6; // rcx
  __int16 v7; // ax

  v2 = a1;
  if ( !a2 && *(_QWORD *)(a1 + 17280) != *(_QWORD *)(a1 + 17504) )
    return 1LL;
  v3 = *(_DWORD *)(a1 + 16728);
  if ( v3 )
  {
    v4 = 0;
    for ( i = 16736LL; ; i += 8LL )
    {
      v6 = *(_QWORD *)(i + v2);
      if ( *(_QWORD *)(v6 + 24) )
      {
        v7 = *(_WORD *)(v6 + 204);
        if ( (v7 & 0x40) == 0 )
        {
          if ( (v7 & 0x10) == 0 )
            break;
          v2 = *(_QWORD *)(v6 + 248);
          if ( *(_QWORD *)(88LL * (v7 & 0xF) + v2 + 3712) )
            break;
        }
      }
      if ( ++v4 >= v3 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
