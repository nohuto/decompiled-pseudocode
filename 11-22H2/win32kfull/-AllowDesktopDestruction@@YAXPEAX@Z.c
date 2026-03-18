/*
 * XREFs of ?AllowDesktopDestruction@@YAXPEAX@Z @ 0x1C00BE040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AllowDesktopDestruction(void *a1)
{
  ObCloseHandle(a1, 0);
}
