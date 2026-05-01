/*
 * XREFs of ?IsBetterFillRule@SnapLayoutHelpers@@YA_NW4FillRule@1@0@Z @ 0x1805A6DBC
 * Callers:
 *     ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NPEAUISnappedWindow@@W4FillRule@1@W4Edge@1@012@Z @ 0x1805A6CAC (-IsBetterFillCandidate@SnapLayoutHelpers@@YA_NPEAUISnappedWindow@@W4FillRule@1@W4Edge@1@012@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::IsBetterFillRule(int a1, int a2)
{
  int v2; // r8d
  int *v3; // rdi
  int v4; // r9d
  unsigned int v5; // r10d
  int v6; // ebx
  int v7; // r11d
  int v8; // eax

  v2 = -1;
  v3 = (int *)&unk_1806EF260;
  v4 = -1;
  v5 = 0;
  do
  {
    v6 = v5;
    v7 = v5;
    if ( v2 != -1 && v4 != -1 )
      break;
    v8 = *v3;
    ++v5;
    ++v3;
    if ( v8 != a1 )
      v7 = v2;
    v2 = v7;
    if ( v8 != a2 )
      v6 = v4;
    v4 = v6;
  }
  while ( v5 < 5 );
  return v2 < v4;
}
