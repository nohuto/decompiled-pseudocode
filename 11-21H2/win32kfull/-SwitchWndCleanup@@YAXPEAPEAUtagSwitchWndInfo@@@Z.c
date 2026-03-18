/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01ED880
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C0103E60 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C01EE4E0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1)
{
  _QWORD *v2; // rcx

  v2 = *a1;
  if ( v2[2] )
  {
    FreeHwndList((struct tagBWL *)v2[2]);
    *((_QWORD *)*a1 + 2) = 0LL;
    v2 = *a1;
  }
  Win32FreePool(v2);
  *a1 = 0LL;
}
