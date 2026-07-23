/*
 * XREFs of sub_140B2CB08 @ 0x140B2CB08
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_140B2CC08 @ 0x140B2CC08 (sub_140B2CC08.c)
 */

__int64 sub_140B2CB08()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax

  v0 = dword_140D0501C;
  if ( (unsigned int)(dword_140D0501C - 1) <= 0x7CE )
  {
    v0 = 2000;
    dword_140D0501C = 2000;
  }
  v1 = dword_140D05028;
  if ( (unsigned int)(dword_140D05028 - 1) <= 0x12 )
  {
    v1 = 20;
    dword_140D05028 = 20;
  }
  v2 = dword_140D05034;
  if ( dword_140D05034 )
  {
    if ( (unsigned int)dword_140D05034 < 0x14 )
    {
      v2 = 20;
      dword_140D05034 = 20;
    }
    if ( v1 && v2 > v1 )
    {
      v2 = v1;
      dword_140D05034 = v1;
    }
  }
  v3 = dword_140D05030;
  if ( dword_140D05030 )
  {
    if ( (unsigned int)dword_140D05030 < 0x7D0 )
    {
      v3 = 2000;
      dword_140D05030 = 2000;
    }
    if ( v0 && v3 > v0 )
    {
      v3 = v0;
      dword_140D05030 = v0;
    }
  }
  if ( (unsigned int)(dword_140D05024 - 1) <= 0xFFFFFFFD )
  {
    v7 = v2;
    if ( (v2 || (v7 = v1) != 0) && dword_140D05024 > v7 )
      dword_140D05024 = v2;
  }
  if ( (unsigned int)(dword_140D05020 - 1) <= 0xFFFFFFFD )
  {
    v8 = v3;
    if ( (v3 || (v8 = v0) != 0) && dword_140D05020 > v8 )
      dword_140D05020 = v3;
  }
  sub_140B2CC08();
  result = (unsigned int)dword_140D05024;
  if ( dword_140D05024 == -1 )
  {
    result = 0LL;
    dword_140D05024 = 0;
  }
  v5 = dword_140D05020;
  if ( dword_140D05020 == -1 )
  {
    v5 = 0;
    dword_140D05020 = 0;
  }
  v6 = (unsigned int)dword_140D0502C;
  if ( (_DWORD)dword_140D0502C != -1 )
  {
    result = (unsigned int)((_DWORD)dword_140D0502C - 1);
    if ( (unsigned int)result > 0x1FFE )
      goto LABEL_25;
    v6 = 0x2000;
LABEL_38:
    LODWORD(dword_140D0502C) = v6;
    goto LABEL_25;
  }
  v6 = 0;
  LODWORD(dword_140D0502C) = 0;
  if ( (_DWORD)result || v5 )
  {
    v6 = 266240;
    goto LABEL_38;
  }
LABEL_25:
  dword_140D0533C = v6 >> 3;
  return result;
}
