/*
 * XREFs of sub_180006EE0 @ 0x180006EE0
 * Callers:
 *     sub_180006E68 @ 0x180006E68 (sub_180006E68.c)
 * Callees:
 *     sub_1800083D0 @ 0x1800083D0 (sub_1800083D0.c)
 */

unsigned __int64 __fastcall sub_180006EE0(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rcx
  int v4; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rax

  v2 = *(_BYTE *)(a1 + 32);
  v3 = a1 + 24;
  v4 = v2 & 1;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
    {
      v6 ^= v3;
      goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    while ( v6 )
    {
      v7 = sub_1800083D0(a2, v6);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          return v6;
        v8 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v8 = *(_QWORD *)v6;
      }
      if ( v4 && v8 )
        v6 ^= v8;
      else
        v6 = v8;
    }
  }
  return v6;
}
