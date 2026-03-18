/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x1C00A95E0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Base::IsSessionGlobalsAreaAllocated(Gre::Base *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 24) != 0LL;
}
