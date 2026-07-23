/*
 * XREFs of sub_1407E71E0 @ 0x1407E71E0
 * Callers:
 *     sub_1407E6C40 @ 0x1407E6C40 (sub_1407E6C40.c)
 * Callees:
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 */

__int64 __fastcall sub_1407E71E0(int a1, int a2, unsigned int a3)
{
  int v3; // r9d
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v3 = a1;
  if ( (a1 & 0x9E038FFF) != 0 || (a1 & 0x1083000) == 0 )
    return 3221225485LL;
  if ( (a1 & 0x61EC4000) == 0 )
    return 0LL;
  if ( (a1 & 0x80000) != 0 )
  {
    v5 = a1 == 0x80000;
  }
  else
  {
    if ( (a1 & 0x1000000) == 0 )
    {
      if ( (a1 & 0x200000) != 0 && ((a2 & 0x90000000) != 0 || (a1 & 0x2000) == 0 || (a1 & 0x840000) != 0) )
        return 3221225485LL;
      goto LABEL_11;
    }
    v5 = a1 == 0x1000000;
  }
  if ( !v5 )
    return 3221225485LL;
LABEL_11:
  v6 = a1 & 0x20400000;
  if ( (a1 & 0x20400000) == 0x20400000 )
  {
    if ( (a1 & 0x40800000) != 0 )
      return 3221225485LL;
  }
  else if ( v6 == 0x20000000 && (a1 & 0x40C00000) != 0 )
  {
    return 3221225485LL;
  }
  if ( (a1 & 0x800000) != 0 )
  {
    if ( (a1 & 0x40400000) != 0 )
      return 3221225485LL;
    if ( (a3 & 0xFFFFF9F9) == 0 )
    {
LABEL_16:
      if ( (v3 & 0x40000) != 0 )
      {
        if ( (v3 & 0x2000) != 0 && (v3 & 0xBFEBDFFF) == 0 && a3 == 1 )
          return 0LL;
      }
      else if ( (v3 & 0x4000) == 0 || (v3 & 0x2000) != 0 && (v3 & 0xDF9F8FFF) == 0 )
      {
        return 0LL;
      }
      return 3221225485LL;
    }
  }
  else
  {
    if ( v6 != 0x400000 )
    {
      if ( (a1 & 0x40000000) != 0 && (a1 & 0x100000) != 0 )
        return 3221225485LL;
      goto LABEL_16;
    }
    if ( (a1 & 0x2000) == 0 || (a1 & 0xFF8F9FFF) != 0 )
      return 3221225485LL;
    v7 = sub_14032BCC0(a3);
    if ( v7 != -1 && (v7 & 0xFFFFFFF8) != 0x10 )
    {
      v8 = v7 & 7;
      if ( v8 == 4 || v8 == 1 )
        goto LABEL_16;
    }
  }
  return 3221225541LL;
}
