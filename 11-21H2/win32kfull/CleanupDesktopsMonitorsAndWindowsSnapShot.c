/*
 * XREFs of CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0122740
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D2B30 (CleanMonitorsAndWindowsSnapshot.c)
 */

void __fastcall CleanupDesktopsMonitorsAndWindowsSnapShot(_QWORD **a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = (_QWORD *)*v1;
    v4 = v1;
    v1 = v3;
    if ( (_QWORD *)v3[1] != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = v5;
    CleanMonitorsAndWindowsSnapshot(v4);
    Win32FreePool(v4);
  }
}
