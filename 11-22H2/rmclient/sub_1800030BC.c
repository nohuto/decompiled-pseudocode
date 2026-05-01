/*
 * XREFs of sub_1800030BC @ 0x1800030BC
 * Callers:
 *     sub_180003000 @ 0x180003000 (sub_180003000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800030BC(__int64 a1, int a2)
{
  int IsEnabled; // eax
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx

  IsEnabled = QuirkIsEnabled(1114131LL);
  v4 = 0;
  if ( IsEnabled && a2 >= 4 )
    return 2;
  if ( !a2 )
    return v4;
  v5 = a2 - 1;
  if ( !v5 )
    return v4;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
    return 2;
  if ( v7 == 1 )
    return 3;
  return v4;
}
