/*
 * XREFs of sub_140921018 @ 0x140921018
 * Callers:
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

__int64 __fastcall sub_140921018(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r11
  __int16 v3; // dx
  __int64 v4; // rax
  unsigned __int16 v5; // dx
  __int16 v6; // r9
  __int64 v7; // r10

  v1 = 0;
  v2 = a1;
  v3 = 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    while ( 1 )
    {
      v4 = sub_140721CE0(v2, v3);
      if ( v4 != *(_QWORD *)(v7 + 24LL * v5 + 16) || *(_QWORD *)(v4 + 304) != *(_QWORD *)(v7 + 24LL * v5 + 8) )
        break;
      v3 = v5 + 1;
      if ( v3 > v6 )
        return v1;
    }
    return (unsigned int)-1073741735;
  }
  return v1;
}
