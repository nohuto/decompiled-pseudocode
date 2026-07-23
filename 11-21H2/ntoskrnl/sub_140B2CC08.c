/*
 * XREFs of sub_140B2CC08 @ 0x140B2CC08
 * Callers:
 *     sub_140B2CB08 @ 0x140B2CB08 (sub_140B2CB08.c)
 * Callees:
 *     <none>
 */

void sub_140B2CC08()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // ecx

  v0 = dword_140D06D2C;
  if ( dword_140D06D2C
    && dword_140D0501C
    && dword_140D05028
    && dword_140D05028 < (unsigned int)dword_140D0501C
    && dword_140D05024 == -1
    && dword_140D05020 == -1 )
  {
    if ( (unsigned int)dword_140D06D2C <= 0x3E8 )
      v0 = 1000;
    if ( v0 > dword_140D0501C )
    {
      v0 = 10000;
      if ( (unsigned int)dword_140D0501C <= 0x2710 )
        v0 = 1000;
    }
    v1 = dword_140D0501C - v0;
    dword_140D05020 = dword_140D0501C - v0;
    if ( dword_140D0501C - v0 < 0x3E8 )
    {
      dword_140D05020 = 1000;
      v1 = 1000;
    }
    v2 = dword_140D05028 * v1 / dword_140D0501C;
    if ( dword_140D05028 * v1 / (unsigned __int64)(unsigned int)dword_140D0501C > 0xFFFFFFFF )
      v2 = -1;
    dword_140D05024 = v2;
    if ( dword_140D05028 - v2 > v0 )
    {
      dword_140D05024 = 0;
      v2 = 0;
    }
    if ( dword_140D05034 && v2 > dword_140D05034 )
      dword_140D05024 = dword_140D05034;
    if ( dword_140D05030 && v1 > dword_140D05030 )
      dword_140D05020 = dword_140D05030;
    if ( (_DWORD)dword_140D0502C == -1 )
      LODWORD(dword_140D0502C) = 26624 * (v0 / 0x3E8);
  }
}
