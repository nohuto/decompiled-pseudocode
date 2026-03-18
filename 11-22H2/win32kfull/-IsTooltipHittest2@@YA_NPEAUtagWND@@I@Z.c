/*
 * XREFs of ?IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z @ 0x1C013D328
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00C09DC (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

char __fastcall IsTooltipHittest2(struct tagWND *a1, int a2)
{
  char v2; // r9
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  bool v10; // zf
  char v11; // r9

  v2 = 0;
  v3 = a2 - 2;
  if ( !v3 )
  {
    v11 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) >> 3;
    return v11 & 1;
  }
  v4 = v3 - 6;
  if ( !v4 )
  {
    v11 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) >> 1;
    return v11 & 1;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 11;
    if ( !v6 )
      return 1;
    v7 = v6 - 1;
    if ( !v7 )
      return 1;
    v8 = v7 - 45;
    if ( !v8 )
      return 1;
    v9 = v8 - 1;
    if ( !v9 )
      return 1;
    v10 = v9 == 1;
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 1) == 0 )
      return v2;
    v10 = !ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)0x100);
  }
  if ( v10 )
    return 1;
  return v2;
}
