/*
 * XREFs of sub_140655A20 @ 0x140655A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140655828 @ 0x140655828 (sub_140655828.c)
 *     sub_140655D84 @ 0x140655D84 (sub_140655D84.c)
 */

__int64 __fastcall sub_140655A20(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // r9d
  int v8; // r8d
  int v9; // ecx

  if ( a1 && *(_QWORD *)a1 )
  {
    v2 = sub_140655828(0);
    if ( !v2 )
    {
      if ( (sub_14042A5E0(*(_QWORD *)a1 + 129LL, 0LL) & 7) != 0 )
      {
        return 2;
      }
      else
      {
        v3 = (unsigned int)dword_140D04DA0;
        if ( dword_140D04DA0 )
        {
          LODWORD(v3) = dword_140D04DA0 | 0x80000000;
          sub_14042A5E0(*(_QWORD *)a1 + 128LL, v3);
          v5 = sub_14042A5E0(*(_QWORD *)a1 + 128LL, v4);
          v6 = v5;
          LODWORD(v6) = v5 & 0x7FFFFFFF;
          sub_14042A5E0(*(_QWORD *)a1 + 128LL, v6);
        }
        LOBYTE(v3) = 7;
        sub_14042A5E0(*(_QWORD *)a1 + 129LL, v3);
        LOBYTE(v7) = 1;
        *(_WORD *)(a1 + 12) = 0;
        LOBYTE(v8) = 1;
        return (unsigned __int8)sub_140655D84(v9, a1, v8, v7, 8) != 1 ? 2 : 0;
      }
    }
  }
  else
  {
    return 3;
  }
  return v2;
}
