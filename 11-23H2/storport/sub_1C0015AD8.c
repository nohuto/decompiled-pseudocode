/*
 * XREFs of sub_1C0015AD8 @ 0x1C0015AD8
 * Callers:
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C00682AC @ 0x1C00682AC (sub_1C00682AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0015AD8(int a1, char a2)
{
  unsigned int v2; // r8d
  bool v4; // zf

  v2 = 0;
  if ( a1 )
    return 0LL;
  if ( ((a2 - 8) & 0x5F) != 0 )
  {
    v4 = a2 == -120;
LABEL_5:
    LOBYTE(v2) = v4;
    return v2;
  }
  v4 = a2 == -120;
  if ( a2 == -120 )
    goto LABEL_5;
  return 1LL;
}
