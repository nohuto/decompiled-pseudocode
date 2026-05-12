/*
 * XREFs of sub_1C0015AA8 @ 0x1C0015AA8
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C00682AC @ 0x1C00682AC (sub_1C00682AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0015AA8(int a1, char a2)
{
  unsigned int v2; // r8d
  bool v4; // zf

  v2 = 0;
  if ( a1 )
    return 0LL;
  if ( ((a2 - 10) & 0x5F) != 0 )
  {
    v4 = a2 == -118;
LABEL_5:
    LOBYTE(v2) = v4;
    return v2;
  }
  v4 = a2 == -118;
  if ( a2 == -118 )
    goto LABEL_5;
  return 1LL;
}
